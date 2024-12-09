#include<stdio.h>
int main()
{
    int x = 0,y = 0;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter a second number:");
    scanf("%d,&y");
    int *p = &x,*q = &y;
    if (*p>*q)
    {
        printf("max number is: %d",*p);
    }
     else
     {
         printf("max number is:%d",*q);
     }
     return 0;
}
