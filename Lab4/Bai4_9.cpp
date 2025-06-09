// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

vector<int> dijkstra(const vector< vector< pair<int, int> > >& adj_55) {
    auto cmp_55 = [](pair<int, int> a_55, pair<int, int> b_55) {
        return a_55.second > b_55.second;
        };

    vector<int> prev_55(adj_55.size());
    priority_queue < pair<int, int>, vector<pair<int, int>>, decltype(cmp_55)> Q_55(cmp_55);
    vector<int> distance_55(adj_55.size(), INT_MAX);
    distance_55[0] = 0;
    for (size_t i_55 = 0; i_55 < adj_55.size(); i_55++)
    {
        Q_55.push({ i_55, distance_55[i_55] });
    }

    while (!Q_55.empty())
    {
        int current_55 = Q_55.top().first;
        if (Q_55.top().second > distance_55[current_55]) {
            Q_55.pop();
            continue;
        }
        Q_55.pop();
        for (auto x_55 : adj_55[current_55]) {
            int alt_55 = distance_55[current_55] + x_55.second;
            if (alt_55 < distance_55[x_55.first]) {
                distance_55[x_55.first] = alt_55;
                prev_55[x_55.first] = current_55;
                Q_55.push({ x_55.first, distance_55[x_55.first] });
            }
        }
    }
    return distance_55;
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    int n_55 = 9;
    vector< vector< pair<int, int> > > adj_55(n_55);
    auto add_edge = [&adj_55](int u_55, int v_55, int w_55) {
        adj_55[u_55].push_back({ v_55, w_55 });
        adj_55[v_55].push_back({ u_55, w_55 });
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

    vector<int> distance_55 = dijkstra(adj_55);
    for (int i_55 = 0; i_55 < distance_55.size(); ++i_55) {
        cout << "distance " << 0 << "->" << i_55 << " = " << distance_55[i_55] << endl;
    }
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829

