#include<iostream>
#include<cstring>
using namespace std;
class seqStack
{
private:
	char* array;   
	int Top;          
	int maxSize;
	//void doubleSpace();
public:
	seqStack(int initSize = 1000); 
	bool isEmpty() { return (Top == -1); };
	bool isFull() { return (Top == maxSize - 1); };
	char top();
	void push(const char& e);
	void pop(); 
	~seqStack() { delete[]array; }; 
	
};
seqStack::seqStack(int len) {
	maxSize = len;
	Top = -1;
  	array = new char[maxSize];
}
void seqStack:: push(const char& e) {
	Top++;
	array[Top] = e;
}
char seqStack::top() {
	return array[Top];
}
void seqStack::pop() {
	Top--;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	seqStack fruit(1005);
	//seqStack student(1005);
	seqStack reverse(1005);
	char* str1=new char[1024];
	
	cin.getline(str1,1024);
	
	int len1 = strlen(str1);
	char* stu = new char[len1+1];
	for (int i = 0; i < len1; i++) {
		cin >> stu[i];
	}
	//cin.getline(str2, 1024);
	for (int i = 0; i < len1; i++) {
		fruit.push(str1[i]);
	}
	
	while (!fruit.isEmpty()) {
		reverse.push(fruit.top());
		fruit.pop();
	}
	int i = 0,j=len1,flag=0;
	while (j>0) {
		if (reverse.top() == stu[i]) {
			reverse.pop();
			for (int k = i; k < j - 1; k++) {
				stu[k] = stu[k + 1];
			}
			j--;
		}
		else i++;
		if (i == j) i = 0;
		flag++;
		if (flag > len1 * len1) break;
	}
	cout << j;
	system("pause");
	return 0;
}