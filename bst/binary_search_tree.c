// binary search tree for hash set using dynamic memory
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// struct for bst
// typedef so struct Node s1 can be written as Node s1
typedef struct Node {
  int val;
  /* struct because the compiler haven't finished reading the struct yet you can
   use just Node outside though using typedef  */
  struct Node* left;   // pointer to left node
  struct Node* right;  // pointer to right node
} Node;

// search, traversal, insert and delete

bool isEmpty() {}

void insert(Node** rootptr, int val) {
  bool inserted = false;
  Node* current_node = *rootptr;
  // create new node
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->val = val;
  new_node->left = NULL;
  new_node->right = NULL;

  while (!inserted) {
    // right side
    if (val > current_node->val && current_node->right == NULL) {
      current_node->right = new_node;
      inserted = true;
      continue;
    }
    // left side
    else if (val < current_node->val && current_node->left == NULL) {
      current_node->left = new_node;
      inserted = true;
      continue;
    }
    current_node =
        val > current_node->val ? current_node->right : current_node->left;
  }
}

void delete() {}

bool exists() {}

void traversal() {}

void delete() {}

void cleanup() {}

int main() {
  // initializing root pointer
  int a[6] = {12, 4, 54, 22, 3, 1};
  Node* root = (Node*)malloc(sizeof(Node));
  root->val = 13;
  root->right = NULL;
  root->left = NULL;

  insert(&root, 54);

  return 0;
}