#include<iostream>
using namespace std;
int great(int a,int b)
{
	if(a>b)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	int x,t,res;
	cout<<"enter a number";
	cin>>x>>t;
	res=great(x,t);
	if(res)
	{
		cout<<"greatest is"<<x;
		
	}
	else
	cout<<"greatest is"<<t;
	
}
