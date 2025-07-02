#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val) {
    Node *newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    string val;

    while (true) {
        cin >> val;
        if (val == "end")
            break;
        insert_tail(head, tail, val);
    }

    int q;
    cin >> q;

    Node *current = head;
    while (q--) {
        string s;
        cin >> s;

        if (s == "visit") {
            string v;
            cin >> v;
            Node *tmp = head;
            bool found = false;

            while (tmp != NULL) {
                if (tmp->val == v) {
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }

            if (found) {
                cout << tmp->val << endl;
                current = tmp;
            } else {
                cout << "Not Available" << endl;
            }

        } else if (s == "prev") {
            if (current == NULL || current->prev == NULL) {
                cout << "Not Available" << endl;
            } else {
                current = current->prev;
                cout << current->val << endl;
            }

        } else if (s == "next") {
            if (current == NULL || current->next == NULL) {
                cout << "Not Available" << endl;
            } else {
                current = current->next;
                cout << current->val << endl;
            }
        }
    }

    return 0;
}
