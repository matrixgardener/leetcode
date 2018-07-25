// 归并两个已排序数组.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;


void merge_sort_two_vec(vector<int> &sub_vec1,
						vector<int> &sub_vec2,
						vector<int> &vec){
	int i=0;
	int j=0;
	while(i<sub_vec1.size()&&j<sub_vec2.size()){
		if(sub_vec1[i]<=sub_vec2[j]){
			vec.push_back(sub_vec1[i]);
			i++;
		}
		else{
			vec.push_back(sub_vec2[j]);
			j++;
		}
	}
	for(;i<sub_vec1.size();i++){
		vec.push_back(sub_vec1[i]);
	}
	for(;j<sub_vec2.size();j++){
		vec.push_back(sub_vec2[j]);
	}
}

void merge_sort(vector<int> &vec){
	if(vec.size()==1){
		return;
	}
	int mid=vec.size()/2;
	vector<int> sub_vec1;
	vector<int> sub_vec2;
	for(int i=0;i<mid;i++){
		sub_vec1.push_back(vec[i]);
	}
	for(int i=mid;i<vec.size();i++){
		sub_vec2.push_back(vec[i]);
	}
	merge_sort(sub_vec1);
	merge_sort(sub_vec2);	
	vec.clear();	
	merge_sort_two_vec(sub_vec1,sub_vec2,vec);
	
}

/*
int _tmain(int argc, _TCHAR* argv[])
{
	int test1[]={2,5,8,20};
	int test2[]={1,3,5,7,30,50};
	vector<int> sub_vec1;
	vector<int> sub_vec2;
	vector<int> vec;
	for(int i=0;i<4;i++){
		sub_vec1.push_back(test1[i]);
	}
	for(int i=0;i<6;i++){
		sub_vec2.push_back(test2[i]);
	}
	merge_sort_two_vec(sub_vec1,sub_vec2,vec);
	for(int i=0;i<vec.size();i++){
		printf("[%d]",vec[i]);
	}
	printf("\n");
	return 0;
}
*/

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec1;
	int test[]={5,-7,9,8,1,4,-3,10,2,0};
	for(int i=0;i<10;i++){
		vec1.push_back(test[i]);
	}
	merge_sort(vec1);
	for(int j=0;j<vec1.size();j++){
		printf("[%d]",vec1[j]);		
	}	
	printf("\n");
	return 0;
}