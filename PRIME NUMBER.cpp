#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			continue;
			
		}
		else
		{
		    flag=1;
			break;
		}
    }
    if(flag==0)
    cout<<"the given number is PRIME"<<endl;
    else
    cout<<"NOT A PRIME"<<endl;
	return 0;
}
