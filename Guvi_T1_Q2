#include<iostream.h>
#include<string.h>
#include<conio.h>
class toy
{
 public:
 char color1[4],color2[10];
 char texture[15];
 double s1,s2;
 void gd();
 void operator !();
 void operator +();
};

void toy::gd()
 {
  int n;
  toy t1;
  clrscr();
  cout<<"Combination Of Color.";
  cout<<"How many toys?";
  cin>>n;
  if(n==1)
  {
   cout<<"Enter Color Of TOY:";
   cin>>color1;
   operator !();
   }
  else
  {
    cout<<"Enter Color Of TOY1:";
    cin>>color1;
    cout<<"Enter Color Of TOY2:";
    cin>>color2;
    cout<<"\n\nEnter Size Of TOY1:";
    cin>>s1;
    cout<<"\n\nEnter Size Of TOY2:";
    cin>>s2;
   }
}
void toy::operator !()
{
 if(strcmpi(color1,"blue")==0)
 {
  cout<<"Color:Purple";
 }
 else if(strcmpi(color1,"red")==0)
 {
  cout<<"Color:Blue";
 }
 else
 {
  cout<<"Color:Black";
 }
getch();
}
void toy:: operator +()
{
 cout<<"\n New Toy Is of \nColor:Red \nTexture:Silky \nSize:"<<s1*s2;
 getch();
}
void main()
{
  toy t1;
  clrscr();
  cout<<"Combination Of Color.";
  t1.gd();
  t1.gd();
  getch();
}
