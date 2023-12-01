#include <stdio.h>
#include <math.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    if(x < 100 || x > 999) {
        printf("Neispravan unos!\n");
        return 1;
    }
    
    int j, d, s;
    
    j = x % 10;
    d = (x / 10) % 10;
    s = x / 100;
    
    if(x == j*j*j + pow(d, 3) + pow(s, 3)) {
        printf("Jeste!\n");
    }
    else 
        printf("Nije!\n");
    
    return 0;
    
}
