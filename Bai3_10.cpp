// Bài 3.10 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

void generateStrings_55(int n_55, int hamming_55, string current_55, int index_55, vector<string>& result_55) {
    if (index_55 == n_55) {
        if (hamming_55 == 0) {
            result_55.push_back(current_55);
        }
        return;
    }

    // Trường hợp gán 0
    generateStrings_55(n_55, hamming_55, current_55 + "0", index_55 + 1, result_55);

    // Trường hợp gán 1
    if (hamming_55 > 0) {
        generateStrings_55(n_55, hamming_55 - 1, current_55 + "1", index_55 + 1, result_55);
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";

    int t_55;
    cin >> t_55;

    while (t_55--) {
        int n_55, hamming_55;
        cin >> n_55 >> hamming_55;

        vector<string> result_55;
        generateStrings_55(n_55, hamming_55, "", 0, result_55);

        // Sắp xếp các xâu theo thứ tự từ điển (không cần thiết vì sinh sẵn theo thứ tự từ điển)
        sort(result_55.begin(), result_55.end());

        // In kết quả
        for (const string& binaryString_55 : result_55) {
            cout << binaryString_55 << endl;
        }

        if (t_55 > 0) cout << endl; // Dòng trống giữa hai testcase
    }

    return 0;
}
// Bài 3.10 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3
