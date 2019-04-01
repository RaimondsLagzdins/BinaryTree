#ifndef TREE_H
#define TREE_H

struct node{
    int data;
    node *right;
    node *left;

};
class Tree
{
    public:
        Tree();
        virtual ~Tree();

        void add(int);
        void printTree();
        void printPreOrder(node*);
        void printInOrder(node*);
        void printPostOrder(node*);
    protected:

    private:
        node *head;
};

#endif // TREE_H
