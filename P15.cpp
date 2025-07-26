#include<iostream>
using namespace std;
float tri(int x,int y)
{
	float area;
	area =0.5*x*y;
	return area;
	
}
int main()
{
	int l,b; 
	float Area;
	cin>>l>>b;
	Area=tri(l,b);
	cout<<"Area is =" <<Area;
	
}
