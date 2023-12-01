#include <stdio.h>

int main() {
    
    char c;
    scanf("%c", &c);
    
    printf("%c\n", c);
    printf("%d\n", c);
    
    if(c >= 'a' && c <= 'z')  {
        c = c - 32;
        printf("Veliko slovo je: %c\n", c);
        printf("Njegov ascii kod je: %d\n", c);
    }
    else if (c >= 'A' && c <= 'Z') {
        c += 'a' - 'A';
        printf("Malo slovo je: %c\n", c);
        printf("Njegov ascii kod je: %d\n", c);
    }
    else {
        printf("Pogresan unos!\n");
        return 1;
    }
    
    
    
    
    return 0;
}
