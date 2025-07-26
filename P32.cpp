#include<iostream>
using namespace std;
int result(int m,int p,int c)
{
	int total,avg;
	if(m>35)
		{
			if(p>35)
			{
				if(c>35)
				{
					total=m+p+c;
					avg=total/3;
					return 1;
					
				}
				else
				{
					return 0;
				}
		    }
			else
			{
					return 0;
			}
	    }
		else
		{
					return 0;
		}
	  
		
    }
		





int main()
{
	int m,p,c,tot;
		
		cout<<"enter ur marks";
		cin>>m>>p>>c;
		tot=result(m,p,c);
		if(tot)
		{
			cout<<"true";
		}
	}
		
