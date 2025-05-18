/* Bài 1.6 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int size) {

    int l_tuyenpn = 0, r_tuyenpn = size - 1, tmp;
    // dao gia tri cac phan tu dau cuoi
    while (l_tuyenpn < r_tuyenpn) {
        tmp = arr[l_tuyenpn];
        arr[l_tuyenpn] = arr[r_tuyenpn];
        arr[r_tuyenpn] = tmp;
        l_tuyenpn++; r_tuyenpn--;
    }

}

/********************   Phạm Ngọc Tuyên - 20235455 **************************/

void ptr_reversearray(int* arr, int size) {

    int l_tuyenpn = 0, r_tuyenpn = size - 1, tmp_tuyenpn;
    while (l_tuyenpn < r_tuyenpn)
    {
        tmp_tuyenpn = *(arr + l_tuyenpn);
        *(arr + l_tuyenpn) = *(arr + r_tuyenpn);
        *(arr + r_tuyenpn) = tmp_tuyenpn;
        l_tuyenpn++; r_tuyenpn--;
    }

}
int main() {
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");
    
    int arr[] = { 9, 3, 5, 6, 2, 5 };
    reversearray(arr, 6);
    for (int i = 0; i < 6; i++) cout << arr[i] << " ";
    int arr2[] = { 4, -1, 5, 9 };
    ptr_reversearray(arr2, 4);
    for (int i = 0; i < 4; i++) cout << arr2[i] << " ";
}
/* Bài 1.6 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

