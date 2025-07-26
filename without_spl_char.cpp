#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;

char* withoutspl(char *x,int len)
{
	
	char *y=(char*)malloc(len* sizeof(char));
	int k=0;
	for(int i=0;i<len;i++)
	{ 
	
		if(isspace(x[i])||isalnum(x[i]))
		{
			y[k]=x[i];
			k++;
		}
	}
	//y[k]='\0';
	return y;
		
		
	
	

	
}
int main()
{
     int i,n=0;
     char *p=(char*)malloc(1000*sizeof(char));
	 cin.getline(p,1000);
	 
	 for(i=0;p[i]!='\0';i++)
	 {
	 	n++;
		 }
		 p=(char*)realloc(p,n*sizeof(char));
		 char *q=withoutspl(p,n);
		 
		 	 cout<<q;
			 	
			 free(q);
			 free(p);
			 return 0;
}
