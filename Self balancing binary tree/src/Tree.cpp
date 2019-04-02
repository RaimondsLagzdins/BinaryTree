#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
{
    head = nullptr;
}

Tree::~Tree()
{
    //dtor
}

void Tree::add(int data){
    node *newNode = new node;
    node *temp = nullptr;

    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if(head != nullptr){
        temp = head;
        do{
            if(data < temp->data){
                if(temp->left != nullptr){
                    temp = temp->left;
                }else{
                    temp->left = newNode;
                    break;
                }
            }else{
                if(temp->right != nullptr){
                    temp = temp->right;
                }else{
                    temp->right = newNode;
                    break;
                }
            }
        }while(true);
    }else{
        head = newNode;
    }
}

void Tree::printTree(){
    cout << "Print PreOrder" << endl;
    printPreOrder(head);
    cout << endl;
    cout << "Print InOrder" << endl;
    printInOrder(head);
    cout << endl;
    cout << "Print PostOrder" << endl;
    printPostOrder(head);
}
void Tree::printPreOrder(node * temp){
    cout << temp->data << " ";

    if(temp->left != nullptr){
        printPreOrder(temp->left);
    }
    if(temp->right != nullptr){
        printPreOrder(temp->right);
    }
}
void Tree::printInOrder(node * temp){
    if (temp == nullptr)
        return;

    printInOrder(temp->left);

    cout << temp->data << " ";

    printInOrder(temp->right);
}
void Tree::printPostOrder(struct node* temp){
    if (temp == nullptr)
        return;
    printPostOrder(temp->left);
    printPostOrder(temp->right);
    cout << temp->data << " ";
}

