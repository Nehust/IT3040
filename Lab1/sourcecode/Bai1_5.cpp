/* Bài 1.5 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
#include <bits/stdc++.h>
using namespace std;
double* maximum(double* a, int size_tuyenpn) {
    double *max;
    max = a;
    if (a==NULL) return NULL;

/********************   Phạm Ngọc Tuyên - 20235455 **************************/

    for(int i_tuyenpn = 0; i_tuyenpn < size_tuyenpn; i_tuyenpn++) {
        if (*(max + i_tuyenpn) > *max) max = max + i_tuyenpn;
    }
    return max;
}
int main() {
    
    double arr[] = { 1., 10., 2., -7., 25., 3. };
    double* max = maximum(arr, 6);
    printf("%.0f", *max);
}
/* Bài 1.5 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

