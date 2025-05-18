#include <iostream> 
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Thêm phần từ vào đầu danh sách 
Node* prepend(Node* head, int data) {
    Node* tempNode = new Node(data);
    tempNode->next = head;
    head = tempNode;
    return head;
}

// In danh sách liên kết đơn 
void print(Node* head) {
    Node* count = head;
    while (count != NULL)
    {
        cout << count->data << " ";
        count = count->next;
    }
    cout << endl;
}

// Đảo ngược danh sách 
Node* reverse(Node* head) {
    Node* currentNode = head;
    Node* preNode = NULL;
    Node* nextNode = NULL;
    while (currentNode != NULL)
    {
        nextNode = currentNode->next;
        currentNode->next = preNode;
        preNode = currentNode;
        currentNode = nextNode;
    }
    head = preNode;
    return head;
}

int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i) {
        cin >> u;
        head = prepend(head, u);
    }

    cout << "Original list: ";
    print(head);

    head = reverse(head);

    cout << "Reversed list: ";
    print(head);

    return 0;
}