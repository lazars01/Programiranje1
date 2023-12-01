#include <stdio.h>

int prost(int x) {
    if(x == 1)
        return 0;
    
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

void prvih_n_prostih(int n) {
    
    int x = 2, br = 0;
    
    while(br < n) {
        if(prost(x)) {
            br++;
            printf("%d ", x);
        }
        x++;
    }
    
    printf("\n");
}

void prosti_manji_od_n(int n) {

    for(int i = 2; i < n; i++) {
        if(prost(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return;
}


int main() {
    
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Greska: Neispravan unos!\n");
        return 1;
    }
    
    prvih_n_prostih(n);
    prosti_manji_od_n(n);
    
    return 0;
}
