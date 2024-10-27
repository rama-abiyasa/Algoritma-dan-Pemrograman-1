#include <stdio.h>

int main() {
    printf("Bilangan\n\n");
    //menampilkan bilangan ganjil
    printf("Ganjil: ");
    for (int i = 1; i <= 35; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    //menampilkan bilangan genap
    printf("\nGenap: ");
    for (int i = 1; i <= 35; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
