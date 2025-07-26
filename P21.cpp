#include<iostream>
using namespace std;
#include<math.h>
float maths(float x,float y)
{
	float z;
	float r;
	r=exp(x);
	z=(log10(r)+log(sqrt(y)))/(sin(x)+exp(x)+pow(x,y));
	return z;
}
int main()
{
	float a,b;
	cin>>a>>b;
	float res;
	res=maths(a,b);
	cout<<"Answer is = "<<res;
	return 0;
}


