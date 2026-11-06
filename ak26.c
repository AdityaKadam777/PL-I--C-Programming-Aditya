/*
Program(26)-> Write a program to find the factorial of a given number using a user-defind function.
Solution(2): Using while loop
*/

#include<stdio.h>

int factorial(int n)
{
 int fact=1, i=i;
 while(i<=n)
{
 fact=fact*i;
}
 return fact;
}
int main()
{
 int n, result;
 printf("Enter a number:");
 scanf("%d", &n);
result=factorial(n);
printf("Factorial of %d= %d", n, result);
return 0;
}