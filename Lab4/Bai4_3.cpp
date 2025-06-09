// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using Vector = tuple<double, double, double>;

Vector cross_product(Vector a_55, Vector b_55) {
    double x_55, y_55, z_55;
    x_55 = get<1>(a_55) * get<2>(b_55) - get<1>(b_55) * get<2>(a_55);
    y_55 = get<2>(a_55) * get<0>(b_55) - get<2>(b_55) * get<0>(a_55);
    z_55 = get<0>(a_55) * get<1>(b_55) - get<0>(b_55) * get<1>(a_55);
    return { x_55, y_55, z_55 };
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    cout << setprecision(2) << fixed;
    Vector a_55{ 1.2, 4, -0.5 };
    Vector b_55{ 1.5, -2, 2.5 };
    Vector c_55 = cross_product(a_55, b_55);
    cout << get<0>(c_55) << ' ' << get<1>(c_55) << ' ' << get<2>(c_55) << endl;
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829