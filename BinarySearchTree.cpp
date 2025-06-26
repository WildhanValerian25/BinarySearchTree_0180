#include<iostream>
using namespace std;

class node{
public:
    int info;
    node *leftchild;
    node *rightchild;

    //constructor for the node class
    node(){
        leftchild = nullptr; // initialize left child to null
        rightchild = nullptr; // initialize right child to null
    }
};

class BinaryTree
{

public:
    node *ROOT;
    BinaryTree(){
        ROOT = nullptr; //initializing ROOT to null
    }
    void insert(){
        int x;
        cout << "Masukkan nilai ";
        cin >> x;
        
        //step 1: Allocate memory for the new node
        node *newnode = new node();

        //step 2 : assing the value to the data field of new node 
        newnode->info = x;

        //step 3: make the left and right child of the new node point to null 
        newnode->leftchild = nullptr;
        newnode->rightchild = nullptr;

        //step 4: locate the new node which will be the parent of the node to bw inserted
        node *parent = nullptr;
        node *currentnode = nullptr;
        search(x, parent, currentnode);

        //step 5: if parent is null (TREE is empty)
        if(parent == nullptr){

            //5a : Mark the new node as ROOT
            ROOT = newnode;

            //5b : Exit 
            return;
        }

        //step 6: if the value in data field of new node is less than that of parent 
        if (x < parent->info){

            //6a :  make the left child of parent point to the new node 
            parent->leftchild = newnode;

            //6b : Exit 
            return ;
        }

        //step 7: if the value in data field of new node is greater than that of the parent 
        else if (x > parent->info){
            //7a : make the right child of parent point to the new node 
            parent->rightchild = newnode;

            //7b : exit 
            return ;
        } 
    }
void search(int element, node *&parent, node *&currentnode)
    {
        // This Function searches the currentNode of the specified Node as well as the current Node of its parent
        currentnode = ROOT;
        parent = nullptr;
        while ((currentnode != nullptr) && (currentnode->info != element))
        {
            parent = currentnode;
            if (element < currentnode->info)
                currentnode = currentnode->leftchild;
            else
                currentnode = currentnode->rightchild;
        }
    }

    
    void inorder(node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;

        inorder(ptr->leftchild);
        cout << ptr->info << " ";
        inorder(ptr->rightchild);
        
    }    

        void preorder(node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;

        cout << ptr->info << " ";
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
        
    }    

        void postorder(node *ptr)
    {
        if (isEmpty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;

        postorder(ptr->leftchild);
        postorder(ptr->rightchild);
        cout << ptr->info << " ";
    }    

   