/* Bài 1.9 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
#include <stdio.h>
#include <stdlib.h>

void process(int* array_tuyenpn, int n_tuyenpn) {
    for (int i_tuyenpn = 0; i_tuyenpn < n_tuyenpn; i_tuyenpn++) 
        for(int j_tuyenpn = i_tuyenpn; j_tuyenpn < n_tuyenpn; j_tuyenpn++) {
            for (int k_tuyenpn = i_tuyenpn; k_tuyenpn <= j_tuyenpn; k_tuyenpn++) {
                printf("%d ", *(array_tuyenpn + k_tuyenpn));
            }
            printf("\n");
        }
}
/********************  Phạm Ngọc Tuyên - 20235455  **************************/
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\ncase = ");
    int test_tuyenpn;
    scanf("%d", &test_tuyenpn);
    printf("%d\n", test_tuyenpn);
    int n;
    scanf("%d", &n);
    printf("input = %d\n", n);
    printf("output : \n");
    int* a = (int*)malloc(n * (sizeof(int)));
    for (int i = 0; i < n; i++) scanf("%d", (a + i));
    process(a,n);
    return 0;
}

/* Bài 1.9 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
