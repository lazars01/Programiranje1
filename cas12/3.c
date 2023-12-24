#include <stdio.h>

int presek(float k1, float n1, float k2, float n2, float* px, float* py) {
    
    if(k1 == k2)
        return 0;
    
    *px = (n2 - n1) / (k1 - k2);
    *py = k1 * (*px) + n1;
    return 1;
    
}

int main() {
    
    float k1, k2, n1, n2, px, py;
    scanf("%f%f%f%f", &k1, &n1, &k2, &n2);
    
    int ima_presek = presek(k1, n1, k2, n2, &px, &py);
    if(ima_presek) {
        printf("Presek je: (%.2f, %.2f)\n", px, py);
    }
    else{
        printf("Nema presek!\n");
    }
    
    return 0;
}
