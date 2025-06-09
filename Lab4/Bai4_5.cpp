// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

void dfs(vector<list<int>> adj_55) {
    stack<int> S_55;
    vector<bool> visited_55(adj_55.size());
    S_55.push(1); // Bắt đầu từ đỉnh số 1
    while (!S_55.empty())
    {
        int current_55 = S_55.top();
        if (visited_55[current_55]) {
            S_55.pop();
            continue;
        }
        visited_55[current_55] = true;
        for (list<int>::reverse_iterator it_55 = adj_55[current_55].rbegin();
            it_55 != adj_55[current_55].rend(); ++it_55)
            S_55.push(*it_55);
        cout << current_55 << endl;
    }
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    int n_55 = 7;
    vector<list<int>> adj_55;
    adj_55.resize(n_55 + 1);
    adj_55[1].push_back(2);
    adj_55[2].push_back(4);
    adj_55[1].push_back(3);
    adj_55[3].push_back(4);
    adj_55[3].push_back(5);
    adj_55[5].push_back(2);
    adj_55[2].push_back(7);
    adj_55[6].push_back(7);
    dfs(adj_55);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829