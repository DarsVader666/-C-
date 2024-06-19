#include <iostream>
#include "class.h"
using namespace std;

int main() {
    char inn[100];
    char judge,c;
    char target;
    int start, n,index;
    cin.getline(inn, 100);
    String s(inn);
    cin >> judge;
    while (judge != '@') {
        switch (judge) {
            case '0': {
                int length= s.length();
                break;
            }
            case '1': {
                cin >> start >> n;
                s.substr(start, n);
                break;
            }
            case '2': {
                cin >> target;
                cout << s.find_first_of(target) << endl;
                break;
            }
            case '3': {
                cin>>index>>c;
                s.add_before(index,c);
                break;
            }
            case '4': {
                cin>>index;
                s.delete_at(index);
                break;
            }
            case '5': {
                s.printStr();
                break;
            }
        }
        cin >> judge;
    }

    return 0;
}