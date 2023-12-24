#include <stdio.h>

void uredi(int* pa, int* pb) {
    
    if(*pa > *pb) {
        int pom = *pa;
        *pa = *pb;
        *pb = pom;
    }
    
}

int main() {
    
    int pa, pb;
    scanf("%d%d", &pa, &pb);
    
    uredi(&pa, &pb);
    
    printf("%d %d\n", pa, pb);
    
    return 0;
}
