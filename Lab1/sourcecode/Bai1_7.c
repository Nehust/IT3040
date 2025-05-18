/* Bài 1.7 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

#include <stdio.h>
#include <stdlib.h>
int *a;
int n, tmp;

int main() {
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //#Allocate memory
    a = (int*)malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", a + i); 
    
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    /********************   Phạm Ngọc Tuyên - 20235455 **************************/
    
    //#Sort array
    for(int i_tuyenpn = 0; i_tuyenpn < n - 1; i_tuyenpn++) {
        for (int j_tuyenpn = i_tuyenpn + 1; j_tuyenpn < n; j_tuyenpn++) {
            if (*(a + j_tuyenpn) < *(a + i_tuyenpn)) {
                tmp = *(a + i_tuyenpn);
                *(a + i_tuyenpn) = *(a + j_tuyenpn);
                *(a + j_tuyenpn) = tmp;
            }
        }
    }
    
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    free(a);
    return 0;
}

/* Bài 1.7 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

