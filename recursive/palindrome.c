#include<stdio.h>
int rev_num = 0;

void palindrome(int n){
    if(n==0){
        return;
    }

    int last_digit = n%10;
    rev_num = rev_num * 10 + last_digit;
    palindrome(n/10);
}


int main(){
    int number = 12211;
    palindrome(number);

    if(number == rev_num){
        printf("palindrome");
    }else{
        printf("Not palindrome");
    }

    return 0;
}