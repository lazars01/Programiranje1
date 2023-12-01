#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    int j, d, s, h;
    
    if(x < 1000 || x > 9999){
        printf("Neispravan unos!\n");
        return 1;
    }
    
    j = x % 10;
    d = (x / 10) % 10;
    s = (x / 100) % 10;
    h = x / 1000;
    
    int max = j;
    
    if(d > max)
        max = d;
    if(s > max)
        max = s;
    if(h > max)
        max = h;
    
    printf("Najveca cifra je: %d", max);
    
    return 0;
}
