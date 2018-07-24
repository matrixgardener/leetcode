// 从侧面观察二叉树.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <queue>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):
		val(x),left(NULL),right(NULL){}
};
class Solution{
public:
	vector<int> rightSideView(TreeNode * root){
		vector<int> view;
		queue<pair<TreeNode *,int>> q;
		if(root){
			q.push(make_pair(root,0));
		}
		while(!q.empty()){
			TreeNode *node=q.front().first;
			int depth=q.front().second;
			q.pop();
			if(view.size()==depth){
				view.push_back(node->val);
			}
			else{
				view[depth]=node->val;
			}
			if(node->left){
				q.push(make_pair(node->left,depth+1));
			}
			if(node->right){
				q.push(make_pair(node->right,depth+1));
			}
		}
		return view;
	}
};

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
	Solution solve;
	vector<int> result=solve.rightSideView(&a);
	for(int i=0;i<result.size();i++){
		printf("[%d]\n",result[i]);
	}
	
	return 0;
}

