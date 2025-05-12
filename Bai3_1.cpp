// Bai 3.1 
// Pham Ngoc Tuyen - 20235455 - 750829
#include <bits/stdc++.h>
using namespace std;
int lucas(int n_55) {
    if (n_55 < 1)  return 2;
    if (n_55 == 1) return 1;
    return lucas(n_55 - 1) + lucas(n_55 - 2);
}
// Bai 3.1 
// Pham Ngoc Tuyen - 20235455 - 750829
int main() {
    cout << "--------Pham Ngoc Tuyen - 20235455--------\n"; 
    cout << lucas(5);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829