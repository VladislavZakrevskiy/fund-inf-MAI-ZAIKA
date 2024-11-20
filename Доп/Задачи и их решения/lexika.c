#include <stdio.h>

int main(void)
{
    char c;
    char prev;
    prev = getchar();
    
    while ((c = getchar()) != EOF) {
        if (prev == ' ' || c == ' ') {
            prev = c;
            continue;
        }
        
        if (((prev >= '0' && prev <= '9') && (c >= 'a' && c <= 'z')) || ((c >= '0' && c <= '9') && (prev >= 'a' && prev <= 'z'))) {
            printf("\nNO");
            return 0;
        }
        
        if (prev >= c) {
            printf("\nNO");
            return 0;
        }
        prev = c;
    }
    
    printf("\nYES");
    return 0;
}