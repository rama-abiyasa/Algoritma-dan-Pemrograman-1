#include <stdio.h>

int main() {
    int a, b, c, d;
    
    // Input 4 bilangan
    printf("Masukkan empat bilangan bulat:\n");
    printf("Bilangan pertama: ");
    scanf("%d", &a);
    printf("Bilangan kedua: ");
    scanf("%d", &b);
    printf("Bilangan ketiga: ");
    scanf("%d", &c);
    printf("Bilangan keempat: ");
    scanf("%d", &d);
    
    // Menentukan bilangan terbesar
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    
    // Menampilkan hasil
    printf("Bilangan terbesar adalah: %d\n", max);
    
    return 0;
}
