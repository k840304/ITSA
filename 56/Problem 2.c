#include<stdio.h>
int dp[1000001];
int road[1000001];
int main(){
    int i, n;
    int capacity[2], price[2];
    int qty1, qty2;
    scanf("%*d");
    while(scanf("%d", &n) > 0){
        for(i = 0; i <= n; i++){
            dp[i] = 1000001;
            road[i] = 0;
        }
        dp[0] = 0;
        scanf("%d %d", &capacity[0], &price[0]);
        for(i = capacity[0]; i <= n; i++){
            if(dp[i] > dp[i - capacity[0]] + price[0]){
				dp[i] = dp[i - capacity[0]] + price[0];
				road[i] = capacity[0];
			}
        }
        scanf("%d %d", &capacity[1], &price[1]);
        for(i = capacity[1]; i <= n; i++){
            if(dp[i] > dp[i - capacity[1]] + price[1]){
				dp[i] = dp[i - capacity[1]] + price[1];
				road[i] = capacity[1];
			}
        }
        if(dp[n] == 1000001){
            printf("false\n");
        }
        else{
            qty1 = 0;
            qty2 = 0;
            for(i = n; i > 0;){
                if(road[i] == capacity[0]){
                    qty1++;
                    i -= capacity[0];
                }
                else{
                    qty2++;
                    i -= capacity[1]; 
                }
            }
            printf("%d %d\n", qty1, qty2);
        }
    }   
    return 0;
}
