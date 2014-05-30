#include <iostream>

using namespace std;

int main()
{
    struct node {
        int data;
        node* next;
    };
    node* n;
    node* t;
    node* h;
    node* tmp;

    n = new node;
    n->data = 1;
    t = new node;
    h = new node;

    n->next = t;
    t->next = h;
    t->data = 4;
    h->data = 10;
    h->next = n;
    
    for (int i=0; i < 10; i++) {
        cout << n->data << endl;
        n = n->next;    
    }
    
}
