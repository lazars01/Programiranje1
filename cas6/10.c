#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    n = abs(n);
    
    do {
        printf("%d ", n % 10);
        n /= 10;
    }while(n != 0);
    
    
    return 0;
}
