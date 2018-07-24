// 二叉树层次遍历.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x),left(NULL),right(NULL){}
};

void BFS_print(TreeNode* root){
	queue<TreeNode *> q;
	q.push(root);
	while(!q.empty()){
		TreeNode *node=q.front();
		q.pop();
		printf("[%d]\n",node->val);
		if(node->left){
			q.push(node->left);
		}
		if(node->right){
			q.push(node->right);
		}
	}
}





int _tmain(int argc, _TCHAR* argv[])
{
	TreeNode a(1);
	TreeNode b(2);
	TreeNode c(5);
	TreeNode d(3);
	TreeNode e(4);
	TreeNode f(6);
	a.left=&b;
	a.right=&c;
	b.left=&d;
	b.right=&e;
	c.right=&f;
	BFS_print(&a);
	return 0;
}

