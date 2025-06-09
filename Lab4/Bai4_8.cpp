// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <map>
using namespace std;

template<class T>
map<T, double> fuzzy_set_union(const map<T, double>& a_55, const map<T, double>& b_55) {
    map<T, double> unionSet_55;
    for (auto x_55 : a_55) {
        unionSet_55[x_55.first] = x_55.second;
    }
    for (auto y_55 : b_55) {
        unionSet_55[y_55.first] = max(y_55.second, unionSet_55[y_55.first]);
    }
    return unionSet_55;
}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double>& a_55, const map<T, double>& b_55) {
    map<T, double> intersectionSet_55;
    for (auto x_55 : a_55) {
        for (auto y_55 : b_55) {
            if (x_55.first == y_55.first) {
                intersectionSet_55[x_55.first] = min(x_55.second, y_55.second);
            }
        }
    }
    return intersectionSet_55;
}

template<class T>
void print_fuzzy_set(const map<T, double>& a_55) {
    cout << "{ ";
    for (const auto& x_55 : a_55) {
        cout << "(" << x_55.first << ", " << x_55.second << ") ";
    }
    cout << "}";
    cout << endl;
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    map<int, double> a_55 = { {1, 0.2}, {2, 0.5}, {3, 1}, {4, 0.6}, {5, 0.7} };
    map<int, double> b_55 = { {1, 0.5}, {2, 0.4}, {4, 0.9}, {5, 0.4}, {6, 1} };
    cout << "A = "; print_fuzzy_set(a_55);
    cout << "B = "; print_fuzzy_set(b_55);
    map<int, double> c_55 = fuzzy_set_union(a_55, b_55);
    map<int, double> d_55 = fuzzy_set_intersection(a_55, b_55);
    cout << "Union: "; print_fuzzy_set(c_55);
    cout << "Intersection: "; print_fuzzy_set(d_55);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829