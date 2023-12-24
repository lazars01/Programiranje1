#include <stdio.h>

#define MAX 50

int main() {
    
    int m, n, matrica[MAX][MAX];
    scanf("%d%d", &m, &n);
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%2d ", matrica[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
