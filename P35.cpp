#include<iostream>
using namespace std;
int grade(int a,int b,int c)
{

int total=a+b+c;

int	avg=total/3;
	cout<<"your avg marks is ="<<avg;
	if(avg>90)
	{
		cout<<"\nur grade A+";
	}
	else if(avg>80)
	{
		cout<<"\nur grade is A";
	}
	else if(avg>70)
	{
		cout<<"\nur grade is B+";
		
	}
	else if(avg>60)
	{
		cout<<"\n ur grade is B";
	}
	else if(avg>50)
	{
		cout<<"\nur grade is C";
	}
	else if(avg>40)
	{
		cout<<"\n ur grade is D";
	}
	else if(avg>35)
	{
		cout<<"\n ur grade is E";
		
	}
	else
	cout<<"\n You Are Fail";
}
int main()
{
	int a,b,c,total;
	
	cout<<"enter ur a,b,c sub marks";
	cin>>a>>b>>c;
	total=grade(a,b,c);
}
	
