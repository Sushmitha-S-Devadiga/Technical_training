#include<iostream>
#include<cstdlib>  
#include<ctime>   
using namespace std;


int getRandomInRange(int start, int end) {
    return rand() % (end - start + 1) + start;
}

int main() {
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;

    
    srand(time(0));

    int randomNumber = getRandomInRange(start, end);
    cout << "Random number between " << start << " and " << end << " is: " << randomNumber << endl;
    return 0;
}

