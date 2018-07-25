// 图的定义.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const int maxn=5;
	int graph[maxn][maxn]={0};
	graph[0][2]=1;
	graph[0][4]=1;
	graph[1][0]=1;
	graph[1][2]=1;
	graph[2][3]=1;
	graph[3][4]=1;
	graph[4][3]=1;
	
	printf("Graph:\n");
	for(int i=0;i<maxn;i++){
		for(int j=0;j<maxn;j++){
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
	return 0;
}

