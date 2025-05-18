// Bài 2.10 - Phạm Ngọc Tuyên - 20235455
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

const int N = 20;

struct Matrix {
    unsigned int mat[N][N];

    Matrix() {
        memset(mat, 0, sizeof mat);
    }
};

bool operator == (const Matrix& a_55, const Matrix& b_55) {
    for (int i_55 = 0; i_55 < N; ++i_55) {
        for (int j_55 = 0; j_55 < N; ++j_55) {
            if (a_55.mat[i_55][j_55] != b_55.mat[i_55][j_55]) return false;
        }
    }
    return true;
}

Matrix multiply_naive(const Matrix& a_55, const Matrix& b_55) {
    Matrix c_55;
    for (int i_55 = 0; i_55 < N; ++i_55) {
        for (int j_55 = 0; j_55 < N; ++j_55) {
            for (int k_55 = 0; k_55 < N; ++k_55) {
                c_55.mat[i_55][j_55] += a_55.mat[i_55][k_55] * b_55.mat[k_55][j_55];
            }
        }
    }
    return c_55;
}

Matrix multiply_fast(const Matrix& a_55, const Matrix& b_55) {
    Matrix c_55;
    for (int i_55 = 0; i_55 < N; ++i_55) {
        for (int j_55 = 0; j_55 < N; ++j_55) {
            unsigned int t_55 = 0;
            for (int k_55 = 0; k_55 < N; ++k_55) {
                t_55 += a_55.mat[i_55][k_55] * b_55.mat[k_55][j_55];
            }
            c_55.mat[i_55][j_55] = t_55;
        }
    }
    return c_55;
}

Matrix gen_random_matrix() {
    Matrix a_55;
    for (int i_55 = 0; i_55 < N; ++i_55) {
        for (int j_55 = 0; j_55 < N; ++j_55) {
            a_55.mat[i_55][j_55] = rand();
        }
    }
    return a_55;
}

Matrix base_55;

double benchmark(Matrix(*multiply) (const Matrix&, const Matrix&), Matrix& result_55) {
    const int NUM_TEST = 10;
    const int NUM_ITER = 64;

    Matrix a_55 = base_55;
    result_55 = a_55;

    double taken = 0;
    for (int t = 0; t < NUM_TEST; ++t) {
        clock_t start = clock();
        for (int i_55 = 0; i_55 < NUM_ITER; ++i_55) {
            a_55 = multiply(a_55, result_55);
            result_55 = multiply(result_55, a_55);
        }
        clock_t finish = clock();
        taken += (double)(finish - start);
    }
    taken /= NUM_TEST;

    printf("Time: %.9f\n", taken / CLOCKS_PER_SEC);
    return taken;
}

int main() {
    printf("Bai 2.10 - Pham Ngoc Tuyen - 20235455\n");
    base_55 = gen_random_matrix();

    Matrix a_55, b_55;
    printf("Slow version\n");
    double slow_55 = benchmark(multiply_naive, a_55);
    printf("Fast version\n");
    double fast_55 = benchmark(multiply_fast, b_55);
    /*--------------------------------------------------
    Pham Ngoc Tuyen - 20235455 - Tuan 34 - BTH2 - 750829
    ---------------------------------------------------*/
    if (a_55 == b_55) {
        printf("Correct answer! Your code is %.2f%% faster\n", slow_55 / fast_55 * 100.0);
    }
    else {
        printf("Wrong answer!\n");
    }
    return 0;
}
// Bài 2.10 - Phạm Ngọc Tuyên - 20235455
