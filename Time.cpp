#include <iostream.h>
using namespace std;
class time              // class for time 
{
    public:
    int hr;
    int min;
    int sec;
    char mi;
    
        void gettime()
        {
            cout<<"Enter the time";
            cin>>hr>>min>>sec;
            cout<<"Enter the meridian";
            cin>>mi;
        }
        void difference(time t1,time t2)
        {
            int h1,m1,s1;
            {
                if(t2.hr>t1.hr)                 // here the second hr is greater so ..
                {
                    h1=t2.hr-t1.hr;
                    m1=t2.min-t1.min;
                    if(m1<0)
                    {   
                        --h1;                 //because the min is -ve so the hr will dec
                        m1=60+m1;
                    }
                    s1=t2.sec-t1.sec;
                    if(s1<0)
                    {
                        --m1;                //same reason
                        s1=60+s1;
                    }
                     if(m1<0)
                    {   
                        --h1;                 //because of --m1..if it agnain becomes -ve
                        m1=60+m1;
                    }
                }
                else                          // here the first hr is greater
                {
                    h1=t1.hr-t2.hr;
                    m1=t1.min-t2.min;
                    if(m1<0)
                    {   
                        --h1;
                        m1=60+m1;
                    }
                    s1=t1.sec-t2.sec;
                    if(s1<0)
                    {
                        --m1;
                        s1=60+s1;
                    }
                    if(m1<0)
                    {   
                        --h1;             //again because of the --m1
                        m1=60+m1;
                    }
              }
            cout<<"\n\nThe new time difference obtained is ="<<h1<<" : "<<m1<<" : "<<s1;
        }
};
int main()
{
    class time t1,t2;
    t1.gettime();
    t2.gettime();
    t1.difference(t1,t2);
    return 0;
}
