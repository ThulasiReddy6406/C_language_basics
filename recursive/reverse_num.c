#include<stdio.h>
int rev_num = 0 ;


int reverse(int n){
    if(n==0){
        return 0;
    }
    
    int last_digit = n%10;
    rev_num = rev_num * 10 + last_digit ;
    reverse(n/10);
    return rev_num;



}
int main(){
    int r = reverse(1234567);
    printf("%d",r);
}