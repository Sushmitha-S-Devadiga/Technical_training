#include<iostream>
using namespace std;

void printNumbersDoWhile() {
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while(i <= 10);
}

int main() {
    printNumbersDoWhile();
    return 0;
}

