/*#include <iostream>
#include <string>
using namespace std;

#define MAX 100

int isPrecedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
        case '^':
            return 4;
        default:
            return 0;
    }
}

char stack[MAX];
int top = -1;
string postfix = "";

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

void display() {
    for (int i = 0; i <= top; i++) {
        cout << stack[i];
    }
    cout << endl;
}

int main() {
    string str = " ((A + B) – C * (D / E)) + F";
    int j = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        switch (ch) {
            case '(':
                push(ch);
                break;
            case ')':
                while (stack[top] != '(') {
                    postfix += pop();
                }
                pop();
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                if (top == -1 || stack[top] == '(') {
                    push(ch);
                }
                else {
                    while (top != -1 && stack[top] != '(' && isPrecedence(stack[top]) >= isPrecedence(ch)) {
                        postfix += pop();
                    }
                    push(ch);
                }
                break;
            default:
                postfix += ch;
                break;
        }
    }

    while (top != -1) {
        postfix += pop();
    }

    cout << "Infix: " << str << endl;
    cout << "Postfix: " << postfix << endl;

    return 0;
} */

#include <iostream>
#include <string>
using namespace std;

#define MAX 100

int stack[MAX];
int top = -1;

void push(int num) {
    stack[++top] = num;
}

int pop() {
    return stack[top--];
}

int main() {
    string str = "2 3 1 * + 9 -";
    int j = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == ' ') {
            continue;
        }

        if (isdigit(ch)) {
            int num = 0;
            while (i < str.length() && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;
            push(num);
        } else {
            int operand2 = pop();
            int operand1 = pop();

            switch (ch) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }
        }
    }

