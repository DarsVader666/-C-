// 请在下方添加代码
/********** Begin *********/
#include <iostream>
using namespace std;

int main()
{
    char str1[160];
    int i=0;
    bool flag=true;
    while((str1[i]=cin.get())!='\n')
        i++;
    str1[i] = '\0';
    char str2[160];
    int j=0;
    while((str2[j]=cin.get())!='\n')
        j++;
    str2[j] = '\0';
    int loc;
    for(int m=0;str1[m]!='\0';m++){
        if(str1[m]==str2[0]){
            int n;
            for(n=1;str2[n]!='\0';n++){
                if(str1[m+n]!=str2[n]){
                    flag=false;
                    loc=m+n;
                    break;
                } 
            }
            if (str2[n] == '\0') { 
                flag = true;
                loc = m;
                break;
            }
        }
    }
    if (flag==false) cout << "-1" << endl;
    else cout << loc << endl;

    return 0;
}

/********** End **********/