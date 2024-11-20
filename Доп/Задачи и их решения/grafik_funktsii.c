#include <stdio.h>
#include <math.h>
#define WIGTH_FIELD 20 // ширина поля
int main() {
    int span = 0; // отступ
    double real = 0.0;
    
    for (double i = 0.0; i < 100; i += 0.4) {
        real = (sin(i) > 0 ? 1 + sin(i) : 1 - (-sin(i))) / 2.0;
        
        if (real == 0.0) { 
            for (int j = 0; j < WIGTH_FIELD / 2; ++j)
                printf(" ");
                printf("*\n"); 
        } else {
        span = WIGTH_FIELD * real;
        
        for (int j = 0; j < span; ++j) 
            printf(" "); 
            printf("*\n");
        }
    }
    return 0;
}