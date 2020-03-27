#include<iostream>
using namespace std;
class bangle
{
    public:
    int size;
    char colour[50],make[100];
    void get()
    {
        cout<<"Enter the size of the pair\n";
        cin>>size;
        cout<<"Enter the colour of the pair\n";
        cin>>colour;
        cout<<"Enter the make of the bangle\n";
        cin>>make;
    }
    
};
int main()
{
    int n,i,j,temp;
    bangle obj[100];
    cout<<"How many bangles you want?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        obj[i].get();
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(obj[i].size>obj[j].size)
            {
                temp=obj[i].size;
                obj[i].size=obj[j].size;
                obj[j].size=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       cout<<obj[i].size<<obj[i].colour<<obj[i].make<<"\n";
    }
    for(i=n-1;i>-1;i--)                                 // in this line i changed n to n-1 , it shouldnt be n , its always 0 to n-1
    {
       cout<<obj[i].size<<obj[i].colour<<obj[i].make<<"\n";
    }
}
