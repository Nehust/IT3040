// Bai 5.3 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <iostream>
using namespace std;
#include <string.h>
#include <stack>

int par_55(string str_55) {
    int a_55 = str_55.length();
    stack<char> S_55;
    char x_55, y_55;
    for (int i_55 = 0; i_55 < a_55; i_55++) {
        x_55 = str_55[i_55];
        if (x_55 == '(' || x_55 == '[' || x_55 == '{') {
            S_55.push(x_55);
        }
        else {
            if (S_55.empty()) return 0;
            if (x_55 == ')') {
                if (S_55.top() == '(') {
                    S_55.pop();
                }
                else return 0;
            }
            else if (x_55 == ']') {
                if (S_55.top() == '[') {
                    S_55.pop();
                }
                else return 0;
            }
            else if (x_55 == '}') {
                if (S_55.top() == '{') {
                    S_55.pop();
                }
                else return 0;
            }
        }
    }
    if (S_55.size()) {
        return 0;
    }
    else return 1;
}

int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int n_55;
    string str_55;

    cin >> n_55;
    for (int i_55 = 0; i_55 < n_55; i_55++) {
        cin >> str_55;
        cout << par_55(str_55) << endl;
    }

    return 0;
}
