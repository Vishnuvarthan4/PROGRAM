#include <iostream>
using namespace std;
int main() {
    int k,i,j,n=6;
    int t=1;
    for(i=1;i<=6;i++)
    {
        k=i;
        t=i;
         if(i==1 || i==2)
          cout<<"  ";
        for(j=0;j<=6-i;j++)
        {

            if(j==0)
            {
            cout<<k<<" ";
            }
            else
            {
                t=t+n;
                cout<<t<<" ";
                n--;
            }
        }
        n=6;
        
        
        cout<<endl;
    }

    return 0;
}
