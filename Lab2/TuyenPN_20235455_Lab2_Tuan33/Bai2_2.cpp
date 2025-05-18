// Bài 2.2 - Phạm Ngọc Tuyên - 20235455
#include <stdio.h>

void rotate(int& x_55, int& y_55, int& z_55) {
    /*****************
    Bài 2.2 - Phạm Ngọc Tuyên - 20235455
    *****************/
    // Hoán đổi giá trị của ba biến x_55, y_55, z_55 theo chu kỳ
    int temp = x_55;     // Lưu trữ giá trị của x_55 vào biến tạm
    x_55 = y_55;         // Gán giá trị của y_55 cho x_55
    y_55 = z_55;         // Gán giá trị của z_55 cho y_55
    z_55 = temp;         // Gán giá trị của biến tạm cho z_55
}

int main() {
    printf("Bai 2.2 - Pham Ngoc Tuyen - 20235455\n");
    int x_55, y_55, z_55;

    //# Nhập 3 số nguyên
    /*****************
    Bài 2.2 - Phạm Ngọc Tuyên - 20235455
    *****************/
    scanf("%d %d %d", &x_55, &y_55, &z_55);  // Nhập ba số nguyên từ bàn phím

    printf("Before: %d, %d, %d\n", x_55, y_55, z_55);
    rotate(x_55, y_55, z_55);
    printf("After: %d, %d, %d\n", x_55, y_55, z_55);

    return 0;
}
// Bài 2.2 - Phạm Ngọc Tuyên - 20235455
