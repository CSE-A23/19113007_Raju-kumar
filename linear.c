#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[100],n,i;
    printf("Enter the Array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==arr[i])
        {
            printf("The element is found at %d at %d",i,i+1);
        }
    }
   getch();
}
