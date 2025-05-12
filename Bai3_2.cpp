// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
using namespace std;

int n_55;
int X[100], Y[100]; //# Lưu tọa độ các bước di chuyển của quân mã
int mark[100][100]; //# Đánh dấu vị trí các ô mà quân mã đã di chuyển qua

//# Mảng hx, hy mô tả 8 vị trí quân mã có thể di chuyển kể từ vị trí hiện tại
const int hx[] = { 1, 1, 2, 2, -1, -1, -2, -2 };
const int hy[] = { 2, -2, 1, -1, 2, -2, 1, -1 };

//# In ra dãy các di chuyển tìm được
void print_sol() {
    for (int j = 1; j <= n_55 * n_55; ++j)
        printf("(%d %d)\n", X[j], Y[j]);
    exit(0);
}

//# Thuật toán quay lui
void TRY(int k) {

    for (int i = 0; i < 8; i++) {
        int xx = X[k - 1] + hx[i];
        int yy = Y[k - 1] + hy[i];
        // My code 
        if (xx < 1 || yy < 1 || xx > n_55 || yy > n_55 ) continue;
        if (mark[xx][yy]) continue;
        mark[xx][yy] = 1;
        X[k] = xx;
        Y[k] = yy;
        if (k == n_55 * n_55) {
            print_sol();
        }
        TRY(k + 1);
        mark[xx][yy] = 0;
    }
}
// Bai 3.2 
// Pham Ngoc Tuyen - 20235455 - 750829
int main() {
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    cin >> n_55;
    mark[1][1] = 1;
    X[1] = Y[1] = 1;
    TRY(2);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829
