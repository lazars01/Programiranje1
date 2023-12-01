#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    if(x < 1000 || x > 9999){
        printf("Neispravan unos!\n");
        return 1;
    }
    
    int j, d, s, h;
    
     j = x % 10;
    d = (x / 10) % 10;
    s = (x / 100) % 10;
    h = x / 1000;
    
    int pr = 1;
    
    if(j % 2 == 0)
        pr *= j;
    if(d % 2 == 0)
        pr *= d;
    if(s % 2 == 0)
        pr *= s;
    if(h % 2 == 0)
        pr *= h;
    
    printf("Proizvod parnih cifara je: %d\n", pr);
    
    return 0;
}
