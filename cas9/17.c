#include <stdio.h>
#include <stdlib.h>

int par_nepar(int n) {

    n = abs(n);
    
    int prethodni_ostatak = n % 2;
    n /= 10;
    
    while(n) {
        int trenutni_ostatak = n % 2;
        if(prethodni_ostatak == trenutni_ostatak)
            return 0;
        n /= 10;
        prethodni_ostatak = trenutni_ostatak;
    }
    
    return 1;
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    printf("%d\n", par_nepar(n));
    
    return 0;
}
