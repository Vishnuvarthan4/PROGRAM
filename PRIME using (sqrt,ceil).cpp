#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,flag=0,x,y;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	y=sqrt(n);
	x=ceil(y);
	for(int i=2;i<=x;i++)
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
    cout<<"NOT A PRIME 1"<<endl;
	return 0;
}
