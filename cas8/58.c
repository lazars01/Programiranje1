#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int l = 1, d = n;
    
    while(l <= d) {
        for(int i = l; i <= d; i++)
            printf("%d ", i);
        l++;
        d--;
    }
    
    printf("\n");
    
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n - i + 1; j++) {
            printf("%d ", j);
        }
    }
    
    return 0;
}
