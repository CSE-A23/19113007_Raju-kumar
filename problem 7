#include<iostream>
using namespace std;
class book
{
    public:
    char name[50];
    int sold,bu;
    void get()
    {
        cout<<"Enter the name of the book\n";
        cin>>name;
        cout<<"Enter number of times that was sold\n";
        cin>>sold;  //the sold value should not be greater than 11(even zero can be enter in bu)
    }               //which means totally 11 books are there in each name
    void buy()
    {
        cout<<"Enter how many books do u want to buy\n";
        cin>>bu;    //the bu value must be less than or equal to 11(even zero can be enter in sold)
    }
};
int main()
{
    int n,i,count=0,sum=0;
    book obj[100];
    cout<<"Enter the number of books\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        obj[i].get();
        if(obj[i].sold>5)
        {
            count++;
        }
    }
    cout<<"Books sold more than 5 times = "<<count<<"\n";
    for(i=0;i<n;i++)
    {
        obj[i].buy();
        try
        {
            sum=obj[i].sold+obj[i].bu;
            if(sum>11)
            {
                throw 1;
            }
        }
        catch(int x)
        {
            cout<<"More than 11 books are not allowed\n";
        }
    }  
}
