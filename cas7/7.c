#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    int n;
    
    scanf("%f %d", &x, &n);
    
    int znak;
    
    if(n < 0)
        znak = -1;
    else
        znak = 1;
    
    n = abs(n);
    
    double stepen = 1.0;
    
    for(int i = 0; i < n; i++)
        stepen *= x;
    
    if(znak == -1)
        stepen = 1 / stepen;
    
    printf("Stepen je: %f\n", stepen);
    
    return 0;
}
