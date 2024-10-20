#include <stdio.h>
#include <string.h>

enum ClothingSize { SMALL, MEDIUM, LARGE, XLARGE, XXLARGE };

int main() {
    int input_num;
    char input_str[10];

    printf("Pilih ukuran pakaian (angka):\n");
    printf("1. Small\n");
    printf("2. Medium\n");
    printf("3. Large\n");
    printf("4. XLarge\n");
    printf("5. XXLarge\n");
    printf("Masukkan pilihan Anda (1-5): ");
    scanf("%d", &input_num);

    enum ClothingSize size;
    switch (input_num) {
        case 1:
            size = SMALL;
            break;
        case 2:
            size = MEDIUM;
            break;
        case 3:
            size = LARGE;
            break;
        case 4:
            size = XLARGE;
            break;
        case 5:
            size = XXLARGE;
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return 1;
    }

    printf("Menggunakan switch:\n");
    switch (size) {
        case SMALL:
            printf("Ukuran pakaian: Small\n");
            break;
        case MEDIUM:
            printf("Ukuran pakaian: Medium\n");
            break;
        case LARGE:
            printf("Ukuran pakaian: Large\n");
            break;
        case XLARGE:
            printf("Ukuran pakaian: XLarge\n");
            break;
        case XXLARGE:
            printf("Ukuran pakaian: XXLarge\n");
            break;
        default:
            printf("Ukuran pakaian tidak valid.\n");
    }

	
    printf("\nMasukkan ukuran pakaian (string, misal: Small, Medium, Large, XLarge, XXLarge): ");
    scanf("%s", input_str);

    printf("\nMenggunakan if-else:\n");
    if (strcmp(input_str, "Small") == 0) {
        printf("Ukuran pakaian: Small\n");
    } else if (strcmp(input_str, "Medium") == 0) {
        printf("Ukuran pakaian: Medium\n");
    } else if (strcmp(input_str, "Large") == 0) {
        printf("Ukuran pakaian: Large\n");
    } else if (strcmp(input_str, "XLarge") == 0) {
        printf("Ukuran pakaian: XLarge\n");
    } else if (strcmp(input_str, "XXLarge") == 0) {
        printf("Ukuran pakaian: XXLarge\n");
    } else {
        printf("Ukuran pakaian tidak valid.\n");
    }

    return 0;
}
