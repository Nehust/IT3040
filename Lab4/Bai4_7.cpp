#include <iostream>
#include <set>
#include <math.h>
using namespace std;

// Hợp 2 set
template<class T>
set<T> set_union(const set<T>& a, const set<T>& b) {
    set<T> unionSet;  
    for (auto x : a) {
        if (unionSet.find(x) == unionSet.end())
            unionSet.insert(x);
    }
    for (auto x : b) {
        if (unionSet.find(x) == unionSet.end())
            unionSet.insert(x);
    }
    return unionSet;
}

// Giao 2 set
template<class T>
set<T> set_intersection(const set<T>& a, const set<T>& b) {
    set<T> interSet;
    for (auto x : a) {
        for (auto y : b) {
            if (x == y)
                interSet.insert(x);
        }
    }
    return interSet;
}

template<class T>
void print_set(const std::set<T>& a) {
    for (const T& x : a) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}

int main() {
    std::set<int> a = { 1, 2, 3, 5, 7 };
    std::set<int> b = { 2, 4, 5, 6, 9 };
    std::set<int> c = set_union(a, b);
    std::set<int> d = set_intersection(a, b);

    std::cout << "Union: "; print_set(c);
    std::cout << "Intersection: "; print_set(d);

    return 0;
}