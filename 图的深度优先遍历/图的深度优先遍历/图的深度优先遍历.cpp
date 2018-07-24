// 图的深度优先遍历.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
using namespace std;

struct GraphNode{
	int label;
	vector<GraphNode *> neighbors;
	GraphNode(int x): label(x){}
};

void DFS_graph(GraphNode *node,int visit[]){
	visit[node->label]=1;
	printf("%d ",node->label);
	for(int i=0;i<node->neighbors.size();i++){
		if(visit[node->neighbors[i]->label]==0){
			DFS_graph(node->neighbors[i],visit);
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int maxn=5;
	GraphNode *Graph[maxn];
	for(int i=0;i<maxn;i++){
		Graph[i]=new GraphNode(i);
	}
	Graph[0]->neighbors.push_back(Graph[4]);
	Graph[0]->neighbors.push_back(Graph[2]);
	Graph[1]->neighbors.push_back(Graph[0]);
	Graph[1]->neighbors.push_back(Graph[2]);
	Graph[2]->neighbors.push_back(Graph[3]);
	Graph[3]->neighbors.push_back(Graph[4]);
	Graph[4]->neighbors.push_back(Graph[3]);
	
	int visit[maxn]={0};
	for(int i=0;i<maxn;i++){
		if(visit[i]==0){
			printf("From label(%d) : ",Graph[i]->label);
			DFS_graph(Graph[i],visit);
			printf("\n");
		}
	}

	for(int i=0;i<maxn;i++){
		delete Graph[i];
	}
	return 0;
}

