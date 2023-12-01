#include <stdio.h>
#include <stdlib.h>

int sve_parne_cifre(int x) {
    
    x = abs(x);
    
    while(x) {
        if(x % 2 == 1)
            return 0;
        x /= 10;
    }
    
    return 1;
}

int sve_cifre_jednake(int x) {
    int prethodna = x % 10;

    while(x) {
        int tekuca = x % 10;
        if(tekuca != prethodna)
            return 0;
        x /= 10;
    }
    
    return 1;
}

int main() {
    
    int x;
    scanf("%d", &x);
    
    if(sve_parne_cifre(x)) {
        printf("Sve cifre su parne!\n");
    }
    else {
        printf("Postoje neparne cifre!\n");
    }
    
    if(sve_cifre_jednake(x)) {
        printf("Sve cifre su jednake!\n");
    }
    else {
        printf("Cifre su razlicite!\n");
    }
    
    return 0;
}
