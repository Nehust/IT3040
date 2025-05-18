// Bài 2.6 - Phạm Ngọc Tuyên - 20235455
#include <stdio.h>

void print_55(int n_55) {
    printf("n=%d\n", n_55);
}

int mul3plus1_55(int n_55) {
    return n_55 * 3 + 1;
}

int div2_55(int n_55) {
    return n_55 / 2;
}

// khai báo các tham số cho các con trỏ hàm odd, even và output
void simulate_55(int n_55,
    // Con trỏ hàm odd_55 trỏ đến hàm xử lý khi n_55 là số lẻ.
    int (*odd_55)(int),
    // Con trỏ hàm even_55 trỏ đến hàm xử lý khi n_55 là số chẵn.
    int (*even_55)(int),
    // Con trỏ hàm output_55 trỏ đến hàm in ra giá trị của n_55.
    void (*output_55)(int)) {
    output_55(n_55);
    if (n_55 == 1) return;
    if (n_55 % 2 == 0) {
        n_55 = even_55(n_55);
    }
    else {
        n_55 = odd_55(n_55);
    }
    simulate_55(n_55, odd_55, even_55, output_55);
}

int main() {
    printf("Bai 2.6 - Pham Ngoc Tuyen - 20235455\n");
    int (*odd_55)(int) = NULL;
    int (*even_55)(int) = NULL;

    /*****************
    Bài 2.6 - Phạm Ngọc Tuyên - 20235455
    *****************/
    // Gán con trỏ hàm odd_55 trỏ đến hàm mul3plus1_55.
    odd_55 = mul3plus1_55;
    // Gán con trỏ hàm even_55 trỏ đến hàm div2_55.
    even_55 = div2_55;

    int n_55;
    scanf("%d", &n_55);
    simulate_55(n_55, odd_55, even_55, print_55);

    return 0;
}
// Bài 2.6 - Phạm Ngọc Tuyên - 20235455
