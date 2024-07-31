#include<iostream>
using namespace std;

const int n = 5;
int arr[n];
int front = -1, rear = -1;


void Enqueue(int val) {
    if (rear == n - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1 && rear == -1) {
            front++;
            rear++;
        } else {
            rear++;
        }
        arr[rear] = val;
    }
}


void Dequeue() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}


void Dequeue2() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        if (front == rear) {
            front = rear = -1;
        } else {

            for(int i=0;i<=n;i++){
                arr[i]=arr[i+1];
                rear--;
            }
        }
    }
}

int peek() {
    if (front >= 0) {
        return arr[front];
    } else {
        cout << "Queue is Empty" << endl;
        return -1;
    }
}

bool isEmpty() {
    if (front == -1) {
        return true;
    } else {
        return false;
    }
}

void display() {
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int x;
    cout << "Enter your choice:" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Dequeue2" << endl;
    cout << "4. Peek" << endl;
    cout << "5. Check if Empty" << endl;
    cout << "6. Display" << endl;
    cout << "7. Exit" << endl;
    while (true) {
        cout << "Enter your choice:" << endl;
        cin >> x;
        switch (x) {
            case 1:
                int val;
                cout << "Enter value:" << endl;
                cin >> val;
                Enqueue(val);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
               Dequeue2();
                break;
            case 4:
                 cout << "Front element: " << peek() << endl;
                break;
            case 5:
                if (isEmpty()) {
                    cout << "Queue is Empty" << endl;
                } else {
                    cout << "Queue is not Empty" << endl;
                }
                break;
            case 6:
                display();
                break;
            case 7:
                return 0;
            default:
                cout << "Error" << endl;
        }
    }
    return 0;
}
