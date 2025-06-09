// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
long long subString(const std::string& str_55) {
    std::unordered_map<char, long long> charCount_55;
    int balance_55 = 0;
    long long ans_55 = 0;
    charCount_55[0] = 1;
    for (const char& c_55 : str_55) {
        if (c_55 == '1') {
            balance_55++;
        }
        else {
            balance_55--;
        }
        ans_55 += charCount_55[balance_55];
        charCount_55[balance_55]++;
    }
    return ans_55;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str_55;
    std::cin >> str_55;
    std::cout << subString(str_55) << '\n';
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829