#include <stdio.h>
#include <ctype.h>

int main() {
    
    char a, b, c;
    int proizvod = 1;
    
    //scanf("%c %c %c", &a, &b, &c);
    a = getchar();
    getchar();
    b = getchar();
    getchar();
    c = getchar();
    
    int br = 0;
    
    if(isdigit(a)) {
        a = a - '0';
        proizvod *= a;
        br++;
    }
    if(isdigit(b)) {
        b = b - '0';
        proizvod *= b;
        br++;
    }
    if(isdigit(c)) {
        c = c - '0';
        proizvod *= c;
        br++;
    }
    
    if(br == 0){
        printf("Greska!\n");
        return 1;
    }
    printf("Proizvod je : %d\n", proizvod);
    
    return 0;
}
