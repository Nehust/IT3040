// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream> 
#include <vector>
#include <list>
#include <queue>
using namespace std;

void bfs(vector<list<int>> adj_55) {
    queue<int> Q_55;
    vector<bool> visited_55(adj_55.size());
    Q_55.push(1);
    while (!Q_55.empty())
    {
        int current_55 = Q_55.front();
        Q_55.pop();
        if (visited_55[current_55]) {
            continue;
        }
        visited_55[current_55] = true;
        for (list<int>::iterator it_55 = adj_55[current_55].begin();
            it_55 != adj_55[current_55].end(); ++it_55)
            Q_55.push(*it_55);
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
    bfs(adj_55);
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829