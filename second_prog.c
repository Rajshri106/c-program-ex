#include<stdio.h>
int rec(int x, int y)
{ int i;
    for(i=0;i<x;i++)
    {
        y+=1;
    }
}
int main()
{
    int x, y ;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    
    printf("Total saving of %d days on rupees %d",rec(x,y));
}