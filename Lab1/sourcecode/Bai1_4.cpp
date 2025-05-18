/* Bài 1.4 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
#include <bits/stdc++.h>
using namespace std;
int counteven(int* arr, int size) {
    int count = 0;
/********************   Phạm Ngọc Tuyên - 20235455 **************************/
    int* ptr_tuyenpn = arr; 
    for (int i_tuyenpn = 0; i_tuyenpn < size; i_tuyenpn++) {
        if(*(ptr_tuyenpn + i_tuyenpn) % 2 == 0) count++;
    }
    return count;    
}

int main() {
    cout << "**********   Pham Ngoc Tuyen - 20235455   **********" << endl;
    int arr_tuyenpn[] = { 1, 5, 4, 8, 10, 6, 7, 2 };
    cout << counteven(arr_tuyenpn, 8);
    return 0;
}

/* Bài 1.4 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */