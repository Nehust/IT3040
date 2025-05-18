/* Bài 1.10 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

#include <stdio.h>
#include <stdlib.h>

void allocate_mem(int ***mt, int n){
    *mt = (int**)malloc(n * sizeof(int*));
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++) 
        (*mt)[i_tuyenpn] = (int*)malloc(n * sizeof(int));
}

void input(int **mt, int n){
    int ele_tuyenpn;
    
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++)
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) {
            scanf("%d", &ele_tuyenpn);
            *(*(mt + i_tuyenpn) + j_tuyenpn) = ele_tuyenpn;
        }
}

void output(int **mt, int n){
    // Lần lượt đọc các giá trị từ bàn phím và in ra màn hình
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++) {
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) 
            printf("%d ", *(*(mt + i_tuyenpn) + j_tuyenpn));
        printf("\n");
    }
}

int** sumMatrix(int **mt1, int **mt2, int n){
    printf("----------   Sum of Matrix   ----------\n");
    int** sum;
    allocate_mem(&sum, n);
    
    // Tính tổng của ma trận
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++)
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) 
            sum[i_tuyenpn][j_tuyenpn] = mt1[i_tuyenpn][j_tuyenpn] + mt2[i_tuyenpn][j_tuyenpn];
    
    return sum;
}

/********************   Phạm Ngọc Tuyên - 20235455 **************************/

int** multMatrix(int **mt1, int **mt2, int n){
    printf("----------   Mult of Matrix   ----------\n");
    // Khởi tạo biến lưu tích ma trận
    int** mult;
    allocate_mem(&mult, n);
    
    // Tính tích của ma trận
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++)
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) { 
            mult[i_tuyenpn][j_tuyenpn] = 0;
            for (int k_tuyenpn = 0; k_tuyenpn < n; k_tuyenpn++)
                mult[i_tuyenpn][j_tuyenpn] += mt1[i_tuyenpn][k_tuyenpn] * mt2[k_tuyenpn][j_tuyenpn];
        }
    return mult;
}

void free_mem(int **mt, int n){
    for (int i_tuyenpn = 0; i_tuyenpn < n; i_tuyenpn++) 
        free(mt[i_tuyenpn]);
    free(mt);
}
/********************   Phạm Ngọc Tuyên - 20235455 **************************/
int main() {
    // freopen("output.txt", "w", stdout);
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\ncase = ");
    int n, ** mt1, ** mt2,test_tuyenpn;
    scanf("%d", &test_tuyenpn);
    printf("%d\n", test_tuyenpn);
    scanf("%d", &n);
    printf("input = %d\n", n);
    allocate_mem(&mt1, n);
    allocate_mem(&mt2, n);


    input(mt1, n);
    input(mt2, n);

    printf("output = \n");
    output(sumMatrix(mt1, mt2, n), n);
    output(multMatrix(mt1, mt2, n), n);


    free_mem(mt1, n);
    free_mem(mt2, n);
    return 0;
}

/* Bài 1.10 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */