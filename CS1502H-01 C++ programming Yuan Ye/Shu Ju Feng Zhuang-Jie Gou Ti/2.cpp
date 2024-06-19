#include <iostream>

using namespace std;
struct C {
    int Re,Im;
};
void setC(C &a,int a1,int a2) {
    a.Re = a1;
    a.Im = a2;
}
void print(C &a) {
    if (a.Re != 0) cout << a.Re;
    if (a.Re != 0 && a.Im != 0&&a.Im>0) cout << '+';
    if (a.Im != 0) cout << a.Im<<'i';
    cout << endl;
}
void multi(C & a, C & b) {
    int aa, bb;
    setC(b, a.Re * b.Re - a.Im * b.Im, a.Im * b.Re + a.Re * b.Im);
}
void multii(C& a, C& b,C&res) {
    setC(res, a.Re * b.Re - a.Im * b.Im, a.Im * b.Re + a.Re * b.Im);
}
void sum(C&a,C&b,C&res){
    setC(res, a.Re + b.Re, a.Im + b.Im);
}
int main()
{
    C a, b,res;
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    setC(a, a1, a2);
    setC(b, b1, b2);
    cout << "x = ";
    print(a);
    cout << "y = ";
    print(b);
    setC(a, a1 + b1, a2 + b2);
    cout << "x += y; x = ";
    print(a);
    multi(a,b);
    cout << "y *= x; y = ";
    print(b);
    sum(a, b, res);
    cout << "x + y = ";
    print(res);
    multii(a, b, res);
    cout << "y * x = ";
    print(res);
    cout << "x = ";
    print(a);
    cout << "y = ";
    print(b);
    return 0;
}
