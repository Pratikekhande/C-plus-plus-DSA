#include<iostream>
#include<queue>
using namespace std;

class Node {

public:
  int data;
  Node* left;
  Node* right;

   Node(int d){ this->data = d;
    this->left = NULL;
    this->right = NULL;

  }
};

void levelOrderTraversal(Node* &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
       
        q.pop();
        if(temp = NULL){
            cout<<endl; // purana level complete trevaerse ho chuka hai
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<< temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void inorder(Node* root){

    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data <<" ";
    inorder(root->right);


}
Node* InsertBST(Node* &root, int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root->data){
        // right me insert
        root->right = InsertBST(root->right,d);
    }
    else{
        // left mein insert
        root->left = InsertBST(root->left,d);
    }
    return root;
}

void inputValue(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = InsertBST(root, data);
        cin >> data;

    }
}

int main(){

    Node* root = NULL;

    cout<<" Enter data into BST"<< endl;
    inputValue(root);

    cout<<" print BST"<<endl;
    levelOrderTraversal(root);
    cout<<" after BST"<<" ";

    inorder(root);


    return 0;
}