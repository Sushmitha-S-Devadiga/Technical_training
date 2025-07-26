#include<iostream>
using namespace std;

int sumInRange(int start, int end) {
    int sum = 0;
    for(int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    cout << "Sum = " << sumInRange(start, end) << endl;
    return 0;
}

