//sum of digits of in an integer number

#include<iostream>
using namespace std;
int main()
{
    int n,n1,r,sum=0;
    cout<<"\n ENTER THE VALUE FOR N = ";
    cin>>n;
    n1=n;
    while(n!=0)
    {
        r=n%10;
        sum += r;
        n=n/10;
    }
cout<<" SUM OF DIGITS = "<<sum;
return 0;
}
