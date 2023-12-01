#include <stdio.h>

int main() {
    
    int x, y, z, min;
    
    scanf("%d %d %d", &x, &y, &z);
    
    min = x;
    
    if(y < min) {
        min = y;
    }
    if(z < min)
        min = z;
    
    printf("Minimum je: %d",  min);
    
    return 0;
}
