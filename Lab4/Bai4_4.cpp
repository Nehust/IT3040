// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(const vector<int>& a_55) {
    for (int v_55 : a_55) cout << v_55 << ' ';
    cout << endl;
}

// Xóa các phần tử chẵn trong vector 
void delete_even(vector<int>& a_55) {
    auto new_end_55 = remove_if(a_55.begin(), a_55.end(), [](int x_55) {
        return x_55 % 2 == 0;
        });
    a_55.erase(new_end_55, a_55.end());
}

// Sắp xếp giảm dần 
void sort_decrease(vector<int>& a_55) {
    sort(a_55.begin(), a_55.end(), [](int x_55, int y_55) {
        return x_55 > y_55;
        });
}

// Trộn lại thành 1 vector
vector<int> merge_vectors(const vector<int>& a_55, const vector<int>& b_55) {
    vector<int> temp_55;
    merge(a_55.begin(), a_55.end(), b_55.begin(), b_55.end(), back_inserter(temp_55));
    sort_decrease(temp_55);
    return temp_55;
}

int main() {
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    int m_55, n_55, u_55;
    vector<int> a_55, b_55;

    cin >> m_55 >> n_55;
    for (int i_55 = 0; i_55 < m_55; i_55++) {
        cin >> u_55;
        a_55.push_back(u_55);
    }
    for (int i_55 = 0; i_55 < n_55; i_55++) {
        cin >> u_55;
        b_55.push_back(u_55);
    }

    delete_even(a_55);
    cout << "Odd elements of a: ";
    print_vector(a_55);

    delete_even(b_55);
    cout << "Odd elements of b: ";
    print_vector(b_55);

    sort_decrease(a_55);
    cout << "Decreasingly sorted a: ";
    print_vector(a_55);

    sort_decrease(b_55);
    cout << "Decreasingly sorted b: ";
    print_vector(b_55);

    vector<int> c = merge_vectors(a_55, b_55);
    cout << "Decreasingly sorted c: ";
    print_vector(c);

    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829