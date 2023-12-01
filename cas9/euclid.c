#include <stdio.h>

int nzd(int a, int b) {
    
    while(b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    
    return a;
}

int main() {
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("NZD: %d\n", nzd(a, b));
    
    return 0;
}
