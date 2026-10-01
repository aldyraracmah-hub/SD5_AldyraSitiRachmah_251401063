#include <iostream>

using namespace std;

struct node {

    int value;

    node* next;

};

node* head = NULL;

node* tail = NULL;

// 1. insert First
void insertFirst (int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        newnode -> next = head;
        head = newnode;
    }
}

// 2. delete First
void deleteFirst (){
    if (head == NULL){
        cout << "Stack Kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display (){
    node *temp = head;
    cout << "Isi Stack : ";
    while (temp != NULL){
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL \n";
}


int main (){

    system ("cls");

    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);

    display();

    deleteFirst();

    display();

    insertFirst(50);

    display();

    return 0;
}