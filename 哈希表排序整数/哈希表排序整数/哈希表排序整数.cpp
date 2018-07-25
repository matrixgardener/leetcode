// 哈希表排序整数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int random[10]={999,1,444,7,20,9,1,3,7,7};
	int hashmap[1000]={0};
	for(int i=0;i<10;i++){
		hashmap[random[i]]++;
	}
	for(int i=0;i<1000;i++){
		for(int j=0;j<hashmap[i];j++){
			printf("%d\n",i);
		}
	}
	return 0;
}

