#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

// Function to print primes in the given range
void printPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;
    printPrimesInRange(start, end);
    return 0;
}

