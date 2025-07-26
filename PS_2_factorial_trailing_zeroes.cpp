#include<iostream>
using namespace std;
int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
	
	
}
int countTrailingZeros(int x)
{
	int count=0;
	
	int y=factorial(x);
	cout<<"factorial is = "<<y<<endl;
	
		while(y % 10 == 0)
    {
        count++;
        y = y / 10;
    }
    return count;

}
int main()
{
	int x;
	int f;
	cout<<"enter a number";
	cin>>x;
	f=countTrailingZeros(x);
	cout<<"trailing zeros are = "<<f;
}


