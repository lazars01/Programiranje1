#include <stdio.h>
#include <stdlib.h>

int broj_neparnih_cifara(int x) {
    
    x = abs(x);
    
    int br = 0;
    while(x) {
        if(x % 2 == 1) 
            br++;
        x /= 10;
    }
    
    return br;
}

int main() {
    
    int x;
    scanf("%d", &x);
    
    printf("%d\n", broj_neparnih_cifara(x));
    
    return 0;
}
