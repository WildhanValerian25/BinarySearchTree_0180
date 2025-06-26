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

