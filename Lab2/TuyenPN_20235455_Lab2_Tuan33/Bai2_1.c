// Bài 2.1 - Phạm Ngọc Tuyên - 20235455
#include <stdio.h>
#include <math.h>

float get_hypotenuse_55(float x_55, float y_55) {
    /**********************
    Bài 2.1 - Phạm Ngọc Tuyên - 20235455 
    ***********************/
   return sqrt(x_55 * x_55 + y_55 * y_55); // tính độ dài cạnh huyền
}

int main() {
    printf("Bai 2.1 - Pham Ngoc Tuyen - 20235455\n");
    float x_55, y_55;
    scanf("%f%f", &x_55, &y_55);
    
    float z_55 = get_hypotenuse_55(x_55, y_55);
    printf("z = %.2f\n", z_55);
    
    return 0;
}
// Bài 2.1 - Phạm Ngọc Tuyên - 20235455
