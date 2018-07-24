#include <stdio.h>

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x),left(NULL),right(NULL){}
};

void traversal(TreeNode* node){
	if(!node){
		return;
		//此时访问node称为前序遍历
		traversal(node->left);
		//此时访问node称为中序遍历
		traversal(node->right);
		//此时访问node称为后序遍历
	}
}

void traversal_print1(TreeNode* node,int layer){//中序遍历
	if(!node){
		return;
	}
	traversal_print1(node->left,layer+1);
	for(int i=0;i<layer;i++){
		printf("-----");
	}
	printf("[%d]\n",node->val);
	traversal_print1(node->right,layer+1);
}

void traversal_print2(TreeNode* node,int layer){//后序遍历
	if(!node){
		return;
	}
	traversal_print2(node->left,layer+1);
	traversal_print2(node->right,layer+1);
	for(int i=0;i<layer;i++){
		printf("-----");
	}
	printf("[%d]\n",node->val);	
}
void traversal_print3(TreeNode* node,int layer){//前序遍历
	if(!node){
		return;
	}
	for(int i=0;i<layer;i++){
		printf("-----");
	}
	printf("[%d]\n",node->val);	
	traversal_print3(node->left,layer+1);
	traversal_print3(node->right,layer+1);
}
