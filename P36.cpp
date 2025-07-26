#include<iostream>
using namespace std;
int bank(int choice)
{int bank_balance=1000,pin=1234;
	int pass,dep,withd,new_pin;

switch(choice)
	{
		case 1:
			printf("Enter your pin");
			scanf("%d",&pass);
		if((pass)==(pin))
			{
				printf("Enter the amount to deposit");
				scanf("%d",&dep);
				bank_balance=bank_balance+dep;
				printf("Your amount credited successfully");
				printf("Now available balance is %d",bank_balance);
				
			}
			else
			{
				printf("Invalid Pin,TRY AGAIN");
			}
			break;
			case 2:
				printf("Enter your pin");
				scanf("%d",&pass);
				if(pass==pin)
				{
					printf("Enter the amount to withdraw");
					scanf("%d",&withd);
			}
				else if(bank_balance<withd)
					{
						printf("Insufficient Amount");
				}
				else {
				
				
					bank_balance=bank_balance-withd;
					printf("Amount withdrawn successfully");
					printf("Now available balance is %d",bank_balance);
				}
				
			
				
				{
				
				    printf("Invalid pin,TRY AGAIN");
						
					
				}
				break;
				case 3:
					printf("Enter your Pin");
					scanf("%d",&pass);
					if(pass==pin)
					{
						printf("Your bank balance is %d",bank_balance);
						
					}
					else
					{
					
					printf("Invalid pin");
				}
				break;
				case 4:
					printf("Enter your current pin");
					scanf("%d",&pass);
					if(pass==pin)
					{
					
					printf("Enter new password");
					scanf("%d",&new_pin);
					pin=new_pin;
		
				}
				else
				{
					printf("Invalid pin,TRY AGAIN");
				}
				default:
					printf("Invalid choice");
					break;
	
					
				
	}
  }
  
int main()
{
	
	int choice;
	cout<<"---WELCOME TO XYZ BANK----";
	cout<<"\nEnter your choice for the bank operation";
	cout<<"\n1.Deposit\n2.Withdraw\n3.Balance enquiry\n4.Pin change";
	cin>>choice;
	bank(choice);
}
	
