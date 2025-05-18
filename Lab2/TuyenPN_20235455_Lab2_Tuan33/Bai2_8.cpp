// Bài 2.8 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    printf("Bai 2.8 - Pham Ngoc Tuyen - 20235455\n");
    int val1_55, val2_55;
    cin >> val1_55 >> val2_55;
    vector< vector<int> > a_55 = {
        {1, 3, 7},
        {2, 3, 4, val1_55},
        {9, 8, 15},
        {10, val2_55},
    };

    //# sắp xếp các vector trong a theo tổng các phần tử giảm dần
    /*****************
    Bài 2.8 - Phạm Ngọc Tuyên - 20235455
    *****************/
    sort(a_55.begin(), a_55.end(), [](const vector<int>& p, const vector<int>& q) {
        return accumulate(p.begin(), p.end(), 0) > accumulate(q.begin(), q.end(), 0);
        });

    for (const auto& v : a_55) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// Bài 2.8 - Phạm Ngọc Tuyên - 20235455
