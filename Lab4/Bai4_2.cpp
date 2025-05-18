#include <iostream>
#include <cmath>
#include <iomanip>
#include <utility>
using namespace std;
using Point = pair<double, double>;

double area(Point a, Point b, Point c) {
    return abs(1.0 / 2 * ((a.first * (b.second - c.second)) + (b.first * (c.second - a.second)) + (c.first * (a.second - b.second))));
}

int main() {
    cout << setprecision(2) << fixed;
    cout << area({ 1, 2 }, { 2.5, 10 }, { 15, -5.25 }) << endl;
    return 0;
}