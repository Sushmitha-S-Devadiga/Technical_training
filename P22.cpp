#include<iostream>
using namespace std;
int evenorodd(int a)
{
	if(a%2==0)
	{
		return true;
	}
	else return false;
	
}
int main()
{
	int x,t;
	cout<<"enter a number";
	cin>>x;
	t=evenorodd(x);
	if(t)
	{
		cout<<"true";
		
	}
	
	
}
