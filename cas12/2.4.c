#include <stdio.h>

#define MAX 50

void transponovana(int a[][MAX], int m, int n, int b[][MAX]) {
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            b[j][i] = a[i][j];
    
}

int main() {
    
    int a[MAX][MAX], b[MAX][MAX], m, n;
    scanf("%d%d", &m, &n);
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    transponovana(a, m, n, b);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
