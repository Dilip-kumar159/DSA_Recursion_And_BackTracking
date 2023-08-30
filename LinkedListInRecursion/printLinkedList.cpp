#include<iostream>

using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};


void printLL(Node* head){

    // Base case
    if(head == NULL) return;

    cout<<head->data<<" ";

    // Recurence Relation
    printLL(head->next);
}

void insert(Node* head, int d){

    Node* temp = head;
    Node* newNode = new Node(d);

    if(temp == NULL){
         head = newNode;
        return;
    }

    while(temp->next != NULL){
       temp = temp->next;
    }

    temp->next = newNode;

}

void length(Node* head, int &len){

    if(head == NULL) return;

    len++;

    length(head->next, len);
}

void printKthNode(Node* head, int &k){

    // Base Case
    if(head == NULL) return;

    // Recurence Relation
    printKthNode(head->next, k);

    k = k-1;

    if(k == 0){
        cout<<head->data<<endl;
    }

}

Node* reverse(Node* head){

    // Base Case
    if(head == NULL || head->next == NULL) return head;

    Node* smallHead = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return smallHead;
}
int main(){

    Node* head = new Node(10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);
    insert(head, 60);
    insert(head, 70);
    insert(head, 80);

    printLL(head);

    int len = 0;
    length(head, len);
    cout<<len<<endl;

    int k;
    cin>>k;

    printKthNode(head, k);

    head = reverse(head);

    printLL(head);

    return 0;
}