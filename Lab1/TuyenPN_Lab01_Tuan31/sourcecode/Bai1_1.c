/* Bài 1.1 - Tuần 31
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

# include <stdio.h>
int main() {
    printf("**********   Pham Ngoc Tuyen - 20235455   **********\n");
    
    int x_tuyenpn, y_tuyenpn, z_tuyenpn;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x_tuyenpn, &y_tuyenpn, &z_tuyenpn);
    printf("The three integers are:\n");
    ptr = &x_tuyenpn; // Tro den dia chi cua x
    printf("x = %d\n", *ptr);

    /********************   Phạm Ngọc Tuyên - 20235455 **************************/

    ptr = &y_tuyenpn; // Tro den dia chi cua y
    printf("y = %d\n", *ptr);
    ptr = &z_tuyenpn; // Tro den dia chi cua z
    printf("z = %d\n", *ptr);
    return 0;
}

/* Bài 1.1 - Tuần 9
Phạm Ngọc Tuyên - 20235455 - 750829 - 2024.2 */

