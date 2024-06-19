#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    /*Start your code here*/
    char* sentence = new char[100];
    cin.getline(sentence, 100);
    char* order = new char[10];
    cin.getline(order, 10);//获得输入顺序
    char* p = sentence, * q = sentence;
    int count = 0;
    char** words = new char* [10];
    while (*p != '\0') {
        if (*p == ' ') {
            words[count] = new char[p - q + 1];
            for (int i = 0; i < p - q; ++i)
                words[count][i] = *(q + i);
            words[count][p - q] = '\0';
            q = p + 1;
            count++;
        }
        p++;
    }

    words[count] = new char[p - q + 1];
    for (int i = 0; i < p - q; ++i)
        words[count][i] = *(q + i);
    words[count][p - q] = '\0';
    count++;
    cout << count << endl;
    //

    p = order;
    while (*p != '\0') {
        cout << words[(int)(*p - '0')] << ' ';
        ++p;
    }

    /*end your code*/
    delete[] sentence;
    delete[] order;
    for (int i = 0; i < count; i++)
        delete[] words[i];
    delete[] words;
    return 0;
}