// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <stack>
#define MAX_55 0x7fffffff
using namespace std;
int global_size_55;
std::vector<int> global_map_55;

void input() {
    std::cin >> global_size_55;
    global_map_55.resize(global_size_55);
    for (int i = 0; i < global_size_55; ++i) std::cin >> global_map_55[i];
}

int solution() {
    global_map_55.push_back(0);
    std::stack<int> open_stack_55;
    int best_55 = -MAX_55;
    // open_stack_90.push(0);
    for (int i = 0; i < global_map_55.size(); ++i) {
        while (!open_stack_55.empty() && global_map_55[i] < global_map_55[open_stack_55.top()]) {
            int height_55 = global_map_55[open_stack_55.top()];
            open_stack_55.pop();
            int width_55 = open_stack_55.empty() ? i : (i - open_stack_55.top() - 1);
            best_55 = std::max(best_55, height_55 * width_55);
        }
        open_stack_55.push(i);
    }
    return best_55;
}

void output() {
    std::cout << solution();
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    input();
    output();
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829