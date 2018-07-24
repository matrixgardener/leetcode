// 生成括号.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <string>
using namespace std;

void generate(string item,int n,vector<string> &result){
	if(item.size()==2*n){
		result.push_back(item);
		return;
	}
	generate(item+'(',n,result);
	generate(item+')',n,result);
}


int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> result;
	generate("",2,result);
	for(int i=0;i<result.size();i++){
		printf("'%s'\n",result[i].c_str());
	}
	
	return 0;
}


