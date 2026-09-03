#include<stdio.h>

int gdc(int n, int m);

int main(){
    int p = gdc(48,18);
    printf("%d",p);
    return 0;
}

int gdc(int n, int m){
    if (m == 0){
        return n;
    }
    return gdc(m, n % m);
}