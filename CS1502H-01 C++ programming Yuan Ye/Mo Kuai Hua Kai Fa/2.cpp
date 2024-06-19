#include <iostream>
#include <cstring>

using namespace std;

void showOption(){
    cout<<"欢迎来到Logo绘制系统："<<endl;
    cout<<"1--笔向上"<<endl;
    cout<<"2--笔向下"<<endl;
    cout<<"3--左转"<<endl;
    cout<<"4--右转"<<endl;
    cout<<"5 n--前进n格（n为正整数）"<<endl;
    cout<<"6--打印20*20数组"<<endl;
    cout<<"9--数据结束（标记）"<<endl;
}
struct guit{
    int arr[20][20]={0};
    int x=0,y=0;
    int dir=0;
    bool pen=false;
}a;
// Your code here
void move(int a[][20],int &y,int &x,int c,int n,bool b){
    if(b){
        if(c%4==0){
            for(int i=1;i<=n;i++){
                x++;
                a[y][x]=1;
            }
        }else if(c%4==1){
            for(int i=1;i<=n;i++){
                y++;
                a[y][x]=1;
            }
        }else if(c%4==2){
            for(int i=1;i<=n;i++){
                x--;
                a[y][x]=1;
            }
        }else{
            for(int i=1;i<=n;i++){
                y--;
                a[y][x]=1;
            }
        }
    }else{
        if(c%4==0){
            for(int i=1;i<=n;i++){
                x++;
            }
        }else if(c%4==1){
            for(int i=1;i<=n;i++){
                y++;
            }
        }else if(c%4==2){
            for(int i=1;i<=n;i++){
                x--;
            }
        }else{
            for(int i=1;i<=n;i++){
                y--;
            }
        }
    }
}
void pr(guit a){
    for(int i=0;i<=19;i++){
        for(int j=0;j<=19;j++){
            if(a.arr[i][j]==1){
                cout<<'*';
            }else cout<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    showOption();
    int inn;
    int n;
    cin>>inn;
    while(inn!=9){
        switch(inn){
            case 1:a.pen=false; break;
            case 2:a.pen=true;break;
            case 3:a.dir++;break;
            case 4:a.dir--;break;
            case 5:cin>>n;move(a.arr,a.y,a.x,a.dir,n,a.pen);break;
            case 6:pr(a);break;
        }
        cin>>inn;
    }
    // Your code here

    return 0;
}
