#include <stdio.h>
void banktransfer(int*accountbalance1,int *accountbalance2, int amt)
{
    *accountbalance1 = (*accountbalance1) - amt;
    *accountbalance1 = (*accountbalance1) + amt;
}
int main()
{
    int balance1 = 0, balance2 = 0, amount = 0;
    printf("enter balance in account1:");
    scanf("%d",&balance1);
    printf("enter balance in account2:");
    scanf("%d",&balance2);
    printf("enter amount to tranfer:");
    scanf("%d",&amount);
    printf("before transaction between 2 accounts:%d,%d,balance1,balance2");
    banktransfer(&balance1,&balance2,amount);
    printf("\nafter trascation between 2 account:%d,%d,balance1,balance2");
    return 0;
}


