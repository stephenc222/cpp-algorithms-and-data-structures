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
    node *search(int data, node *leaf);
    void destroy_tree(node *leaf);

  public: 
    BinaryTree();
    ~BinaryTree();

    void insert(int data);
    node *search(int data);
    void destroy_tree();
};

BinaryTree::BinaryTree() {
  root = NULL;
}

BinaryTree::~BinaryTree() {
  destroy_tree();
}

void BinaryTree::destroy_tree(node *leaf) {
  if (leaf != NULL) {
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}

void BinaryTree::insert(int data, node *leaf) {
  // TODO: continue on private insert binary tree node method
  if (data < leaf->data) {
    if (leaf->left != NULL) {
      insert(data, leaf->left);
    } else {
      leaf->left = new node;
      leaf->left->data = data;
      leaf->left->left = NULL;
      leaf->left->right = NULL;
    }
  } else if (data >= leaf->data) {
    if (leaf->right != NULL) {
      insert(data, leaf->right);
    } else {
      leaf->right = new node;
      leaf->right->data = data;
      leaf->right->left = NULL;
      leaf->right->right = NULL;
    }
  }
}

node* BinaryTree::search(int data, node *leaf) {
  if (leaf != NULL) {
    if (data == leaf->data ) {
      return leaf;
    }
    if (data < leaf->data) {
      return search(data, leaf->left);
    } else {
      return search(data, leaf->right);
    }
  } else {
    return NULL;
  }
}