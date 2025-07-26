#include<iostream>
using namespace std;
char vowell(char d)
{
	if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
	{
		cout<<"vowel";
	}
	else
	cout<<"not a vowel";
}
int main()
{
	char c;
	cin>>c;
	vowell(c);
}
