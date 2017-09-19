#include <iostream>

using namespace std;

struct node {
  int data;
  // pointers to left and right child nodes
  node *left;
  node *right;

};

class BinaryTree {
  private:
    node *root;
    void insert(int data, node *leaf);
    void *search(int data, node *leaf);
    void destroy_tree(node *leaf);

  public: 
    BinaryTree();
    ~BinaryTree();

    void insert(int data);
    node *search(int data);
    void destroy_tree();
};

BinaryTree::BinaryTree() {
  root=NULL;
}

BinaryTree::~BinaryTree() {
  destroy_tree();
}

void BinaryTree::destroy_tree(node *leaf) {
  if (leaf!=NULL) {
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

void BinaryTree::insert(int data, node *leaf) {
  // TODO: continue on private insert binary tree node method
}