// Bài 2.4 - Phạm Ngọc Tuyên - 20235455
#include <stdio.h>

int cube(int x_55) {
    //# trả về lập phương của x/
    return x_55 * x_55 * x_55; // trả về lập phương của số nguyên x
}

//# viết hàm tính lập phương của một số kiểu double
double cube(double x_55) {
    return x_55 * x_55 * x_55; // trả về lập phương của số thực x
}

int main() {
    printf("Bai 2.4 - Pham Ngoc Tuyen - 20235455\n");
    /*****************
    Bài 2.4 - Phạm Ngọc Tuyên - 20235455
    *****************/
    int n_55;
    double f_55;
    scanf("%d %lf", &n_55, &f_55);

    printf("Int: %d\n", cube(n_55));
    printf("Double: %.2lf\n", cube(f_55));

    return 0;
}
// Bài 2.4 - Phạm Ngọc Tuyên - 20235455
