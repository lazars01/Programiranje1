#include <stdio.h>

int main() {
    
    int n, m;
    printf("Unesite dva cela broja:\n");
    scanf("%d %d", &n, &m);
    
    if(n >= m) {
        printf("Greska: pogresan unos!\n");
        return 1;
    }
    
    for(int i = n; i <= m; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    int i = n;
    while(i <= m) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    i = n;
    do {
        printf("%d ", i);
        i++;
    }while(i <= m);
    printf("\n");
    
    
    
    return 0;
}
