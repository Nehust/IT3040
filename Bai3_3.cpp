// Bai 3.3
// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <climits>
#include <chrono>
#include <iomanip>
using namespace std;
#define MAX 100  

// Pham Ngoc Tuyen - 20235455 - 750829
int n, c_55[MAX][MAX]; //# số thành phố và ma trận chi phí
int cmin_55 = INT_MAX; //# chi phí đi lại nhỏ nhất giữa hai thành phố khác nhau
int best_55 = INT_MAX; //# tổng chi phí nhỏ nhất cần tìm, ban đầu đặt bằng giá trị vô cùng lớn INT_MAX = 2^31-1
int curr_55; //# tổng chi phí tới thời điểm hiện tại
int mark_55[MAX]; //# đánh dấu những thành phố đã đi
int x_55[MAX]; //# lưu giữ các thành phố đã đi

// Pham Ngoc Tuyen - 20235455 - 750829
void input() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j) {
            cin >> c_55[i][j];
            if (c_55[i][j] > 0) cmin_55 = min(cmin_55, c_55[i][j]);
        }
}

// Pham Ngoc Tuyen - 20235455 - 750829
void TRY(int k) {
    for (int i = 2; i <= n; i++) {
        if (mark_55[i]) continue;
        mark_55[i] = 1;
        x_55[k] = i;
        curr_55 += c_55[x_55[k - 1]][i];
        if (k == n)
            best_55 = min(best_55, curr_55 + c_55[x_55[n]][1]);
        else if (curr_55 + cmin_55 * (n - k + 1) < best_55) TRY(k + 1);
        mark_55[i] = 0;
        curr_55 -= c_55[x_55[k - 1]][i];
    }
}

// Pham Ngoc Tuyen - 20235455 - 750829
int main()
{
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    input();
    x_55[1] = 1;
    TRY(2);
    cout << best_55;
    return 0;
}
// Bài 3.3 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab 3

