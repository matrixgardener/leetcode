// 图的构造与表示(邻接表).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
using namespace std;

struct GraphNode{
	int label;
	vector<GraphNode *> neighbors;
	GraphNode(int x):label(x){};
};

int _tmain(int argc, _TCHAR* argv[])
{
	const int maxn=5;
	GraphNode *Graph[maxn];

	for(int i=0;i<maxn;i++){
		Graph[i]=new GraphNode(i);
	}

	Graph[0]->neighbors.push_back(Graph[2]);
	Graph[0]->neighbors.push_back(Graph[4]);
	Graph[1]->neighbors.push_back(Graph[0]);
	Graph[1]->neighbors.push_back(Graph[2]);
	Graph[2]->neighbors.push_back(Graph[3]);
	Graph[3]->neighbors.push_back(Graph[4]);
	Graph[4]->neighbors.push_back(Graph[3]);
	
	printf("Graph:\n");
	for(int i=0;i<maxn;i++){
		printf("Label(%d) : ",i);
		for(int j=0;j<Graph[i]->neighbors.size();j++){
			printf("%d ",Graph[i]->neighbors[j]->label);
		}
		printf("\n");
	}
	for(int i=0;i<maxn;i++){
		delete Graph[i];
	}	
	return 0;
}

