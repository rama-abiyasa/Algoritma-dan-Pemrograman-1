#include <stdio.h>

int main() {
    int i = 1;
    
    printf("Bilangan\n\n");

    printf("Ganjil : ");
    while (i <= 35) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    
    i = 1;  // Reset nilai i untuk perulangan bilangan ganjil
    printf("\nGenap : ");
    while (i <= 35) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf(".");
    
    return 0;
}