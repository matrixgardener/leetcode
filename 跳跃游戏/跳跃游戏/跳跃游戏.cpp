// 跳跃游戏.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>

class Solution{
public:
	bool canJump(std::vector<int>& nums){
		std::vector<int> index;//最远可跳至的位置
		for(int i=0;i<nums.size();i++){
			index.push_back(nums[i]+i);
		}
		int jump=0;
		int max_index=index[0];
		while(jump<nums.size()&&jump<=max_index){
			if(max_index<index[jump]){
				max_index=index[jump];
			}
			jump++;
		}
		if(jump==index.size()){
			return true;
		}
		return false;
	}
};







int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<int> nums;
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(4);
	Solution solve;
	printf("%d\n",solve.canJump(nums));
	
	return 0;
}

