#include<stdio.h>  
int main(){  
    int i;  
    int cases, num;  
    int sum;  
    scanf("%d", &cases);      
    while(cases--){  
        scanf("%d", &num);  
        sum = 0;  
        for(i = 1; i <= num; i++){  
            if(i % 3 == 0){  
                sum += i;  
            }  
        }  
        printf("%d\n", sum);  
    }  
    return 0;  
}  
