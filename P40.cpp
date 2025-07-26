#include<iostream>
using namespace std;

void printRangeWhile(int start, int end) {
    while(start <= end) {
        cout << start << endl;
        start++;
    }
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    printRangeWhile(start, end);
    return 0;
}

