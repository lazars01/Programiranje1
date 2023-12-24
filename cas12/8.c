#include <stdio.h>

#define MAX 50

void min_max(float niz[], int n, float* min, float* max) {
    
    *min = niz[0];
    *max = niz[0];
    
    for(int i = 1; i < n; i++) {
        if(niz[i] > *max)
            *max = niz[i];
        if(niz[i] < *min)
            *min = niz[i];
    }
    
}

int main() {
    
    float niz[MAX];
    int n;
    scanf("%d", &n);
    
    if(n <= 0) {
        return 1;
    }
    
    for(int i = 0; i < n; i++)
        scanf("%f", &niz[i]);
    
    float min, max;
    min_max(niz, n, &min, &max);
    
    printf("Min je: %.2f\nMax je: %.2f\n", min, max);
    
    return 0;
}
