#include<iostream>
using namespace std;
int main()
{
	int value,n,cnt,rem,q;
	int count=0,m;
	int mul=1,result=0;
	cout<<"Enter the value: "; 
	cin>>value;
	//to find digits of given value
	n=value;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cnt=count;
	q=count;
	n=value;
	//multply order times then add
	while(q!=0)
	{
	 rem=n%10;
    	while(cnt!=0)
     	{
     	  mul=mul*rem;	
    	  cnt--;
    	}
	result=result+mul;
    n=n/10;
	mul=1;
	cnt=count;
	q--;
    }
    if(result==value)
    cout<<value<<" -> IT IS ARMSTRONG NUMBER"<<endl;
    else
    cout<<value<<" -> IT IS NOT ARMSTRONG NUMBER"<<endl;
	return 0;
}
