// ���ֲ���(�ݹ�).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
using namespace std;

bool binary_search(vector<int> &sort_array,
				   int begin,int end,int target){
	 if(begin<end){
		 return false;
	 }
	 int mid=(begin+end)/2;
	 if(target==sort_array[mid]){
		 return true;
	 }
	 else if(target<sort_array[mid]){
		 return binary_search(sort_array,begin,mid-1,target);
	 }
	 else if(target>sort_array[mid]){
		 return binary_search(sort_array,mid+1,end,target);
	 }
}


bool binary_search(vector<int> &sort_array,int target){
	int begin=0;
	int end=sort_array.size()-1;
	while(begin<=end){
		int mid=(begin+end)/2;
		if(target==sort_array[mid]){
			return true;
		}
		else if(target<sort_array[mid]){
			end=mid-1;
		}
		else if(target>sort_array[mid]){
			begin=mid-1;
		}
	}
	return false;
}


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

