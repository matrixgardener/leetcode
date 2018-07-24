// 钞票支付.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	const int rmb[]={100,50,20,10,5,2,1};
	const int num=7;//7种面额

	int x=628;
	int count=0;
	for(int i=0;i<num;i++)
	{
		int use=x/rmb[i];
		count+=use;
		x=x-rmb[i]*use;
		printf("需要的面额为%.3d的%.1d张， ",rmb[i],use);
		printf("剩余需要支付RMB %.2d.\n",x);
	}
	printf("------总共需要%.2d张RMB------\n",count);
	return 0;
}

