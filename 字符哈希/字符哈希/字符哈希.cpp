// 字符哈希.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int charmap[128]={0};
	string str="abcdefgaaxxy";

	for(int i=0;i<str.length();i++){
		charmap[str[i]]++;
	}

	for(int i=0;i<128;i++){
		if(charmap[i]>0){
			printf("[%c][%d]:  %d\n",i,i,charmap[i]);
		}
	}
	return 0;
}

