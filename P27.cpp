#include<iostream>
using namespace std;
int min(int a,int b)
{
	if(a<b)
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
	res=min(x,t);
	if(res)
	{
		cout<<"minimum is"<<x;
		
	}
	else
	cout<<"minimum is"<<t;
	
}
///VOID
//(a>b)?(cout<<a):(cout<<b);
