#include<iostream>
using namespace std;
int rarea(int x,int y)
{
	int area;
	area =x*y;
	return area;
	
}
int main()
{
	int l,b, Area;
	cin>>l>>b;
	Area=rarea(l,b);
	cout<<"Area is =" <<Area;
	
}
