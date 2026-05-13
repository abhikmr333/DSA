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

void insert() {}

void delete() {}

bool isExist() {}

void traversal() {}

void delete() {}

int main() {
  printf("%s", "hello");
  return 0;
}