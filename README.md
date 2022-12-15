# 0x1D. C - Binary trees

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree

## Resources

Read or watch:

- [Binary tree (note the first line: Not to be confused with B-tree.)](https://alx-intranet.hbtn.io/rltoken/1F2x42-8vUbOmU4L1C1KMg)
- [Data Structure and Algorithms - Tree](https://alx-intranet.hbtn.io/rltoken/QmcTMCkQyrgMjrqoWxYdhw)
- [Tree Traversal](https://alx-intranet.hbtn.io/rltoken/nMxoYQdZR_guroan8JeqBQ)
- [Binary Search Tree](https://alx-intranet.hbtn.io/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
- [Data structures: Binary Tree](https://alx-intranet.hbtn.io/rltoken/BeyJ2gjlE7_djwRiDyeHig)

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called binary_trees.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks

### 0. New node

Write a function that creates a binary tree node

- Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
- Where parent is a pointer to the parent node of the node to create
- And value is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or NULL on failure
- compiled using: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node

### 1. Insert left

Write a function that inserts a node as the left-child of another node

- Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
- Where parent is a pointer to the node to insert the left-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
- compiled using: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left

### 2. Insert right

Write a function that inserts a node as the right-child of another node

- Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
- Where parent is a pointer to the node to insert the right-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
- compiled using: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right

### 3. Delete

Write a function that deletes an entire binary tree

- Prototype: void binary_tree_delete(binary_tree_t \*tree);
- Where tree is a pointer to the root node of the tree to delete
- If tree is NULL, do nothing
- compiled using: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del

### 4. Is leaf

Write a function that checks if a node is a leaf

- Prototype: int binary_tree_is_leaf(const binary_tree_t \*node);
- Where node is a pointer to the node to check
- Your function must return 1 if node is a leaf, otherwise 0
- If node is NULL, return 0
- compiled using: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf

### 5. Is root

Write a function that checks if a given node is a root

- **Prototype**: `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must `return` 1 if node is a root, otherwise 0
- If `node` is `NULL`, return 0
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root`

### 6. Pre-order traversal

Write a function that goes through a binary tree using pre-order traversal

- **Prototype**: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre`

### 7. In-order traversal

Write a function that goes through a binary tree using in-order traversal

- **Prototype**: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing
- **Complied Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in`

### 8. Post-order traversal

Write a function that goes through a binary tree using post-order traversal

- **Prototype**: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing
- **Complied Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post`

### 9. Height

Write a function that measures the height of a binary tree

- **Prototype**: `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is `NULL`, your function must `return` 0
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height`

### 10. Depth

Write a function that measures the depth of a node in a binary tree

- **Prototype**: `size_t binary_tree_depth(const binary_tree_t *tree);`
- Where `tree` is a pointer to the node to measure the depth
- If `tree` is `NULL`, your function must `return` (`0`)
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth`

### 11. Size

Write a function that measures the size of a binary tree

- **Prototype**: `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size
- If `tree` is `NULL`, the function must `return` (`0`)
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size`

### 12. Leaves

Write a function that counts the leaves in a binary tree

- **Prototype**: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of leaves
- If `tree` is `NULL`, the function must `return 0`
- A `NULL` pointer is not a leaf
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves`

### 13. Nodes

Write a function that counts the nodes with at least 1 child in a binary tree

- **Prototype**: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of nodes
- If `tree` is `NULL`, the function must `return 0`
- A `NULL` pointer is not a node
- **Complied Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes`

### 14. Balance factor

Write a function that measures the balance factor of a binary tree

- **Prototype**: `int binary_tree_balance(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the balance factor
- If `tree` is `NULL`, _return 0_
- **Compiled Uing**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance`

### 15. Is full

Write a function that checks if a binary tree is full

- **Prototype**: `int binary_tree_is_full(const binary_tree_t *tree);`
- Where **tree** is a pointer to the root node of the tree to check
- If _tree_ is **NULL**, your function must _return 0_
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full`

### 16. Is perfect

Write a function that checks if a binary tree is perfect

- **Prototype**: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Where **tree** is a pointer to the root node of the tree to check
- If **tree** is **NULL**, your function must **return 0**
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect`

### 17. Sibling

Write a function that finds the sibling of a node

- **Prototype**: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Where **node** is a pointer to the node to find the sibling
- Your function must return a pointer to the sibling node
- If _node_ is _NULL_ or the _parent_ is _NULL_, **return NULL**
- If _node_ has no sibling, **return NULL**
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling`

### 18. Uncle

Write a function that finds the uncle of a node

- **Prototype**: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Where **node** is a pointer to the node to find the uncle
- Your function must return a pointer to the uncle node
- If _node_ is _NULL_, **return NULL**
- If _node_ has _no uncle_, **return NULL**
- **Compiled Using**: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle`
