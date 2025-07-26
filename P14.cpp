#include<iostream>
using namespace std;
float circle(int x)
{
	float area;
	area =3.14*x*x;
	return area;
	
}
int main()
{
	int l; 
	float Area;
	cin>>l;
	Area=circle(l);
	cout<<"Area is =" <<Area;
	
}
