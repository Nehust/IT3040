// Bài 3.6 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
using namespace std;

int gcd(int a_55, int b_55) {
    if (b_55 == 0) return a_55;
    return gcd(b_55, a_55 % b_55);
}
// Tìm ước chung lớn nhất của a_55 và b_55
int gcd2(int a_55, int b_55) {
    while (a_55 != 0 && b_55 != 0) {
        int temp_55 = a_55;
        a_55 = b_55;
        b_55 = temp_55 % b_55;
    }
    return max(a_55, b_55);
}

int main() {
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    int a_55, b_55;
    cin >> a_55 >> b_55;
    cout << gcd(a_55, b_55) << endl << gcd2(a_55, b_55);
    return 0;
}
// Bài 3.6 - Phạm Ngọc Tuyên - 20235455
// Lab 3 - Tuần 36
