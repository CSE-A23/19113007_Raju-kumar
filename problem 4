#include<iostream>
using namespace std;
class kannan
{
    private:
    int age;
    protected:
    int year;
    public:
    kannan()
    {
        cout<<"Kannan constructor\n";
    }
    void house()
    {
        cout<<"Kannan house\n";
    }
    ~kannan()
    {
        cout<<"Kannan destructor\n";
    }
};
class ram:public kannan
{
    public:
    ram()
    {
        cout<<"Ram constructor\n";
    }
    void house()
    {
        kannan::house();
        cout<<"Kannan house renovated by Ram\n";
    }
    ~ram()
    {
        cout<<"Ram destructor\n";
    }
};
class naresh:public ram
{
    public:
    naresh()
    {
        cout<<"Naresh constructor\n";
    }
    void house()
    {
        ram::house();
        cout<<"Kannan house re-renovated by Naresh\n";
    }
    ~naresh()
    {
        cout<<"Naresh destructor\n";
    }
};
int main()
{
    naresh obj;
    obj.house();
}
