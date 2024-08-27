#include<iostream>
using namespace std;
int main()
{
	int number,q,rem,i,fact=1,result=0;
	cout<<"Enter the value: "<<endl;
	cin>>number;
	q=number;
	while(q!=0)
	{
		rem=q%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		result=result+fact;
		q=q/10;
		fact=1;
	}
	if(number==result)
	cout<<result<<" -> IT IS STRONG";
	else
	cout<<"no strong";
    return 0;    
}
