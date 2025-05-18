// Bài 3.4 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

int a_55[1000], n_55;
int mem_55[1000]; // Mảng lưu kết quả các bài toán con đã được giải (memoization)

// Khởi tạo mảng memoization với giá trị -1
void init() {
    memset(mem_55, -1, sizeof(mem_55));
}

// Quy hoạch động
// Hàm lis(i_55): trả về độ dài dãy con tăng dài nhất kết thúc tại chỉ số i_55
int lis(int i_55) {
    if (mem_55[i_55] != -1) return mem_55[i_55];
    int res_55 = 1;
    for (int j_55 = 0; j_55 < i_55; ++j_55)
        if (a_55[j_55] < a_55[i_55] && res_55 < lis(j_55) + 1)
            res_55 = lis(j_55) + 1;
    mem_55[i_55] = res_55;
    return mem_55[i_55];
}

// Truy vết lời giải LIS
void trace(int i_55) {
    for (int j_55 = 0; j_55 < i_55; j_55++) {
        if (a_55[j_55] < a_55[i_55] && mem_55[i_55] == 1 + mem_55[j_55]) {
            trace(j_55);
            break;
        }
    }
    cout << a_55[i_55] << " ";
}

int main() {
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    init();
    cin >> n_55;
    for (int i_55 = 0; i_55 < n_55; i_55++) cin >> a_55[i_55];

    int res_55 = 1, pos_55 = 0;
    for (int i_55 = 1; i_55 < n_55; i_55++) {
        if (res_55 < lis(i_55)) {
            res_55 = lis(i_55);
            pos_55 = i_55;
        }
    }

    cout << res_55 << endl;
    trace(pos_55);
    return 0;
}

// Bài 3.4 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab 3
