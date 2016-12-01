//
// Created by winxo on 2016-12-1.
//

#ifndef BINARY_TREE_BINARY_TREE_H
#define BINARY_TREE_BINARY_TREE_H
#include <stdio.h>

typedef struct node{
    char data;
    struct node *lchild,*rchild;
}bNode,*BTree;
BTree createTree();
void preOrder(BTree T);
void inOrder(BTree T);
void postOrder(BTree T);
void layerOrder(BTree T);
#endif //BINARY_TREE_BINARY_TREE_H
