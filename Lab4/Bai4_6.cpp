#include <iostream> 
#include <vector>
#include <list>
#include <queue>
using namespace std;

void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1);
    while (!Q.empty())
    {
        int current = Q.front();
        Q.pop();
        if (visited[current]) {
            continue;
        }
        visited[current] = true;
        for (list<int>::iterator it = adj[current].begin(); it != adj[current].end(); ++it)
            Q.push(*it);
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
    bfs(adj);
    return 0;
}