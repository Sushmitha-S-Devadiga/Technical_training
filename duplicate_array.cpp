#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
int* uniqueArray(int *x)
{
	int count=0,flag;
	int *y=(int*)malloc(n* sizeof(int));
	for(int i=0;i<n;i++)
	{
		flag=1;
		for(int j=0;j<count;j++)
		{
		
		if(x[i]==y[j])
		{
			flag=0;
			break;
		}
		
		}
		if(flag==1)
		{
		
			y[count]=x[i];
			count++;
	}
	}
	
	n=count;
	return y;
	
}
int main()
{
     int *p,*q,i;
	 cin>>n;
	 p=(int*)malloc(n*sizeof(int));
	 for(i=0;i<n;i++)
	 {
	 	cin>>p[i];
		 }
		 q=uniqueArray(p);
		 for(i=0;i<n;i++)
		 {
		 	 cout<<q[i]<<"\t";
			 }	
			 free(q);
			 free(p);
			 return 0;
}
