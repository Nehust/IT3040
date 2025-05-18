/* Bài 1.3 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

#include <stdio.h>
int main()
{
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");
    
    int x_tuyenpn, y_tuyenpn, z_tuyenpn;
    int *ptr;
    scanf("%d %d %d", &x_tuyenpn, &y_tuyenpn, &z_tuyenpn);
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x_tuyenpn, y_tuyenpn, z_tuyenpn);

    /********************   Phạm Ngọc Tuyên - 20235455 **************************/

    ptr = &x_tuyenpn; // Tro den dia chi cua x
    *ptr += 100;
    ptr = &y_tuyenpn; // Tro den dia chi cua y
    *ptr += 100;
    ptr = &z_tuyenpn; // Tro den dia chi cua z
    *ptr += 100;
    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x_tuyenpn, y_tuyenpn, z_tuyenpn);
    return 0;
}    

/* Bài 1.3 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */


