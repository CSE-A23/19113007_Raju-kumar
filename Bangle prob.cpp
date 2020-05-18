#include <bits/stdc++.h> 
#include <stack>
#include <iostream>
using namespace std; 

class Bangles
{
  public:
  char size; // 'l' for large 'm' for medium , 's' for small  
  char color[20];
  char make[20]; //'glass' or 'plastic' or 'gold' or 'silver'
  void show()
  {
      cout<<endl<<"size :\t"<<size;
      cout<<endl<<"color :\t"<<color;
      cout<<endl<<"make :\t"<<make<<endl;
  }
  Bangles(char siz , char col[] , char mak[])
  {
      size=siz;
      strcpy(color,col);
      strcpy(make,mak);
  }
};
  
void showstack(stack <Bangles> s) 
{ 
    while (!s.empty()) 
    { 
        Bangles temp=s.top(); 
        temp.show();
        s.pop();
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <Bangles> s; 
    Bangles a('m',"gold yellow","gold");
    s.push(a); 
    Bangles b('m',"silver gray","silver");
    s.push(b);
    Bangles c('m',"glass red","glass");
    s.push(c);
    Bangles d('m',"green","plastic");
    s.push(d);
  
    cout << "The stack in the order of most used to least used is :"; 
    showstack(s); 
    
 
/*    cout << "\ns.pop() : "; 
    s.pop(); 
    showstack(s); */
  
    return 0; 
} 
