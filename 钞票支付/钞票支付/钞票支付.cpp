// ��Ʊ֧��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	const int rmb[]={100,50,20,10,5,2,1};
	const int num=7;//7�����

	int x=628;
	int count=0;
	for(int i=0;i<num;i++)
	{
		int use=x/rmb[i];
		count+=use;
		x=x-rmb[i]*use;
		printf("��Ҫ�����Ϊ%.3d��%.1d�ţ� ",rmb[i],use);
		printf("ʣ����Ҫ֧��RMB %.2d.\n",x);
	}
	printf("------�ܹ���Ҫ%.2d��RMB------\n",count);
	return 0;
}

