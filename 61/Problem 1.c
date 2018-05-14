#include<stdio.h>
int main(){
    int cases, n;
    int temp;
    double summerSum, nonSummerSum;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &n);
        summerSum = 0;
        nonSummerSum = 0;        
        if (n >= 701)
        {
            temp = n - 700;
            summerSum += temp * 5.63;
            nonSummerSum += temp * 4.50;
            n -= temp;
        }
        if (n >= 501)
        {
            temp = n - 500;
            summerSum += temp * 4.97;
            nonSummerSum += temp * 4.01;
            n -= temp;
        }
        if (n >= 331)
        {
            temp = n - 330;
            summerSum += temp * 4.39;
            nonSummerSum += temp * 3.61;
            n -= temp;
        }
        if (n >= 121)
        {
            temp = n - 120;
            summerSum += temp * 3.02;
            nonSummerSum += temp * 2.68;
            n -= temp;
        }
        summerSum += n * 2.10;
        nonSummerSum += n * 2.10;
        printf("Summer months:%.2lf\n", summerSum);
        printf("Non-Summer months:%.2lf\n", nonSummerSum);
    }
    return 0;
}
