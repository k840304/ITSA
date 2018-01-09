#include <stdio.h>

int gcd(int m, int n);

int main(void) {
	int cases;
	int a1, a2, b1, b2, agcd;
	char skip;
	scanf("%d", &cases);
	while(cases--){
	    scanf("%d%c%d%c%d%c%d", &a1, &skip, &a2, &skip, &b1, &skip, &b2);
	    a1 = a1 * b2 + b1 * a2;
	    a2 = a2 * b2;
	    agcd = gcd(a1, a2);
	    printf("%d/%d\n", a1 / agcd, a2 / agcd);
	}
	return 0;
}

int gcd(int m, int n) {
    while(n != 0) { 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}
