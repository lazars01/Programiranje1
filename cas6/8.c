#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Greska!\n");
        return 1;
    }
    
    int i = 2;
    while(i*i <= n) {
        if(n % i == 0) {
            if(i*i == n) {
                printf("%d ", i);
            }
            else
                printf("%d %d ", i, n / i);
        }
        i++;
    }
    
    
    return 0;
}
