#include<iostream>
using namespace std;
void pos(int a)
{
    (a>0)?(cout<<"positive"):(cout<<"negative");	
}
int main()
{
	int x;
	cin>>x;
	pos(x);
}
