// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int global_soldiers_55, global_castles_55;
int total_monsters_55;

typedef struct Battle_55 {
    int monsters_55, monsters_per_soldier_55;
    Battle_55() : monsters_55(0), monsters_per_soldier_55(0) {}
    Battle_55(int m_55, int mps_55) : monsters_55(m_55), monsters_per_soldier_55(mps_55) {}
    bool operator<(const Battle_55& other_55) const {
        if (this->monsters_per_soldier_55 == other_55.monsters_per_soldier_55)
            return this->monsters_55 < other_55.monsters_55;
        return this->monsters_per_soldier_55 < other_55.monsters_per_soldier_55;
    }
} Battle_55;

std::vector<Battle_55> battles_55;

void input() {
    std::cin >> global_castles_55 >> global_soldiers_55;
    battles_55.resize(global_castles_55);
    total_monsters_55 = 0;
    for (int i = 0; i < global_castles_55; ++i) {
        std::cin >> battles_55[i].monsters_55 >> battles_55[i].monsters_per_soldier_55;
        total_monsters_55 += battles_55[i].monsters_55;
    }
}

int solution() {
    std::priority_queue<Battle_55> pq_55(battles_55.begin(), battles_55.end());
    int result_55 = 0;
    int current_global_soldiers_55 = global_soldiers_55; // Use a local copy to modify
    while (!pq_55.empty()) {
        Battle_55 top_55 = pq_55.top();
        pq_55.pop();
        int max_soldiers_loc_55 = std::min(current_global_soldiers_55, top_55.monsters_55 / top_55.monsters_per_soldier_55);
        int killed_monsters_55 = std::max(0, max_soldiers_loc_55 * top_55.monsters_per_soldier_55);
        result_55 += killed_monsters_55;
        current_global_soldiers_55 -= max_soldiers_loc_55;
        if (top_55.monsters_55 > killed_monsters_55) pq_55.emplace(top_55.monsters_55 - killed_monsters_55, top_55.monsters_55 - killed_monsters_55); // Original emplace logic maintained
        if (current_global_soldiers_55 <= 0) break;
    }
    return total_monsters_55 - result_55;
}

void output() {
    std::cout << solution();
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    std::cout << "-----------Pham Ngoc Tuyen - 20235455-------" << std::endl;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    input();
    output();
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829