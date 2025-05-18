// Bài 2.12 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <algorithm>

using namespace std;

struct myPair_55 {
    int first_55;
    int second_55;

    bool operator<(const myPair_55& other_55) const {
        return (second_55 < other_55.second_55) || (second_55 == other_55.second_55 && first_55 < other_55.first_55);
    }
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*--------------------------------------------------
    Pham Ngoc Tuyen - 20235455 - Tuan 34 - BTH2 - 750829
    ---------------------------------------------------*/

    myPair_55* myPairs_55 = new myPair_55[1000];
    int length_55 = 0;
    string str; 
    while (cin >> myPairs_55[length_55].first_55 >> myPairs_55[length_55].second_55) {
        cin.ignore();
        length_55++;
    }

    sort(myPairs_55, myPairs_55 + length_55, [](const myPair_55& a_55, const myPair_55& b_55) {
        return !(a_55 < b_55);
        });

    for (int i_55 = 0; i_55 < length_55; i_55++) {
        cout << myPairs_55[i_55].first_55 << " " << myPairs_55[i_55].second_55 << endl;
    }
}
// Bài 2.12 - Phạm Ngọc Tuyên - 20235455