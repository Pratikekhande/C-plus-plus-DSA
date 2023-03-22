#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;

    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;

        }
        cout<< " memory free for node with data" << val << endl;

        
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;

}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;

    }
    return len;

}

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        
    }
    else{
     Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
   

}

void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* &tail, Node* &head, int pos ,int d){

    // insert at start
      if( pos == 1){
        insertAtHead(head,tail,d);
        return;

    }
    Node* temp = head;
    int cnt = 1;

    // to reach pos-1 node
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;

    }

    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // creating a node for d

    Node* nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

}

void deleteNode(Node* &head, int pos){

        // delete start or first node
        if(pos == 1){
            Node* temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;

            delete temp;

        }
        else{
            // deleting any middle or last node
            Node* curr = head;
            Node* prev = NULL;

            int cnt = 1;
            while(cnt < pos){
                prev = curr;
                curr = curr->next;
                cnt++;

            }

          curr->prev = NULL;
          prev->next = curr->next;
          curr->next = NULL;
          delete curr;


        }
 }


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;


    print(head);
    cout<< getLength(head)<<endl;
    // print(head);


    // insertAtHead(head,tail,9);
    // print(head);
    // insertAtHead(head,tail,8);
    // print(head);
    // insertAtHead(head,tail,7);
    // print(head);
    // insertAtTail(head,tail,11);
    // print(head);
    // insertAtPosition(tail,head,2,12);
    // print(head);

    insertAtHead(head,tail, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(head,tail, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(head,tail, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(head,8);
      print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;





    return 0;

}