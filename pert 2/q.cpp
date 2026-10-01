#include <iostream>

using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

// 1. insert last
void insertLast(int n) {
    node* newnode = new node;
    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = head;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

// 2. delete first
void deleteFirst() {
    if (head == NULL) {
        cout << "Queue Kosong!" << endl;
        return;
    }

    node* temp = head;
    head = head->next;

    if (head == NULL)
        tail = NULL;

    delete temp;
}

void display (){
    node *temp = head;
    cout << "Isi Queue : ";
    while (temp != NULL){
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL \n";
}

int main() {

    system("cls");

    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);

    display();

    deleteFirst();

    display();

    insertLast(50);

    display();

    return 0;
}