#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n + i; j++) {
            if(j > n)
                printf("%d ", j % n);
            else 
                printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
