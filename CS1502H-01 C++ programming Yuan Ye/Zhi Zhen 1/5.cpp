#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*Start your code here*/
    bool flag = true;
    char str[30];
    //char* p1=str;
    cin.getline(str, 30);
    if (strlen(str) >= 20) cout << "输入不符合要求";
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == '^')
            //&& str[i]>90 && str[i]<97 && str[i]>122
            //&& str[i]<48 && str[i]>57 && str[i]!=',' &&str[i]!='"'
            //&& str[i]!='.' && str[i]!='@' &&str[i]!='$'
            //&& str[i]!='#' )
        {
            flag = false;
            //if(!flag) 
            cout << "输入不符合要求";
        }



    if (flag)
    {
        int start = 0, i = 0;
        char str_new[30];
        for (int j = 0; str[j] != '\0'; ++j)
        {
            if (str[j] != 'f' && str[j] != 'F' && str[j] != 'l' && str[j] != 'L'
                && str[j] != 'd' && str[j] != 'D')
            {
                str_new[i] = str[j];
                ++i;
            }


            if (str[j] == 'f' || str[j] == 'F')
            {
                start = j; j++;
                while (str[j] == ' ' || str[j] == '@' || str[j] == '$' || str[j] == '#')
                    j++;
                if (str[j] == 'd' || str[j] == 'D')
                    continue;
                else {
                    str_new[i] = str[start]; i++;
                    j = start;
                }

            }


            if (str[j] == 'l' || str[j] == 'L')
            {
                start = j; j++;
                while (str[j] == ' ' || str[j] == '@' || str[j] == '$' || str[j] == '#')
                    j++;
                if (str[j] == 4)
                    continue;
                else {
                    str_new[i] = str[start]; i++;
                    j = start;
                }

            }


            if (str[j] == 'd' || str[j] == 'D')
            {
                start = j; j++;
                //while(str[j++]==' ' ||str[j++]=='@' ||str[j++]=='$'|| str[j++]=='#')
                //j++;
                if (str[j] == '2')//?''
                    j++;
                //while(str[j++]==' ' ||str[j++]=='@' ||str[j++]=='$'|| str[j++]=='#')
                //j++;


                if (str[j] == '6')
                    continue;
                else {
                    str_new[i] = str[start]; i++;
                    j = start;
                }
            }

        }
        str_new[i++] = '\0';
        for (int j = 0; str_new[j] != '\0'; ++j)
            cout << str_new[j];

    }


    /*end your code*/
    return 0;
}
