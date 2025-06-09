// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <cmath>
#include <iomanip>
#include <utility>
using namespace std;
using Point = pair<double, double>;

double area(Point a_55, Point b_55, Point c_55) {
    return abs(1.0 / 2 * ((a_55.first * (b_55.second - c_55.second)) + (b_55.first * (c_55.second - a_55.second)) + (c_55.first * (a_55.second - b_55.second))));
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    cout << setprecision(2) << fixed;    cout << area({ 1, 2 }, { 2.5, 10 }, { 15, -5.25 }) << endl;
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829