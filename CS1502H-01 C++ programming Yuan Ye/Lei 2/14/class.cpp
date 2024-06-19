#include "class.h"
#include <cstring>
#include <iostream>
using namespace std;
Calculator::Calculator(const char* expr) {
    self_expression = new char[strlen(expr) + 1];
    total_expression = new char[2 * strlen(expr) + 1];  // Double the size to accommodate concatenation

    strcpy(self_expression, expr);
    strcpy(total_expression, expr);

    value = 0;
    int tempValue = 0;
    bool isAddition = true;

    for (int i = 0; i < strlen(expr); i++) {
        if (expr[i] == '+') {
            value += (isAddition ? tempValue : -tempValue);
            isAddition = true;
            tempValue = 0;
        } else if (expr[i] == '-') {
            value += (isAddition ? tempValue : -tempValue);
            isAddition = false;
            tempValue = 0;
        } else if (isdigit(expr[i])) {
            tempValue = tempValue * 10 + (expr[i] - '0');
        }
    }
    value += (isAddition ? tempValue : -tempValue);
}

Calculator::~Calculator() {
    delete[] self_expression;
    delete[] total_expression;
}

Calculator& Calculator::combine(const Calculator& sa) {
    strcat(total_expression, sa.self_expression);

    int tempValue = 0;
    bool isAddition = true;
    for (int i = 0; i < strlen(sa.self_expression); i++) {
        if (sa.self_expression[i] == '+') {
            value += (isAddition ? tempValue : -tempValue);
            isAddition = true;
            tempValue = 0;
        } else if (sa.self_expression[i] == '-') {
            value += (isAddition ? tempValue : -tempValue);
            isAddition = false;
            tempValue = 0;
        } else if (isdigit(sa.self_expression[i])) {
            tempValue = tempValue * 10 + (sa.self_expression[i] - '0');
        }
    }
    value += (isAddition ? tempValue : -tempValue);

    return *this;
}

void Calculator::print_value() const {
    cout << "value is " << value << endl;
}

void Calculator::print_total_expression() const {
    cout << total_expression << endl;
}

void Calculator::print_self_expression() const {
    cout << self_expression << endl;
}
