#include<iostream>
using namespace std;
class seqStack
{
private:
	char* array;   
	int Top;          
	int maxSize;	
	void doubleSpace();
public:
	seqStack(int initSize = 100); 
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
	int len;
	cin >> len;
	seqStack s(len);
	char* intputArray = new char[len];
	for (int i = 0; i < len; i++) cin >> intputArray[i];
	s.push(intputArray[0]);
	for (int i = 1; i < len; i++) {
		if (s.top() == intputArray[i]) {
			s.pop();
		}
		else s.push(intputArray[i]);
	}
	seqStack d(len);
	while (!s.isEmpty()) {
		d.push(s.top());
		s.pop();
	}
	while (!d.isEmpty()) {
		cout << d.top();
		d.pop();
	}
	system("pause");
	return 0;
}