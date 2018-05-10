#include<stdio.h>
int dp[100001];
int road[100001];
int main(){
    int i, j, k, n, cases;
    int coin[101];
    int coinQty[101];
    scanf("%d", &cases);
    while(cases--){
        for(i = 0; i < 100001; i++){
            dp[i] = 100001;
            road[i] = -1;
        }
        dp[0] = 0;
        for(i = 0; scanf("%d", &coin[i]) && coin[i] != 1; i++);
        scanf("%d", &n);
        for(j = 0; j <= i; j++){
            for(k = coin[j]; k <= n; k++){
                if(dp[k] > dp[k - coin[j]] + 1){
                    dp[k] = dp[k - coin[j]] + 1;
                    road[k] = j;
                }
            }
        }
        printf("%d\n", dp[n]);
        for(j = 0; j < 101; j++){
            coinQty[j] = 0;
        }
        for(j = n; j > 0;){            
            coinQty[road[j]]++;
            j -= coin[road[j]];
        }
        for(j = 0; j <= i ; j++){
            printf("%d %d\n", coin[j], coinQty[j]);
        }   
    }   
    return 0;
}
