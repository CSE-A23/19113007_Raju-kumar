#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int N,P;
    cout<<"Enter the number\n";
    cin>>N;
    cout<<"Enter the Power\n";
    cin>>P;
    void SuperPow(int N,int P);
    {
        int n,x;
        try
        {
            if((N<0)||(P<0))
            {
                throw 1;
            }
            if((N==0)&&(P==0))
            {
                throw 'a';
            }
            int sum=0;
            while(N!=0)
            {
                n=N%10;
                x=pow(n,P);
                sum=sum+x;
                N=N/10;
            }
            cout<<"Super Power="<<sum<<"\n";
        }
        catch(int c)
        {
            cout<<"Super Power is only for positive numbers\n";
        }
        catch(char d)
        {
            cout<<"Zero can't be a Super Power\n";
        }
    }
}
