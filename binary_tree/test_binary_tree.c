//
// Created by winxo on 2016-12-1.
//
#include "binary_tree.h"
#include "windows.h"

int main() {
    SetConsoleTitle("binary tree practice");//console的标题
    HANDLE buf;
    buf = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(buf, 10);
    BTree tree;
    tree = createTree();
    SetConsoleTextAttribute(buf, 11);
    puts("\npre order:");
    preOrder(tree);
    SetConsoleTextAttribute(buf, 12);
    puts("\nin order:");
    inOrder(tree);
    SetConsoleTextAttribute(buf, 15);
    puts("\npost order:");
    postOrder(tree);
    SetConsoleTextAttribute(buf, 14);
    puts("\nlayer order:");
    layerOrder(tree);
    free(tree);
    return 0;
}
