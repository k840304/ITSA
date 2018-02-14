#include<stdio.h>
int main(){
    int cases, n;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &n);
        printf("%d=", n);
        printf("%02d,", n / 60 / 60 / 24);
        n %= 60 * 60 * 24;
        printf("%02d,", n / 60 / 60);
        n %= 60 * 60;
        printf("%02d,", n / 60);
        n %= 60;
        printf("%02d\n", n);
    }
    return 0;
}
