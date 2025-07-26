#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	cout<<" swapped number x= "<<x<<endl;
	cout<<"swapped y= "<<y;
	
	
}
int main()
{
	int l,b;
	cin>>l>>b;
	swap(l,b);
	return 0;
	
}
