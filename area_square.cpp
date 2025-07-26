#include<iostream>
using namespace std;
int area(int a)
{
	int res;
	res =a*a;
	return res;
	
}
int main()
{
	int x, Area;
	cin>>x;
	Area=area(x);
	cout<<"Area is =" <<Area;
	
}
