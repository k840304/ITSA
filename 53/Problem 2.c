#include<stdio.h>
int main(){
    int cases, n, m;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d%d", &n, &m);
        while(1){
            if(n > m){
                n /= 4;
            }
            if(n > m){
                n += m;
            }
            if(n <= m){
                break;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}
