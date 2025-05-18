// Bài 2.3 - Phạm Ngọc Tuyên - 20235455
#include <iostream>

//# Viết hàm get_value
/*****************
Bài 2.3 - Phạm Ngọc Tuyên - 20235455
*****************/
int get_value(int x_55, int a_55 = 2, int b_55 = 1, int c_55 = 0) {
    // Hàm tính giá trị của biểu thức bậc hai với các tham số tùy chọn
    return a_55 * x_55 * x_55 + b_55 * x_55 + c_55;
}

int main() {
    printf("Bai 2.3 - Pham Ngoc Tuyen - 20235455\n");
    int x_55;
    scanf("%d", &x_55);

    int a_55 = 2; //# giá trị mặc định của a
    int b_55 = 1; //# giá trị mặc định của b
    int c_55 = 0; //# giá trị mặc định của c

    //# Nhập 3 số nguyên a, b, c từ bàn phím
    /*****************
    Bài 2.3 - Phạm Ngọc Tuyên - 20235455
    *****************/
    scanf("%d %d %d", &a_55, &b_55, &c_55); // Nhập giá trị cho các biến a, b, c từ bàn phím

    printf("a=2, b=1, c=0: %d\n", get_value(x_55));
    printf("a=%d, b=1, c=0: %d\n", a_55, get_value(x_55, a_55));
    printf("a=%d, b=%d, c=0: %d\n", a_55, b_55, get_value(x_55, a_55, b_55));
    printf("a=%d, b=%d, c=%d: %d\n", a_55, b_55, c_55, get_value(x_55, a_55, b_55, c_55));

    return 0;
}
// Bài 2.3 - Phạm Ngọc Tuyên - 20235455
