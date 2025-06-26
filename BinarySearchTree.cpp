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
