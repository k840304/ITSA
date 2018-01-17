#include <stdio.h>

int main(void) {
	int cases;
	int m, n;
	int h, t ,d;
	int flag;
	scanf("%d", &cases);
	while(cases--){
	    flag = 0;
	    scanf("%d%d", &m, &n);
	    while(m <= n){
	        h = m / 100;
	        t = m / 10;
	        d = m % 10;
	        if(h == 0 && t == d){
	            if(flag == 0){
	                flag = 1;
	            }
	            else{
	                printf(" ");
	            }
	            printf("%d", m);
	        }
	        else if(h == d){
	            if(flag == 0){
	                flag = 1;
	            }
	            else{
	                printf(" ");
	            }
	            printf("%d", m);
	        }
	        m++;
	    }
	}
	return 0;
}

