#include <stdio.h>
#include <stdlib.h>

#define MAX 10


int main() {
    
    int niz[MAX];
    for(int i = 0; i < MAX; i++)
        niz[i] = 0;
    
    int n, kopija_n;
    scanf("%d", &n);
    
    kopija_n = n;
    n = abs(n);
    
    while(n) {
        int cifra = n % 10;
        niz[cifra]++;
        n /= 10;
    }
    
    for(int i = 0; i < MAX; i++) {
        if(niz[i] != 0)
            printf("U zapisu broja %d cifra %d se javlja %d puta!\n", kopija_n, i, niz[i]);
    }
    
    return 0;
}
