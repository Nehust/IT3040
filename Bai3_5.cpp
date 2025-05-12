// Bài 3.5 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
using namespace std;

int binom(int n_55, int k_55) {
    if (k_55 > n_55) return 0;
    if (k_55 == 0) return 1;
    return binom(n_55 - 1, k_55) + binom(n_55 - 1, k_55 - 1); // C(n, k) = C(n-1, k) + C(n-1, k-1)
}

int binom2(int n_55, int k_55) {
    int a_55 = k_55, b_55 = n_55 - k_55;
    if (a_55 < b_55) swap(a_55, b_55);
    long long res_55 = 1;
    for (int i_55 = a_55 + 1; i_55 <= n_55; ++i_55)
        res_55 *= i_55;
    for (int i_55 = 2; i_55 <= b_55; ++i_55)
        res_55 /= i_55;
    return res_55;
}

int main() {
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    int m_55;
    cin >> m_55;
    for (int n_55 = 1; n_55 <= m_55; ++n_55) {
        for (int k_55 = 0; k_55 <= n_55; ++k_55)
            printf("%d ", binom(n_55, k_55));
        printf("\n");
    }
    for (int n_55 = 1; n_55 <= m_55; ++n_55) {
        for (int k_55 = 0; k_55 <= n_55; ++k_55)
            printf("%d ", binom2(n_55, k_55));
        printf("\n");
    }
    return 0;
}
// Bài 3.5 - Phạm Ngọc Tuyên - 20235455
// Lab 3 - Tuần 36
