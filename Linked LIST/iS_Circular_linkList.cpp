#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;

    }
};


void insertNode(Node* &tail, int element, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;

    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;

        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

bool isCircular(Node* tail){

    if(tail == NULL){
        return true;
    }
    Node* temp = tail->next;
    while( temp!= NULL && temp != tail){
        temp = temp->next;

    }
    if(temp == tail){
        return true;
    }
    
    return false;

}

void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"empty list"<<endl;

    }

    do{
        cout<< tail->data<<" ";
        tail = tail->next;

    }while(tail != temp);

    cout<<endl;

}
int main(){

    Node* tail = NULL;

     insertNode(tail,5,3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
     insertNode(tail, 9, 10);
    print(tail);
     insertNode(tail, 3, 4);
    print(tail);

    if(isCircular(tail)){
        cout<< "linked list is circular" <<endl;

    }
    else{
        cout<< " not circular"<<endl;

    }






    return 0;
}