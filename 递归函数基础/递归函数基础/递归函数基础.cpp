// 递归函数基础.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
void compute_sum_3(int i,int &sum){
	sum+=i;
}
void compute_sum_2(int i,int &sum){
	sum+=i;
	compute_sum_3(i+1,sum);
}
void compute_sum_1(int i,int &sum){
	sum+=i;
	compute_sum_2(i+1,sum);
}
void compute_sum(int i,int& sum){
	if(i>3){
		return;
	}
	sum+=i;
	compute_sum(i+1,sum);
}
int _tmain(int argc, _TCHAR* argv[])
{
	int sum1=0;
	int sum=0;
	compute_sum_1(1,sum1);
	compute_sum(1,sum);
	printf("compute_sum1=%d\n",sum1);
	printf("compute_sum=%d\n",sum);
	return 0;
}

