// 移除K个数字.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:
	std::string removeKdigits(std::string num,int k){
		std::vector<int> s;
		std::string result="";
		for(int i=0;i<num.length();i++){//从最高位循环扫描数字num
			int number=num[i]-'0';
			while(s.size()!=0&&s[s.size()-1]>number&&k>0){
				s.pop_back();
			







int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

