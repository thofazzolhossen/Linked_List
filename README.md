# **Linked List in C++**

## 📌 **Introduction**
A **linked list** is a linear data structure where elements (nodes) are stored in memory **non-contiguously**. Each node contains:
1. **Data** (value stored in the node)
2. **Pointer** to the next node in the sequence

Unlike arrays, linked lists allow **dynamic memory allocation** and **efficient insertions/deletions**.

---

## 🔹 **Types of Linked Lists**
1. **Singly Linked List (SLL)** - Each node points to the next node.
2. **Doubly Linked List (DLL)** - Each node has pointers to both **previous** and **next** nodes.
3. **Circular Linked List (CLL)** - The last node points to the first node, forming a circular structure.

---

## 🔹 **Basic Operations in Singly Linked List**
### 1️⃣ **Create a Node**
```cpp
struct Node {
    int data;
    Node* next;
};
```

### 2️⃣ **Insert at the Beginning**
```cpp
void insertAtFront(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
```

### 3️⃣ **Insert at the End**
```cpp
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = newNode;
}
```

### 4️⃣ **Delete a Node**
```cpp
void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key)
        temp = temp->next;
    if (temp->next == nullptr) return;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
```

### 5️⃣ **Search for an Element**
```cpp
bool search(Node* head, int key) {
    while (head != nullptr) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}
```

### 6️⃣ **Print the Linked List**
```cpp
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
```

---

## 🔹 **Advanced Operations**
### 1️⃣ **Reverse a Linked List**
```cpp
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
```

### 2️⃣ **Find the Middle Element**
```cpp
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
```

### 3️⃣ **Detect a Loop in the Linked List**
```cpp
bool detectLoop(Node* head) {
    Node* slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

### 4️⃣ **Merge Two Sorted Linked Lists**
```cpp
Node* mergeSortedLists(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    if (l1->data < l2->data) {
        l1->next = mergeSortedLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSortedLists(l1, l2->next);
        return l2;
    }
}
```

---

## 🚀 **How to Run the Code**
1. Clone the repository:
   ```sh
   git clone https://github.com/thofazzolhossen/Linked_List.git
   ```
2. Navigate to the project folder:
   ```sh
   cd Linked_List
   ```
3. Compile the code using g++:
   ```sh
   g++ -o linked_list linked_list.cpp
   ```
4. Run the executable:
   ```sh
   ./linked_list
   ```

---

## 📌 **Contributing**
Feel free to contribute by adding:
- New operations
- Optimized algorithms
- Error handling improvements

### **🛠 How to Contribute**
1. **Fork** the repository
2. **Create a new branch** (`git checkout -b feature-name`)
3. **Commit changes** (`git commit -m 'Add new feature'`)
4. **Push to GitHub** (`git push origin feature-name`)
5. **Create a Pull Request** 🚀

---

## 📜 **License**
This project is open-source under the **MIT License**.


