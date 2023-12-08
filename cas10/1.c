#include <stdio.h>
#include <stdlib.h>

#define MAX 100


int main() {
    
    int n, niz[MAX];
    scanf("%d", &n);
    
    if(n <= 0 || n > MAX) {
        printf("Greska!\n");
        exit(EXIT_FAILURE);
    } 
    
    for(int i = 0; i < n; i++)
        scanf("%d", &niz[i]);
    
    for(int i = 0; i < n; i+=2)
        printf("%d ", niz[i]);
    printf("\n");
    
    for(int i = 0; i < n; i++) 
        if(niz[i] % 2 == 0)
            printf("%d ", niz[i]);
    
    printf("\n");
    
    return 0;
}
