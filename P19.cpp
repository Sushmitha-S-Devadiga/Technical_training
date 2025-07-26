#include<iostream>
#include<ctime>
#include<cstdlib> 

using namespace std;

int generateRandom() {
    return (rand() % 10000 + 1);
}

int main() {
    srand(time(0)); 
    int r = generateRandom();
    cout << r;
    return 0;
}

