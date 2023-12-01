#include <stdio.h>

int main() {
    
    float x;
    
    scanf("%f", &x);
    
    if(x < 0.0)
        x *= -1;
    
    printf("Apsolutna vrednost je: %.2f", x);
    
    return 0;
}
