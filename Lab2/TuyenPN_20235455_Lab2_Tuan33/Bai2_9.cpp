// Bài 2.9  Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdio>

using namespace std;

const int LIMIT = 100;
const int NUM_ITER = 100000;
const int NUM_INPUTS = NUM_ITER * 100;

double sigmoid_slow(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double x[NUM_INPUTS];

void prepare_input() {
    const int PRECISION = 1000000;
    const double RANGE = LIMIT / 20.0;
    for (int i = 0; i < NUM_INPUTS; ++i) {
        x[i] = RANGE * (rand() % PRECISION - rand() % PRECISION) / PRECISION;
    }
}

const int TABLE_SIZE = 1 << 11;
double sigmoid_lookup[TABLE_SIZE + 1];

//# hàm chuẩn bị dữ liệu
void precalc() {
    const double MIN_X = -6.0, MAX_X = 6.0;
    const double SCALE = TABLE_SIZE / (MAX_X - MIN_X);
    const double INV_SCALE = 1 / SCALE;
    for (int i = 0; i < TABLE_SIZE; ++i) {
        sigmoid_lookup[i] = 1.0 / (1.0 + exp(-(MIN_X + i * INV_SCALE)));
    }
}

//# hàm tính sigmoid(x) nhanh sigmoid_fast(x)
inline double sigmoid_fast(double x) {
    const double MIN_X = -6.0, MAX_X = 6.0;
    const double SCALE = TABLE_SIZE / (MAX_X - MIN_X);
    const double INV_SCALE = 1 / SCALE;
    if (x <= MIN_X) return 0.0;
    if (x >= MAX_X) return 1.0;
    int index = (x - MIN_X) * SCALE;
    return (x - (MIN_X + INV_SCALE * index)) * SCALE * (sigmoid_lookup[index + 1] - sigmoid_lookup[index]) + sigmoid_lookup[index];
}

//# END fast code

double benchmark(double (*calc)(double), vector<double>& result) {
    const int NUM_TEST = 20;

    double taken = 0;
    result = vector<double>();
    result.reserve(NUM_ITER);

    int input_id = 0;
    clock_t start = clock();
    for (int t = 0; t < NUM_TEST; ++t) {
        double sum = 0;
        for (int i = 0; i < NUM_ITER; ++i) {
            double v = fabs(calc(x[input_id]));
            sum += v;
            if (t == 0) result.push_back(v);
            if ((++input_id) == NUM_INPUTS) input_id = 0;
        }
    }
    clock_t finish = clock();
    taken = (double)(finish - start);
    //#  printf("Time: %.9f\n", taken / CLOCKS_PER_SEC);
    return taken;
}

bool is_correct(const vector<double>& a, const vector<double>& b) {
    const double EPS = 1e-6;

    if (a.size() != b.size()) return false;
    for (int i = 0; i < (int)a.size(); ++i) {
        if (fabs(a[i] - b[i]) > EPS) {
            return false;
        }
    }
    return true;
}

void print_arr(vector<double> a) {
    for (double x : a) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}

int main() {
    printf("Bai 2.9 - Pham Ngoc Tuyen - 20235455\n");
    prepare_input();
    precalc();

    //#Tính hàm sigmoid 
    /*****************
    Bài 2.9 - Phạm Ngọc Tuyên - 20235455
    *****************/
    vector<double> a_55, b_55;
    double slow_55 = benchmark(sigmoid_slow, a_55);
    double fast_55 = benchmark(sigmoid_fast, b_55);

    double xval;
    scanf("%lf", &xval);
    printf("%.2f \n", sigmoid_fast(xval));
    bool flag = is_correct(a_55, b_55);
    if (flag && (slow_55 / fast_55 > 1.3)) {
        printf("Correct answer! Your code is faster at least 30%%!\n");
    }
    else {
        printf("Wrong answer or your code is not fast enough!\n");
    }

    return 0;
}
// Bài 2.9 - Phạm Ngọc Tuyên - 20235455