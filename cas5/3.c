#include <stdio.h>

int main() {
    
    int x;
    double reciprocna;
    
    scanf("%d", &x);
    
    if(x == 0) {
        printf("Deljenje nulom\n");
        return 1;
    }
    
    reciprocna = 1.0 /  x;
    printf("Reciprocna vrednost je: %.4lf\n", reciprocna);
    
    return 0;
}
