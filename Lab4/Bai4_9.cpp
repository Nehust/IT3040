#include <iostream>
#include <queue>
#include <climits>
using namespace std;

vector<int> dijkstra(const vector< vector< pair<int, int> > >& adj) {
    auto cmp = [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
        };

    vector<int> prev(adj.size());
    priority_queue < pair<int, int>, vector<pair<int, int>>, decltype(cmp)> Q(cmp);
    vector<int> distance(adj.size(), INT_MAX);
    distance[0] = 0;
    for (size_t i = 0; i < adj.size(); i++)
    {
        Q.push({ i, distance[i] });
    }

    while (!Q.empty())
    {
        int current = Q.top().first;
        if (Q.top().second > distance[current]) {
            Q.pop();
            continue;
        }
        Q.pop();
        for (auto x : adj[current]) {
            int alt = distance[current] + x.second;
            if (alt < distance[x.first]) {
                distance[x.first] = alt;
                prev[x.first] = current;
                Q.push({ x.first, distance[x.first] });
            }
        }
    }
    return distance;
}

int main() {
    int n = 9;
    vector< vector< pair<int, int> > > adj(n);
    auto add_edge = [&adj](int u, int v, int w) {
        adj[u].push_back({ v, w });
        adj[v].push_back({ u, w });
        };

    add_edge(0, 1, 4);
    add_edge(0, 7, 8);
    add_edge(1, 7, 11);
    add_edge(1, 2, 8);
    add_edge(2, 3, 7);
    add_edge(2, 8, 2);
    add_edge(3, 4, 9);
    add_edge(3, 5, 14);
    add_edge(4, 5, 10);
    add_edge(5, 6, 2);
    add_edge(6, 7, 1);
    add_edge(6, 8, 6);
    add_edge(7, 8, 7);

    vector<int> distance = dijkstra(adj);
    for (int i = 0; i < distance.size(); ++i) {
        cout << "distance " << 0 << "->" << i << " = " << distance[i] << endl;
    }

    return 0;
}

