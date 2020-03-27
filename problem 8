#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Which problem?\nIf the problem is '1',enter 1\nIf the problem is 'h',enter 2\nIf the problem is '9.9',enter 3\nIf the problem is 'Anything else',enter default keys\n";
    cin>>n;
    try
    {
        switch(n)
        {
            case 1: throw 1;
            case 2: throw 'a';
            case 3: throw 1.1;
            default: throw "hai";
        }
    }
    catch(int a)
    {
        cout<<"One is too cool and easy\n";
    }
    catch(char b)
    {
        cout<<"To hell with it\n";
    }
    catch(double c)
    {
        cout<<"I solved 1 ... 9.9 is nothing to me\n";
    }
    catch(...)
    {
        cout<<"Life is just beautiful\n";
    }
}
