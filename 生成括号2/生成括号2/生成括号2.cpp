// 生成括号2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <vector>
using namespace std;


class Solution{
public:
	vector<string> generateParenthesis(int n){
		vector<string> result;
		generate("",n,n,result);
		return result;
	}
private:
	void generate(string item,int left,int right,vector<string> &result){
		if(left==0&&right==0){
			result.push_back(item);
			return;
		}
		if(left>0){
			generate(item+'(',left-1,right,result);
		}
		if(left<right){
			generate(item+')',left,right-1,result);
		}
	}
};




int _tmain(int argc, _TCHAR* argv[])
{
	Solution solve;
	vector<string> result=solve.generateParenthesis(3);
	for(int i=0;i<result.size();i++){
		printf("%s\n",result[i].c_str());
	}
	return 0;
}

