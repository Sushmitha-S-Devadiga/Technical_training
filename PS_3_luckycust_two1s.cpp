#include<iostream>
using namespace std;
int fibo(int n)
{
	int a=1,b=1,c,count=2;
	if(n==1||n==2)
	return a;//or u can write return b or ret 1
	while(1)
	{
		count++;
		c=a+b;
		a=b;
		b=c;
		if(count==n)
		return c;
	}
}
int main()
{
	int x,n;
	cin>>x;
	n=fibo(x);
	cout<<n;
}
