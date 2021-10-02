#include<stdio.h>
int main()
{
    int arr1[6]={1,3,5,7,9,10};
    int arr2[5]={1,4,5,7,9};
    int arr3[6],i,j;
    for(i=0;i<sizeof(arr1);i++)
    {
      for(j=0;j<sizeof(arr2);j++)
        {
            if((arr1[i]==arr2[j])  && (i!=j))
             {
                 arr3[i]=arr1[i];
             }
        }
    }
 printf("result array %d",arr3);
}