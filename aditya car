#include<iostream>
using namespace std;
class car
{
    char c[20],s[10];
    int r;
    public:
    void seven()
    {
        cout<<"Features of your car\n1.colour:RED\n2.battery size:AA\n3.with remote\n";
    }
    void points()
    {
        cout<<"Enter colour of the car\n";
        cin>>c;
        cout<<"Enter battery size\n";
        cin>>s;
        cout<<"Do you want remote?If you want enter 0 or else enter any number\n";
        cin>>r;
        cout<<"Features of your car\n1.colour:"<<c<<"\n";
        cout<<"2.battery size:"<<s<<"\n";
        if(r==0)
        {
            cout<<"3.with remote\n";
        }
        else
        {
            cout<<"3.Without remote\n";
        }
    }
    void colour()
    {
        cout<<"Enter colour of the car\n";
        cin>>c;
        cout<<"Features of your car\n1.colour:"<<c<<"\n";
        cout<<"2.battery size:AA\n";
        cout<<"3.with remote\n";
    }
};
int main()
{
    int n,i;
    car obj;
    cout<<"Enter your age\n";
    cin>>n;
    if(n<7)
    {
        obj.seven();
    }
    else
    {
        cout<<"If you want all features of the car enter 0 or if you want colour alone enter 1\n";
        cin>>i;
        if(i==0)
        {
            obj.points();
        }
        else if(i==1)
        {
            obj.colour();
        }
        else
        {
            cout<<"Invalid input\n";
            exit(0);
        }
    }
}
