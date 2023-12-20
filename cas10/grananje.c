#include <stdio.h>

int main() {
    
    int k, dvocifreni_pre_k;
    scanf("%d", &k);
    
    if(k >= 1 && k <= 9) {
        printf("%d\n", k);
        return 0;
    }
    
    k = k - 9;
    dvocifreni_pre_k = k / 2;
    
    if(k % 2 == 0) {
        printf("%d\n", (9 + dvocifreni_pre_k) % 10);
    }
    else {
        printf("%d\n", (9 + dvocifreni_pre_k + 1) / 10);
    }
    
    return 0;
}
