// Bai 5.2 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <iostream>
using namespace std;

int n_55, M_55, m_55[100], v_55[100];
int x_55[100], best_55, sumV_55, sumM_55, all_55[100];

void init_55() {
    for (int i_55 = n_55; i_55 >= 1; --i_55) {
        all_55[i_55] = all_55[i_55 + 1] + v_55[i_55];
    }
}

void print_55() {
    cout << best_55;
}

void process_55(int i_55) {
    if (sumV_55 + all_55[i_55] <= best_55 || sumM_55 > M_55) {
        return;
    }
    if (i_55 > n_55) {
        best_55 = sumV_55;
        return;
    }
    process_55(i_55 + 1);
    sumM_55 += m_55[i_55];
    sumV_55 += v_55[i_55];
    process_55(i_55 + 1);
    sumM_55 -= m_55[i_55];
    sumV_55 -= v_55[i_55];
}

int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    cin >> n_55 >> M_55;
    for (int i_55 = 1; i_55 <= n_55; ++i_55)
        cin >> m_55[i_55] >> v_55[i_55];
    init_55();
    process_55(1);
    print_55();
    return 0;
}
