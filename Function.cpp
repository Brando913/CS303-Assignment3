//Question 2
int linear_search_last(std::vector<int>& items, int target, size_t pos) {
    if (pos == -1)
        return -1;
    if (items[pos] == target)
        return pos;
    else
        return linear_search_last(items, target, pos - 1);
}

//Queation 3
struct Node {
    int data;
    Node* next;
};

void sortedInsert(Node*& sorted, Node* newNode) {
    if (sorted == nullptr || sorted->data >= newNode->data) {
        newNode->next = sorted;
        sorted = newNode;
    } else {
        Node* current = sorted;
        while (current->next != nullptr && current->next->data < newNode->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void insertion_sort(Node*& head) {
    Node* sorted = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        sortedInsert(sorted, current);
        current = next;
    }
    head = sorted;
}
