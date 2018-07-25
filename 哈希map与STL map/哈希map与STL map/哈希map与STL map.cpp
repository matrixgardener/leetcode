// 哈希map与STL map.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <map>
#include <string>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

int _tmain(int argc, _TCHAR* argv[])
{
	map<string,int> hash_map;
	string str1="abc";
	string str2="aaa";
	string str3="xxxxx";
	hash_map[str1]=1;
	hash_map[str2]=2;
	hash_map[str3]=100;
	if(hash_map.find(str1)!=hash_map.end()){
		printf("%s is in the hash_map,value is %d\n",
		str1.c_str(),hash_map[str1]);
	}
	map<string,int>::iterator it;
	for(it=hash_map.begin();it!=hash_map.end();it++){
		printf("hash_map[%s]=%d\n",it->first.c_str(),it->second);
	}	
	return 0;
}

