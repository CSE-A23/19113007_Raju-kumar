#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[50];
  int check=0, wrd=0, space=0, l=0, i=0, j=0, n=0, c[10];
  printf("Enter a Sentence\t");
  scanf("%s",str);
  l=strlen(str);
  for(i=n; i<l; i++)
  {
    wrd+=str[i];
    if(str[i]==' ')
    {
      c[j]=wrd-32;
      wrd=0;
      n=i;
      j++;
      space++;
    }
  }
  c[j]=wrd;
  for(i=0; i<=space-1; i++)
  {
    if(c[i]>c[i+1])
      {
        check=1;
      }
  }
  if(check==1)
  {
    printf("\nNOPE");
  }
  else
  {
    printf("\nWAS");
  }
  getch();
}
