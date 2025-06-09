// Bai 5.1 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <stdio.h>
int x_55[100], mark_55[100], n_55;
void print_55() {
    for (int i_55 = 1; i_55 <= n_55; ++i_55) printf("%d ", x_55[i_55]);
    printf("\n");
}
void process_55(int i_55) {
    if (i_55 > n_55) {
        print_55();
        return;
    }
    for (int j_55 = 1; j_55 <= n_55; ++j_55)
        if (!mark_55[j_55]) {
            mark_55[j_55] = 1;
            x_55[i_55] = j_55;
            process_55(i_55 + 1);
            mark_55[j_55] = 0;
        }
}
int main() {
    printf("Pham Ngoc Tuyen - 20235455\n");
    n_55 = 4;
    process_55(1);
    return 0;
}
