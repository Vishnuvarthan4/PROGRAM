#include<iostream>
using namespace std;
int main()
{
	int m,i,j,flag=0;
	cout<<"Enter the number:"<<endl;
	cin>>m;
	if(m==1)
	cout<<"1 is neither prime nor composite";
	else
	{
	for(int j=2;j<=m;j++)
	{
	    flag=0;
	    for(i=2;i<j;i++)
	    {
	        if(j%i==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<j<<" ";
	}
	}
	return 0;
}
