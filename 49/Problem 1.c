#include<stdio.h>
int main(){
    int cases, h1, m1, h2, m2, m, i, sum;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d%d", &h1, &m1);
        scanf("%d%d", &h2, &m2);
        m = ((h2 * 60 + m2) - (h1 * 60 + m1)) / 30;
        for(i = 1, sum = 0; i <= m; i++){
            if(i <= 4){
                sum += 30; 
            }
            else if(i > 4 && i <= 8){
                sum += 40;
            }
            else{
                sum += 60;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
