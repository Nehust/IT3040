// Bai 5.6 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>
using namespace std;

// Hàm tính loại điểm
char cal_55(double a_55) {
    if (a_55 < 4) return 'F';
    if (a_55 < 5.5) return 'D';
    if (a_55 < 7) return 'C';
    if (a_55 < 8.5) return 'B';
    return 'A';
}

int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int n_55;
    cin >> n_55;
    int A_55 = 0, B_55 = 0, C_55 = 0, D_55 = 0, F_55 = 0;

    while (n_55--) {
        double a_55;
        cin >> a_55;

        char grade_55 = cal_55(a_55);

        if (grade_55 == 'A') ++A_55;
        else if (grade_55 == 'B') ++B_55;
        else if (grade_55 == 'C') ++C_55;
        else if (grade_55 == 'D') ++D_55;
        else if (grade_55 == 'F') ++F_55;
    }

    cout << A_55 << " " << B_55 << " " << C_55 << " " << D_55 << " " << F_55;
}
