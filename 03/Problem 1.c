#include<stdio.h>
int main(){
    int cases;
    long long int n, m, sum;
    scanf("%d", &cases);  
    while(cases--){        
        scanf("%lld%lld", &n, &m);
        n--;
        sum = ((m * (m + 0x1) * (0x2 * m + 0x1)) - (n * (n + 0x1) * (0x2 * n + 0x1))) / 0x6;  
        printf("%lld\n", sum);
    }  
    return 0;
} 
