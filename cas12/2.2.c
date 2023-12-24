#include <stdio.h>
#include <math.h>

#define MAX 50

int main() {
    
    int m, n, matrica[MAX][MAX];
    scanf("%d%d", &m, &n);
    
    int suma_kvadrata = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrica[i][j]);
            suma_kvadrata += matrica[i][j] * matrica[i][j];
        }
        
    printf("%.2f\n", sqrt(suma_kvadrata));
    
    return 0;
}
