//
// Created by winxo on 2016-12-1.
//

#include <malloc.h>
#include "binary_tree.h"

//前序遍历建立二叉树
BTree createTree() {
    BTree t;
    char c;
    printf("input char node(# means empty node) ?");
    fflush(stdin);
    scanf("%c",&c);
    if (c == '#')//#作为null输入
    {
        t = NULL;
    } else {
        t = malloc(sizeof(bNode));//动态分配
        t->data = c;
        printf(" %c 's left child ?\n", c);
        t->lchild = createTree();
        printf(" %c 's right child ?\n", c);
        t->rchild = createTree();
    }
    return t;
}

/*递归函数实现 前，中，后序遍历*/
void preOrder(BTree T)//前序遍历二叉树
{
    if (T != NULL) {
        putchar(T->data);
        preOrder(T->lchild);
        preOrder(T->rchild);
    }
}

void inOrder(BTree T)//中序遍历二叉树
{
    if (T != NULL) {
        inOrder(T->lchild);
        putchar(T->data);
        inOrder(T->rchild);
    }
}

void postOrder(BTree T)//后序遍历二叉树
{
    if (T != NULL) {
        postOrder(T->lchild);
        postOrder(T->rchild);
        putchar(T->data);
    }
}

void layerOrder(BTree T) {
    BTree Queue[100], p;
    int front, rear;
    if (T != NULL) {
        Queue[0] = T;
        front = -1;
        rear = 0;
        while (front < rear) {
            p = Queue[++front];
            putchar(p->data);
            if (p->lchild != NULL)
                Queue[++rear] = p->lchild;
            if (p->rchild != NULL)
                Queue[++rear] = p->rchild;
        }
    }
    free(p);
}
