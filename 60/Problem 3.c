#include <stdio.h>
int main(void) {
	int cases, i, n, m, arr[1001], q, r, sum;
	scanf("%d", &cases);
	while(cases--){
	    scanf("%d%d", &n, &m);
	    for(i = 0; i < n; i++){
	        scanf("%d", &arr[i]);
	    }
	    while(m--){
	        scanf("%d%d", &q, &r);
	        sum = 0;
	        q--;
	        r--;
	        for(;q <= r; q++){
	            sum += arr[q];
	        }
	        printf("%d\n", sum);
	    }
	}
	return 0;
}

