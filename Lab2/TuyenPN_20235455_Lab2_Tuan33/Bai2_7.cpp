// Bài 2.7 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
using namespace std;

//# viết hàm arr_sum
/*****************
Bài 2.7 - Phạm Ngọc Tuyên - 20235455
*****************/
template<class T>
T arr_sum(T a_55[], int m_55, T b_55[], int n_55) {
    // Khởi tạo biến c_55 để lưu tổng các phần tử của hai mảng.
    T c_55 = 0;
    // Tính tổng các phần tử của mảng a_55.
    for (int i_55 = 0; i_55 < m_55; i_55++) {
        c_55 += a_55[i_55];
    }
    // Tính tổng các phần tử của mảng b_55.
    for (int i_55 = 0; i_55 < n_55; i_55++) {
        c_55 += b_55[i_55];
    }
    // Trả về tổng c_55.
    return c_55;
}

int main() {
    printf("Bai 2.7 - Pham Ngoc Tuyen - 20235455\n");
    /*****************
    Bài 2.7 - Phạm Ngọc Tuyên - 20235455
    *****************/
    int val_55;
    cin >> val_55;

    {
        int a_55[] = { 3, 2, 0, val_55 };
        int b_55[] = { 5, 6, 1, 2, 7 };
        cout << arr_sum(a_55, 4, b_55, 5) << endl;
    }
    {
        double a_55[] = { 3.0, 2, 0, val_55 * 1.0 };
        double b_55[] = { 5, 6.1, 1, 2.3, 7 };
        cout << arr_sum(a_55, 4, b_55, 5) << endl;
    }

    return 0;
}
// Bài 2.7 - Phạm Ngọc Tuyên - 20235455
