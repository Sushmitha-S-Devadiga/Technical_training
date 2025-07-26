#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int miss(char *s)
{ 
int count=0;
for(int i=0;s[i]!='\0';i++)
{
	if(islower(s[i])) //if(!(isspace(s[i])||(isalphanum(s[i]))
	                   ///count++;
	{
		count=0;
	}
	else if(isupper(s[i]))
	{
		count=0;
	}
	else if(isdigit(s[i]))
	{
		count=0;
	}
	else if(isspace(s[i]))
	{
		count=0;
	}
	else
	 count++;
}
	
return count;	
}
int main()
{
	char s[100];
	cout<<"Enter a string of text";
	cin.getline(s,100);//cin<<s;
	int x=miss(s);
	cout<<"count=" <<x;
}
