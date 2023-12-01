#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int rotacija(int n) {
    
    if(n == 0)
        return 0;
    
    int znak;
    if(n < 0)
        znak = -1;
    else
        znak = 1;
    
    n = abs(n);
    
    int br_cifara = log10(n) + 1;
    int stepen = pow(10, br_cifara - 1);
    
    int desni_deo = n % stepen;
    int levi_deo = n / stepen;
    
    return (desni_deo * 10 + levi_deo) * znak;
    
}

int main(){
    
    int n;
    scanf("%d", &n);
    printf("%d\n", rotacija(n));
    
    return 0;
}
