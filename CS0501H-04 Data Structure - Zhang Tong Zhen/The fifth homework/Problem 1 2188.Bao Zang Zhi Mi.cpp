#include<cmath>
#include<iostream>
using namespace std;
template <class elemType>
class priorityQueue
{
private:
    elemType* array;   int maxSize, currentLen;
   // void doubleSpace(); //扩展队队列元素的存储空间             
    void adjust(int hole); //调整下标为hole的元素，使成为小顶堆
    void build(int r); //递归调整
public:
    priorityQueue(int size = 10); //建立空优先级队列
    priorityQueue(elemType a[], int n); //建立非空优先级队列，即建小顶堆
    bool isEmpty() { return currentLen == 0; };  //判断队空否
    bool isSingle() {
        return currentLen == 1;
    }
    bool isFull() { return (currentLen == maxSize - 1); };  //判断队满否
    elemType front(); //读取队首元素的值，队首不变
    void enQueue(const elemType& x); //将x进队，成为新的队尾
    void deQueue(); //将队首元素出队
    ~priorityQueue() { delete[]array; }; //释放队列元素所占据的动态数组
};
template <class elemType>
priorityQueue<elemType>::priorityQueue(int size) //建立空优先级队列
{
    array = new elemType[size]; //申请实际的队列存储空间
    maxSize = size;
    currentLen = 0;
}
template <class elemType>
priorityQueue<elemType>::priorityQueue(elemType a[], int n) //建立优先级队列
{
    array = new elemType[n + 10]; //申请实际的队列存储空间，多10，支持入队
    maxSize = n + 10;     currentLen = n;
    for (int i = 1; i <= n; i++)    array[i] = a[i - 1];
    for (int i = n / 2; i >= 1; i--)     adjust(i);   //首次建立小顶堆
}
/*template <class elemType>
priorityQueue<elemType>::priorityQueue(elemType a[], int n) //另一种方法建立优先级队列
{
    if (n < 1) throw illegalSize();
    array = new elemType[n + 10]; //申请实际的队列存储空间，多10，支持入队
    if (!array) throw illegalSize();
    maxSize = n + 10;     currentLen = n;
    for (int i = 0; i < n; i++) array[i + 1] = a[i];
    build(1);  //建立小顶堆
}*/
template <class elemType>
void priorityQueue<elemType>::build(int r) //调整为优先级队列
{
    if (r > currentLen / 2) return;
    build(2 * r);  //将左子树调整为堆
    build(2 * r + 1);  //将右子树调整为堆
    adjust(r);
}
template <class elemType>
void priorityQueue<elemType>::adjust(int hole)
//反复向下调整hole的位置
{
    int minChild;      elemType x;
    x = array[hole];
    while (true)
    {
        minChild = 2 * hole;  //hole的左子下标
        if (minChild > currentLen) break;
        if (minChild + 1 <= currentLen) //hole还有右子
            if (array[minChild] < array[minChild + 1])
                minChild++; //右子最小

        if (x > array[minChild]) break;
        array[hole] = array[minChild];
        hole = minChild;  //继续向下调整
    }

    array[hole] = x;
}
//比较次数最多为：二叉树的高度
template <class elemType>
elemType priorityQueue<elemType>::front() //读取队首元素的值，队首不变
{
     return array[1];
}

template <class elemType>
void priorityQueue<elemType>::deQueue() //将队首元素出队
{
    array[1] = array[currentLen];   currentLen--;
    adjust(1);
}
template <class elemType>
void priorityQueue<elemType>::enQueue(const elemType& x)  //将x进队
{
 //   if (isFull())  doubleSpace();
    int hole; //hole位置向上调整
    currentLen++;
    for (hole = currentLen; hole > 1 && x > array[hole / 2]; hole /= 2)
        array[hole] = array[hole / 2];
    array[hole] = x;
}
//比较次数最多为二叉树高度，故入队时间效率为O(log_2n)

int main(){
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	priorityQueue<int> pq(a,n);
	while(true){
		int temp1, temp2;
		temp1 = pq.front();
		pq.deQueue();
        if (pq.isEmpty()) {
            cout << temp1;
            return 0;
        }
		temp2 = pq.front();
		pq.deQueue();
		pq.enQueue(abs(temp1 - temp2));
	}
	cout << pq.front();
}