/* Bài 1.8 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

#include <stdio.h>
#include <stdlib.h>

void allocate_mem(int ***mt, int m, int n){
    //#Allocate memory for the matrix

/********************   Phạm Ngọc Tuyên - 20235455 **************************/ 
    // Cap phat bo nho chung cho ma tran
    *mt = (int**) malloc (m * sizeof(int*));

    // Cap phat bo nho cho tung hang cua ma tran
    for (int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
        
        (*mt)[i_tuyenpn] = (int*)malloc(n * sizeof(int));
    }
}


void input(int **mt, int m, int n){
    //#Input elements of the matrix

/********************   Phạm Ngọc Tuyên - 20235455 **************************/
    int tmp;    
   // Doc cac gia tri tu ban phim luu vao ma tran
   for(int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) {
            scanf("%d", &tmp);
            *(*(mt + i_tuyenpn) + j_tuyenpn) = tmp;
        }
   }
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix

/********************   Phạm Ngọc Tuyên - 20235455 **************************/
    for(int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) {
            printf("mt[%d][%d] = ", i_tuyenpn, j_tuyenpn);
            printf("%d ", *(*(mt + i_tuyenpn) + j_tuyenpn));
            printf("\n");
        }
    }
    
    // Lần lượt đọc các giá trị từ bàn phím và lưu vào mảng
//     for(int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
//         for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) {
//             printf("%d ", *(*(mt + i_tuyenpn) + j_tuyenpn));
//         }
//     printf("\n");
//    }
    
}


int process(int **mt, int m, int n){
    int tong = 0;
    //# Calculate the sum of all even elements in the matrix

/********************   Phạm Ngọc Tuyên - 20235455 **************************/
    int tmp;
    for(int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
        for (int j_tuyenpn = 0; j_tuyenpn < n; j_tuyenpn++) {
            tmp = *(*(mt + i_tuyenpn) + j_tuyenpn);
            // Kiem tra phan tu co phai so chan khong, neu co thi them vao tong
            if (!(tmp & 1)) tong += tmp; 
        }
   }
    
    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory

/********************   Phạm Ngọc Tuyên - 20235455 **************************/
    // Giai phong tung hang trong ma tran
    for (int i_tuyenpn = 0; i_tuyenpn < m; i_tuyenpn++) {
        free(mt[i_tuyenpn]);
    }
    // Giai phong toan bo ma tran
    free(mt);
}

int main() {
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");

    int m, n, ** mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}
/* Bài 1.8 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
