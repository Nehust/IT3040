
// Bài 2.11 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> cd;
const double PI = acos(-1);

void fft(vector<cd>& a_55, bool invert_55) {
    int n_55 = a_55.size();
    if (n_55 == 1) return;

    vector<cd> a0_55(n_55 / 2), a1_55(n_55 / 2);
    for (int i_55 = 0; 2 * i_55 < n_55; ++i_55) {
        a0_55[i_55] = a_55[i_55 * 2];
        a1_55[i_55] = a_55[i_55 * 2 + 1];
    }

    fft(a0_55, invert_55);
    fft(a1_55, invert_55);

    double ang_55 = 2 * PI / n_55 * (invert_55 ? -1 : 1);
    cd w_55(1), wn_55(cos(ang_55), sin(ang_55));
    for (int i_55 = 0; 2 * i_55 < n_55; ++i_55) {
        a_55[i_55] = a0_55[i_55] + w_55 * a1_55[i_55];
        a_55[i_55 + n_55 / 2] = a0_55[i_55] - w_55 * a1_55[i_55];
        if (invert_55) {
            a_55[i_55] /= 2;
            a_55[i_55 + n_55 / 2] /= 2;
        }
        w_55 *= wn_55;
    }
}

vector<int> multiplyFFT(const vector<int>& a_55, const vector<int>& b_55) {
    vector<cd> fa_55(a_55.begin(), a_55.end()), fb_55(b_55.begin(), b_55.end());
    int n_55 = 1;
    while (n_55 < (int)a_55.size() + (int)b_55.size()) n_55 <<= 1;
    fa_55.resize(n_55);
    fb_55.resize(n_55);

    fft(fa_55, false);
    fft(fb_55, false);
    for (int i_55 = 0; i_55 < n_55; ++i_55)
        fa_55[i_55] *= fb_55[i_55];
    fft(fa_55, true);

    vector<int> result_55(n_55);
    for (int i_55 = 0; i_55 < n_55; ++i_55)
        result_55[i_55] = round(fa_55[i_55].real());

    return result_55;
}

class Polynomial_55 {
private:
    int degree_55;
    int* coeffs_55;

public:
    Polynomial_55(int d_55) : degree_55(d_55) {
        coeffs_55 = new int[d_55 + 1];
        for (int i_55 = 0; i_55 <= d_55; ++i_55) {
            coeffs_55[i_55] = 0;
        }
    }

    friend istream& operator>>(istream& is_55, Polynomial_55& p_55) {
        for (int i_55 = 0; i_55 <= p_55.degree_55; ++i_55) {
            is_55 >> p_55.coeffs_55[i_55];
        }
        return is_55;
    }

    friend ostream& operator<<(ostream& os_55, const Polynomial_55& p_55) {
        for (int i_55 = 0; i_55 <= p_55.degree_55; ++i_55) {
            os_55 << p_55.coeffs_55[i_55] << " ";
        }
        return os_55;
    }

    Polynomial_55 operator+(const Polynomial_55& other_55) const {
        int max_degree_55 = max(degree_55, other_55.degree_55);
        Polynomial_55 result_55(max_degree_55);
        for (int i_55 = 0; i_55 <= max_degree_55; ++i_55) {
            result_55.coeffs_55[i_55] = (i_55 <= degree_55 ? coeffs_55[i_55] : 0) + (i_55 <= other_55.degree_55 ? other_55.coeffs_55[i_55] : 0);
        }
        return result_55;
    }

    Polynomial_55 operator*(const Polynomial_55& other_55) const {
        vector<int> a_55(coeffs_55, coeffs_55 + degree_55 + 1);
        vector<int> b_55(other_55.coeffs_55, other_55.coeffs_55 + other_55.degree_55 + 1);
        vector<int> result_55 = multiplyFFT(a_55, b_55);
        Polynomial_55 res_55(result_55.size() - 1);
        for (int i_55 = 0; i_55 < result_55.size(); ++i_55) {
            res_55.coeffs_55[i_55] = result_55[i_55];
        }
        return res_55;
    }

    int& operator[](int index_55) {
        return coeffs_55[index_55];
    }

    const int& operator[](int index_55) const {
        return coeffs_55[index_55];
    }

    int getDegree() const {
        return degree_55;
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
    cout << "output = "; 
    int degree1_55;
    cin >> degree1_55;
    Polynomial_55 p_55(degree1_55);
    cin >> p_55;

    int degree2_55;
    cin >> degree2_55;
    Polynomial_55 q_55(degree2_55);
    cin >> q_55;

    Polynomial_55 r_55 = p_55 * q_55;

    int res_55 = r_55[0];
    for (int i_55 = 1; i_55 <= r_55.getDegree(); ++i_55) {
        res_55 ^= r_55[i_55];
    }

    cout << res_55 << endl;

    return 0;
}
// Bài 2.11 - Phạm Ngọc Tuyên - 20235455
