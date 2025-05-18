/* Bài 1.2 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

#include <stdio.h>
int main() {
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");
    
    int a_tuyenpn[7] = { 13, -355, 235, 47, 67, 943, 1222 };
    printf("address of first five elements in memory.\n");
    for (int i=0; i<5;i++)  printf("\ta[%d] \t",i);
    printf("\n");
    
    /********************   Phạm Ngọc Tuyên - 20235455 **************************/
    
    // In ra dia chi cua 5 phan tu dau tien trong mang
    for (int i_tuyenpn= 0; i_tuyenpn < 5; i_tuyenpn++) {
        printf("\t%p", &a_tuyenpn[i_tuyenpn]);
    }
    printf("\n"); 
    return 0;
}

/* Bài 1.2 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */
