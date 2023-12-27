#include <stdio.h>
#include <stdlib.h>

typedef struct {
        float re;
        float im;
} KompleksanBr;

/* struct KompleksanBr {
      float re;
      flota im;
}
struct KompleksanBr x; */

KompleksanBr saberi(KompleksanBr x, KompleksanBr y) {
    
    KompleksanBr z;
    z.re = x.re + y.re;
    z.im = x.im + y.im;
    return z;
}

KompleksanBr oduzmi(KompleksanBr x, KompleksanBr y) {
    
    KompleksanBr z;
    z.re = x.re - y.re;
    z.im = x.im - y.im;
    return z;
}

KompleksanBr pomnozi(KompleksanBr x, KompleksanBr y) {
    
    KompleksanBr z;
    z.re = x.re*y.re - x.im*y.im;
    z.im = x.re*y.im + x.im*y.re;
    return z;
}

KompleksanBr podeli(KompleksanBr x, KompleksanBr y) {
    
    KompleksanBr z;
    z.re = x.re*y.re + x.im*y.im;
    z.re /= y.re*y.re + y.im*y.im;
    
    z.im = x.im*y.re - x.re*y.im;
    z.im /= y.re*y.re + y.im*y.im;
    
    return z;
}

void ispisi(KompleksanBr x) {
    // napraviti lepsi ispis
    printf("%.2f + i*%.2f\n", x.re, x.im);
}
    
int main() {
    
    KompleksanBr x, y;
    
    scanf("%f%f%f%f", &x.re, &x.im, &y.re, &y.im);
    KompleksanBr z = saberi(x, y);
    ispisi(z);
    z = oduzmi(x, y);
    ispisi(z);
    z = pomnozi(x, y);
    ispisi(z);
    z = podeli(x, y);
    ispisi(z);
    
    return 0;
}
