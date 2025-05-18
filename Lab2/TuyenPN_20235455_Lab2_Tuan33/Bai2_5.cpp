// Bài 2.5 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;

struct Complex {
    double real_55;
    double imag_55;
};

Complex operator + (Complex a_55, Complex b_55) {
    /*****************
    Bài 2.5 - Phạm Ngọc Tuyên - 20235455
    *****************/
    Complex result_55; // biến để lưu kết quả
    result_55.real_55 = a_55.real_55 + b_55.real_55; // tính phần thực của tổng
    result_55.imag_55 = a_55.imag_55 + b_55.imag_55; // tính phần ảo của tổng
    return result_55; // trả về kết quả
}

Complex operator - (Complex a_55, Complex b_55) {
    /*****************
    Bài 2.5 - Phạm Ngọc Tuyên - 20235455
    *****************/
    Complex result_55; // biến để lưu kết quả
    result_55.real_55 = a_55.real_55 - b_55.real_55; // tính phần thực của hiệu
    result_55.imag_55 = a_55.imag_55 - b_55.imag_55; // tính phần ảo của hiệu
    return result_55; // trả về kết quả
}

Complex operator * (Complex a_55, Complex b_55) {
    /*****************
    Bài 2.5 - Phạm Ngọc Tuyên - 20235455
    *****************/
    Complex result_55; // biến để lưu kết quả
    result_55.real_55 = a_55.real_55 * b_55.real_55 - a_55.imag_55 * b_55.imag_55; // tính phần thực của tích
    result_55.imag_55 = a_55.real_55 * b_55.imag_55 + b_55.real_55 * a_55.imag_55; // tính phần ảo của tích
    return result_55; // trả về kết quả
}

Complex operator / (Complex a_55, Complex b_55) {
    /*****************
    Bài 2.5 - Phạm Ngọc Tuyên - 20235455
    *****************/
    Complex result_55; // biến để lưu kết quả
    double denominator = b_55.real_55 * b_55.real_55 + b_55.imag_55 * b_55.imag_55;
    result_55.real_55 = (a_55.real_55 * b_55.real_55 + a_55.imag_55 * b_55.imag_55) / denominator; // phần thực
    result_55.imag_55 = (a_55.imag_55 * b_55.real_55 - a_55.real_55 * b_55.imag_55) / denominator; // phần ảo
    return result_55; // trả về kết quả
}

ostream& operator << (ostream& out, const Complex &a_55) {
    out << '(' << std::setprecision(2) << a_55.real_55 << (a_55.imag_55 >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a_55.imag_55) << 'i' << ')';
    return out;
}

int main() {
    printf("Bai 2.5 - Pham Ngoc Tuyen - 20235455\n");
    double real_a_55, real_b_55, img_a_55, img_b_55;
    cin >> real_a_55 >> img_a_55;
    cin >> real_b_55 >> img_b_55;
    /*****************
    Bài 2.5 - Phạm Ngọc Tuyên - 20235455
    *****************/
    Complex a_55{real_a_55, img_a_55};
    Complex b_55{real_b_55, img_b_55};
    
    cout << a_55 << " + " << b_55 << " = " << a_55 + b_55 << endl;
    cout << a_55 << " - " << b_55 << " = " << a_55 - b_55 << endl;
    cout << a_55 << " * " << b_55 << " = " << a_55 * b_55 << endl;
    cout << a_55 << " / " << b_55 << " = " << a_55 / b_55 << endl;
    
    return 0;
}
// Bài 2.5 - Phạm Ngọc Tuyên - 20235455
