#include<stdio.h>
#include<string.h>
// int check_palindrome(int num){

//    static int reverse_num=0,rem;

//    if(num!=0){
//       rem=num%10;
//       reverse_num=reverse_num*10+rem;
//       check_palindrome(num/10);
//    }

//    return reverse_num;
// }
int asc(int number[], int count)
{
    int i,j, k, temp;
    for(j=0;j<count;j++)
    {
        for(k=j+1;k<count;k++)
        { if(number[j] > number[k])
           {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
           }
        }
    }
    printf("\n sorted array");
    for(i=0;i<count;i++)
      printf("%d\n",number[i]);
}
int main()
 {   //int age;
//     printf("Enter age");
//     scanf("%d",&age);
//     printf("My age is:- %d ",age);
//     return 0;

//find odd even number....
// int n;
// printf("enter no.");
// scanf("%d",&n);
// if(n%2 == 0)
//    printf("%d is a even number",n);
// else
//    printf("%d is a odd number",n);

//find greatest number 
// int n;
// printf("enter no");
// scanf("%d",&n);
// if(n>0)
//   printf("%d is a greater number",n);
// else if(n<0)
//   printf("%d is a negative number",n);
// else
//   printf("%d is a zero",n);
// return 0;

//factorial of num
// int n;
// int i;
// int fact=1;
// printf("enter number");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
//  fact=fact*i;
 
// }
// printf("factorial of %d is =%d ",n,fact);

//fibonanci series
// int n0=0;
// int n1=1;
// int n2;
// int i;
// //printf("enter number");
// //scanf("%d",&n2);
// printf("%d , %d,",n0,n1);
// for(i=2;i<10;++i)
// {
//     n2=n0+n1;
//     printf("%d ,",n2);
//     n0=n1;
//     n1=n2;
    
// }

//reverse input number
// int n,i,rev=0,rem;
// printf("enter number");
// scanf("%d",&n);
// for(i=0;i<=n;i++)
// {
//     rem=n%10;
//     rev=(rev*10)+rem;
//     n=n/10;
// }
// printf("%d reverse number",rev);

//palindrome number
// int n, i, rev=0, rem,num;
// printf("enter number");
// scanf("%d",&n);
//  num=n;
// for(i=0;i<=num;i++)
// {
//     rem=num%10;
//     rev=(rev*10)+rem;
//     num=num/10;
// }
// if(rev==n)
//   printf("%d is  a palindrome number",n);
// else
//   printf("%d is not a palindrome number",n);

//palindrome using recursion
// int num, reverse_num;

//    printf("Enter a number: ");
//    scanf("%d",&num);

//    reverse_num = check_palindrome(num);

//    if(num==reverse_num)
//       printf("%d is a palindrome number",num);
//    else
//       printf("%d is not a palindrome number",num);

//    return 0;

//sum of first n natural number
// int n, i,sum=0;
// printf("enter number");
// scanf("%d",&n);
// for(i=0;i<=n;i++)
// {
//     sum=sum+i;
// }
// printf("%d sum of number is = %d",n,sum);

//prime number
//  int num1, num2, flag_var, i, j;
 
//    /* Ask user to input the from/to range
//     * like 1 to 100, 10 to 1000 etc.
//     */
//    printf("Enter two range(input integer numbers only):");
//    //Store the range in variables using scanf
//    scanf("%d %d", &num1, &num2);
 
//    //Display prime numbers for input range
//    printf("Prime numbers from %d and %d are:\n", num1, num2);
//    for(i=num1+1; i<num2; ++i)
//    {
//       flag_var=0;
//       for(j=2; j<=i/2; ++j)
//       {
//          if(i%j==0)
//          {
//             flag_var=1;
//             break;
//          }
//       }
//       if(flag_var==0)
//          printf("%d\n",i);
//   }
//   return 0;

//conver upper to lower case
// int i ;
// char str[20];
// printf("enter string");
// scanf("%s",&str);
// for(i=0;i<=strlen(str);i++)
// {
//     if(str[i]>=65 && str[i]<=90)
//     {
//         str[i]=str[i]+32;
//     }
// }
// printf("lowercase sting %s",str);


//convert strnig lower to upper case
// int i ;
// char str[20];
// printf("enter string");
// scanf("%s",&str);
// for(i=0;i<=strlen(str);i++)
// {  //A=97 z=122 or a=65 z=90 or start ascii 33
//     if(str[i]>=97 && str[i]<=122)
//     {
//         str[i]=str[i]-32;
//     }
// }
// printf("lowercase sting %s",str);

//count string length without using strlen function
// int i;
// char str[20];
// printf("enter string");
// scanf("%s",&str);
// for(i=0;str[i]!='\0';i++);
//   printf("length of string is %d",i);

//print array in ascsending order
int i,count , number[20];
printf("how many numbers you wonna to enter");
scanf("%d",&count);

printf("enter number one by one");
for(i=0;i<count;i++)
  scanf("%d",&number[i]);
asc(number, count);
}
