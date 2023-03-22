#include<iostream>
#include<map>

using namespace std;

class Node{

    public:
    int data ;
    Node* next;

    // constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;

    }

    // destructor

    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;

            this->next = NULL;

        }
        cout<<" memory is free for node with data"<< value<<endl;

    }

};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head =temp;

}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;


}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;

    }
    cout<<endl;

}

void insertAtPosition(Node* &tail,Node* &head, int pos, int d){

    // insert at start pos
    if( pos == 1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    // create a new node
    Node* nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;


}

 void deleteNode(Node* &head, int pos){

        // delete start or first node
        if(pos == 1){
            Node* temp = head;
            head = head->next;

            // memory free
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

            prev->next = curr->next;
            curr->next = NULL;
            delete curr;


        }
 }

 bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node* , bool> visited;
    Node* temp = head;

    while( temp != NULL){
        if(visited[temp] == true){
            cout<<" loop present on node"<< temp->data << endl;
            return true;

        }

        visited[temp] == true;
        temp = temp->next;

    }
    return false;

    
    
 }

 Node* floydDetectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while( slow!= NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;


        if(fast == slow){
            cout<<"loop present at "<< slow->data<< endl;
            return slow;
                    }
    }
    return NULL;

 }

 Node* startingNode(Node* head){


    if( head == NULL){
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;

    }
    return slow;


    }
 }

void removeLoop(Node* head){

    if( head == NULL){
        return  ;

    }

    Node* startOfLoop = startingNode(head);
    Node* temp = startOfLoop;
    while( temp->next != startOfLoop){
        temp = temp->next;

    }

    temp->next = NULL;

return ;

 }
int main(){
    // created new node
    Node* node1 = new Node(10);
    // cout<< node1->data<< endl;
    // cout<< node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    // print(head);

    // insertAtHead(head,12);
     insertAtTail(tail,12);

    // print(head);

    insertAtTail(tail, 15);

    // print(head);

    insertAtPosition(tail,head, 4, 22);

    tail->next = head->next;
    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    Node* start = startingNode(head);
    cout << " loop starts at node " << start->data <<endl;


    removeLoop(head);
    print(head);








    // print(head);

    // cout<<"head "<< head->data << endl;
    // cout<<"tail "<< tail->data << endl;

    // deleteNode(head,4);

    // print(head);  


    






    return 0;
}
