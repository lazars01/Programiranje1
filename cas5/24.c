#include <stdio.h>

int main() {
    
    int a, b;
    char op;
    
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op) {
        case '+':
            printf("Rezultat je: %d\n", a + b);
            break;
        case '-':
            printf("Rezultat je: %d\n", a - b);
            break;
        case '*':
            printf("Rezultat je: %d\n", a * b);
            break;
        case '/':
            if(b == 0) {
                printf("Greska: deljenje nulom.\n");
            }
            else {
                printf("Rezultat je: %d\n", a / b);
            }
            break;
        case '%':
            if(b == 0) {
                printf("Greska: deljenje nulom.\n");
            }
            else {
                printf("Rezultat je: %d\n", a % b);
            }
            break;
        default:
            printf("Greska: pogresno uneta operacija!\n");
            break;
    }
    
    return 0;
}
