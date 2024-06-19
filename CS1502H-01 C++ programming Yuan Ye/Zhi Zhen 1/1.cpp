#include <iostream>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];

    cin.getline(str1, 20);
    cin.getline(str2, 20);

    /*Start your code here*/
    char* a1 = str1;
    char* a2 = str2;
    int i = 0;
    char temp;
    while (a1[i] !='\0'  && a2[i] != '\0') {
        temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
        i++;
    }
    int j = 0;
    while (a1[j] != '\0') {
        cout << a1[j];
        j++;
    }
    cout << endl;
    j = 0;
    
    while (a2[j] != '\0') {
        cout << a2[j];
        j++;
    }
    /*end your code*/
    return 0;
}
