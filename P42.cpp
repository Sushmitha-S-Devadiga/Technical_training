#include<iostream>
using namespace std;

void printRangeFor(int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << i << endl;
    }
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    printRangeFor(start, end);
    return 0;
}

