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

        