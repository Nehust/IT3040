#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

void dfs(vector< list<int> > adj) {
    stack<int> S;
    vector<bool> visited(adj.size());
    S.push(1); // Bắt đầu từ đỉnh số 1
    while (!S.empty())
    {
        int current = S.top();
        if (visited[current]) {
            S.pop();
            continue;
        }
        visited[current] = true;
        for (list<int>::reverse_iterator it = adj[current].rbegin(); it != adj[current].rend(); ++it)
            S.push(*it);
        cout << current << endl;
    }

}

int main() {
    int n = 7;
    vector< list<int> > adj;
    adj.resize(n + 1);
    adj[1].push_back(2);
    adj[2].push_back(4);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[5].push_back(2);
    adj[2].push_back(7);
    adj[6].push_back(7);
    dfs(adj);
    return 0;
}