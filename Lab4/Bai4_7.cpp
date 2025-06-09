// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <set>
#include <math.h>
using namespace std;

// Hợp 2 set
template<class T>
set<T> set_union(const set<T>& a_55, const set<T>& b_55) {
    set<T> unionSet_55;
    for (auto x_55 : a_55) {
        if (unionSet_55.find(x_55) == unionSet_55.end())
            unionSet_55.insert(x_55);
    }
    for (auto x_55 : b_55) {
        if (unionSet_55.find(x_55) == unionSet_55.end())
            unionSet_55.insert(x_55);
    }
    return unionSet_55;
}

// Giao 2 set
template<class T>
set<T> set_intersection(const set<T>& a_55, const set<T>& b_55) {
    set<T> interSet_55;
    for (auto x_55 : a_55) {
        for (auto y_55 : b_55) {
            if (x_55 == y_55)
                interSet_55.insert(x_55);
        }
    }
    return interSet_55;
}

template<class T>
void print_set(const set<T>& a_55) {
    for (const T& x_55 : a_55) {
        cout << x_55 << ' ';
    }
    cout << endl;
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    set<int> a_55 = { 1, 2, 3, 5, 7 };
    set<int> b_55 = { 2, 4, 5, 6, 9 };
    set<int> c_55 = set_union(a_55, b_55);
    set<int> d_55 = set_intersection(a_55, b_55);

    cout << "Union: "; print_set(c_55);
    cout << "Intersection: "; print_set(d_55);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829