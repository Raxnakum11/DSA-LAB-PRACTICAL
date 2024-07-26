#include<iostream>
using namespace std;

const int n = 5;
int arr[n];
int top = -1;

void push(int ele) {
    if(top == n-1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = ele;
    }
}

void pop() {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        top--;
    }
}

int peek() {
    if(top >= 0) {
        return arr[top];
    } else {
        cout << "Stack is Empty" << endl;
        return -1;
    }
}

bool isEmpty() {
    if(top == -1) {
        return true;
    } else {
        return false;
    }
}

void display() {
    for(int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int x;
        cout << "Enter your choice:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if Empty" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
    while(true) {
         cout << "Enter your choice:" << endl;
        cin >> x;
        switch(x) {
            case 1:
                int val;
                cout << "Enter value:" << endl;
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "Top element: " << peek() << endl;
                break;
            case 4:
                if(isEmpty()) {
                    cout << "Stack is Empty" << endl;
                } else {
                    cout << "Stack is not Empty" << endl;
                }
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                cout << "Error" << endl;
        }
    }
    return 0;
}
