#include<iostream>
using namespace std;

void printRangeDoWhile(int start, int end) {
    if(start <= end) {
        do {
            cout << start << endl;
            start++;
        } while(start <= end);
    }
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    printRangeDoWhile(start, end);
    return 0;
}

