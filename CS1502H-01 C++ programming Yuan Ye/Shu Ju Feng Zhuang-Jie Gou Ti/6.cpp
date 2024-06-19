#include <iostream>
#include<cstring>
#include<string>
using namespace std;
struct student {
    long number;
    string name;
    int a;
    int b;
    int c;
};
struct books {
    struct student students[1000];
    int size;
};
int isExistnumber(books* abs, long number);
//1.添加学生信息;
void addstudent(books *abs)
{
    long number1;
    cin >> number1;
    int num=isExistnumber(abs,number1);
    if (isExistnumber(abs, number1) == -1) {
        abs->students[abs->size].number = number1;

        int a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        abs->students[abs->size].a = a1;
        abs->students[abs->size].b = b1;
        abs->students[abs->size].c = c1;
        cin.ignore();
        getline(cin, abs->students[abs->size].name);

        abs->size++;
    }
    else {
        abs->students[num].number = number1;

        int a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        abs->students[num].a = a1;
        abs->students[num].b = b1;
        abs->students[num].c = c1;
        string name1;
        cin.ignore();
        getline(cin, name1);
        abs->students[num].name = name1;
    }

}
//按照学号查找学生位置
int isExistnumber(books* abs, long number) {
    for (int i = 0; i < abs->size; i++) {
        if (abs->students[i].number == number) return i;
    }
    return -1;
}
//按照姓名查找学生位置
int isExistname(books* abs, string name) {
    for (int i = 0; i < abs->size; i++) {
        if (abs->students[i].name == name) return i;
    }
    return -1;
}
//2.修改学生信息
void modifystudent(books* abs) {
    long number1;
    cin >> number1;
    int ret = isExistnumber(abs, number1);
    if(ret!=-1){
        int a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        abs->students[ret].a = a1;
        abs->students[ret].b = b1;
        abs->students[ret].c = c1;
        string name1;
        cin.ignore();
        getline(cin, name1);
        abs->students[ret].name = name1;
        }
    else {
        string name1;
        cin.ignore();
        getline(cin,name1);
        return;
    }

}
//3.按学号删除学生
void deletestudent(books* abs) {
    long number1;
    cin >> number1;
    int ret = isExistnumber(abs, number1);
    if (ret != -1) {
        for (int i = ret; i < abs->size - 1; i++) {
            abs->students[i] = abs->students[i + 1];
        }
        abs->size--;
    } 
    
}

//4.按学号查询学生信息
void showstudent(books* abs) {
    long number1;
    cin >> number1;
    int ret = isExistnumber(abs, number1);
    if (ret != -1) {
        cout << abs->students[ret].number << " ";
        cout << abs->students[ret].name << " ";
        cout << abs->students[ret].a << " ";
        cout << abs->students[ret].b << " ";
        cout << abs->students[ret].c <<" "<<endl;
    } 
}
//按学号升序排序
void bubblenumber(books* abs) {
    for (int i = 0; i < abs->size - 1; i++) {
        for (int j = 0; j < abs->size - 1 - i; ++j) {
            if (abs->students[j].number > abs->students[j + 1].number) {
                student tmp = abs->students[j];
                abs->students[j] = abs->students[j + 1];
                abs->students[j + 1]= tmp;
            }
        }
    }
}
//总分
int total(books* abs,int i) {
    int a = abs->students[i].a;
    int b = abs->students[i].b;
    int c = abs->students[i].c;
    int num = a + b + c;
    return num;


}
//按照总分降序排序
void bubblegrade(books* abs) {
    for (int i = 0; i < abs->size - 1; i++) {
        for (int j = 0; j < abs->size - 1 - i; ++j) {

            if (total(abs,j) <total(abs,j+1)) {
                student tmp = abs->students[j];
                abs->students[j] = abs->students[j + 1];
                abs->students[j + 1] = tmp;
            }
            if(total(abs,j) ==total(abs,j+1)){
                if (abs->students[j].number > abs->students[j + 1].number) {
                    student tmp = abs->students[j];
                    abs->students[j] = abs->students[j + 1];
                    abs->students[j + 1]= tmp;
                }
            }
        }
    }
}
//输出所有人
void printstudent(books* abs) {
    for (int i = 0; i < abs->size; i++) {
        cout << abs->students[i].number << " ";
        cout << abs->students[i].name << " ";
        cout << abs->students[i].a << " ";
        cout << abs->students[i].b << " ";
        cout << abs->students[i].c<<" ";
        cout << endl;
    }
}
//5.按姓名查询学生信息
void showname(books* abs) {
    string name1;
    cin.ignore();
    getline(cin, name1);
    bubblenumber(abs);
    for (int i = 0; i < abs->size; i++) {
        if (abs->students[i].name == name1) {
            cout << abs->students[i].number << " ";
            cout << abs->students[i].name << " ";
            cout << abs->students[i].a << " ";
            cout << abs->students[i].b << " ";
            cout << abs->students[i].c<<" ";
            cout << endl;
        }
    }
   

}
//6.按学号升序排序
void bubblenumber1(books* abs) {
    bubblenumber(abs);
    printstudent(abs);
}
//7.按总分降序排序
void bubbletotal1(books* abs) {
    bubblegrade(abs);
    printstudent(abs);
}
int main()
{
    books abs;
    abs.size = 0;
    int select = 0;
    while (true) {
        cin >> select;
        switch (select)
        {
        case 1://添加学生信息
            addstudent(&abs);
            break;
        case 2://修改学生信息
            modifystudent(&abs);
            break;
        case 3://按学号删除学生
            deletestudent(&abs);
            break;
        case 4://按学号查询学生信息
            showstudent(&abs);
            break;
        case 5:
            showname(&abs);
            break;
        case 6:
            bubblenumber1(&abs);
            break;
        case 7:
            bubbletotal1(&abs);
            break;
        case 0:
            return 0;
            break;
        default:
            break;
        }
    }


    return 0;
}
