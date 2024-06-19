#include <iostream>
using namespace std;

int main()
{
    /*Start your code here*/
    char str[31];
    cin.getline(str, 31);
    int num[] = { 8,7,3,4,9,6,2 };
    for (int i = 0; str[i] != '\0'; ++i)
    {
        int j = i % 7;
        str[i] = str[i] + num[j];
        if (str[i] < 32)
            str[i] = 32 + (str[i] - 32) % (122 - 32 + 1);
        if (str[i] > 122)
            str[i] = str[i] % 91;
    }
    for (int i = 0; str[i] != '\0'; ++i)
        cout << str[i];
    cout << endl;//加密

    for (int i = 0; str[i] != '\0'; ++i)
    {
        int j = i % 7;
        str[i] = str[i] - num[j];
        if (str[i] < 32)
            str[i] = str[i] + 91;
        if (str[i] > 122)
            str[i] = 32 + (str[i] - 32 + (122 - 32 + 1)) % (122 - 32 + 1);
    }
    for (int i = 0; str[i] != '\0'; ++i)
        cout << str[i];







    /*end your code*/
    return 0;
}