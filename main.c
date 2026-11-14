#include <stdio.h>

int main(void)
{
    int n;
    long long total = 0;
    long long number;
    
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (number = 1; number <= n; number++)
    {
       if (number % 2 == 0) {
            total += number;
        }    
    }
    printf("%lld", total);
    return 0;
}
