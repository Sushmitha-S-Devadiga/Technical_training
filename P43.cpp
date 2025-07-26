#include<iostream>
using namespace std;

void printEvenNumbers(int start, int end) {
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    printEvenNumbers(start, end);
    return 0;
}

