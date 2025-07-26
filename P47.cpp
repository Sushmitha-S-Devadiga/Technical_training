#include<iostream>
using namespace std;

int sumOddInRange(int start, int end) {
    int sum = 0;
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    cout << "Sum of odd numbers = " << sumOddInRange(start, end) << endl;
    return 0;
}

