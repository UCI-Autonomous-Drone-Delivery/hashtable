#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <stdlib.h>
#include <vector>
#include <stack>
#include <list>
#include <time.h>
#include <cmath>
#include <iostream>
#include <assert.h>

#include "Data.hpp"

//CONSTANTS
const int branchSize=3;




struct TreeNode {
    Bool isleaf;
    Node** key[branchSize]; // holds node at same level
    TreeNode** childArray[branchSize + 1]; // holds nodes at next level
    TreeNode* parent;
}


class bPlus {
public:
	bPlus();
	void insert(Node* node);
	TreeNode* traverse(Node* node);
	TreeNode* search(Node* node);
	void insertInternal(Node* node, TreeNode* cursor, TreeNode* child);
	TreeNode* findParent(TreeNode* cursor, TreeNode* child);
	
private:
	int treeSize;
	TreeNode* treeHead;

}



#endif
