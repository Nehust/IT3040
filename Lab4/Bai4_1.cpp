// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream> 
using namespace std;

struct Node_50 {
    int data_50;
    Node_50* next_50;

    Node_50(int data_50) {
        this->data_50 = data_50;
        next_50 = NULL;
    }
};

// Thêm phần từ vào đầu danh sách 
Node_50* prepend_50(Node_50* head_50, int data_50) {
    Node_50* tempNode_50 = new Node_50(data_50);
    tempNode_50->next_50 = head_50;
    head_50 = tempNode_50;
    return head_50;
}

// In danh sách liên kết đơn 
void print_50(Node_50* head_50) {
    Node_50* count_50 = head_50;
    while (count_50 != NULL)
    {
        cout << count_50->data_50 << " ";
        count_50 = count_50->next_50;
    }
    cout << endl;
}

// Đảo ngược danh sách 
Node_50* reverse_50(Node_50* head_50) {
    Node_50* currentNode_50 = head_50;
    Node_50* preNode_50 = NULL;
    Node_50* nextNode_50 = NULL;
    while (currentNode_50 != NULL)
    {
        nextNode_50 = currentNode_50->next_50;
        currentNode_50->next_50 = preNode_50;
        preNode_50 = currentNode_50;
        currentNode_50 = nextNode_50;
    }
    head_50 = preNode_50;
    return head_50;
}

int main() {
    int n_50, u_50;
    cin >> n_50;
    Node_50* head_50 = NULL;
    for (int i_50 = 0; i_50 < n_50; ++i_50) {
        cin >> u_50;
        head_50 = prepend_50(head_50, u_50);
    }
    cout << "Original list: ";
    print_50(head_50);

    head_50 = reverse_50(head_50);

    cout << "Reversed list: ";
    print_50(head_50);

    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829
