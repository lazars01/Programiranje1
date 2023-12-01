#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    if(x < 1000 || x > 9999) {
        printf("Nesipravan unos!\n");
        return 1;
    }
    
    int j, d, s, h;
    
    j = x % 10;
    d = (x / 10) % 10;
    s = (x / 100) % 10;
    h = x / 1000;
    
    int min = j, stepen_najmanje = 1;
    if(d < min) {
        min = d;
        stepen_najmanje = 10;
    }
    if(s < min) {
        min = s;
        stepen_najmanje = 100;
    }
    if(h < min) {
        min = h;
        stepen_najmanje = 1000;
    }
    
    int max = j, stepen_najvece = 1;
    if(d > max) {
        max = d;
        stepen_najvece = 10;
    }
    if(s > max) {
        max = s;
        stepen_najvece = 100;
    }
    if(h > max) {
        max = h;
        stepen_najvece = 1000;
    }
   
    x -= min * stepen_najmanje;
    x -= max * stepen_najvece;
    
    x += min * stepen_najvece;
    x += max * stepen_najmanje;
  
    printf("Dobijeni broj je: %d\n", x);
    return 0;
    
}
