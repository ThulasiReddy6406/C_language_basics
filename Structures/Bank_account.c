#include<stdio.h>

typedef struct Andhra_Bank_account
{
    char name[100];
    int account_num;
}ABC;

int main(){
    ABC acc1 = {"Thulasi",123};
    ABC acc2 = {"Rakshita",234};

    printf("Acc No:- %d \n",acc1.account_num);
    printf("Account holder name :- %s",acc1.name);
    return 0;
}
