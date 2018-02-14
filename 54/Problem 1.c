#include<stdio.h>
int main(){
    int cases, i;
    float n, min, max;
    scanf("%d", &cases);
    while(cases--){
        min = 1001.0;
        max = -1001.0;
        for(i = 1; i <= 10; i++){
            scanf("%f", &n);
            if(n < min){
                min = n;
            }
            if(n > max){
                max = n;
            }
        }
        printf("maximum:%.2f\n", max);
        printf("minimum:%.2f\n", min);
    }    
    return 0;
}
