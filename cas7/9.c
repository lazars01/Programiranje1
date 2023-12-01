#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    if(x == 0) {
        printf("Trazeni broj: %d\n", x);
        return 0;
    }
    
    while(x % 10 == 0) {
        x /= 10;
    }
    
    printf("Trazeni broj: %d\n", x);
    
    return 0;
}
