#include <vector>
class Solution{
public:
	int wiggleMaxLength(std::vector<int>& nums){
		if(nums.size()<2){
			return nums.size();
		}
		static const int begin=0;
		static const int up=1;
		static const int down=2;

		int state=begin;
		int max_length=1;//摇摆序列最大长度至少为1
		//从第二个元素开始扫描
		for(int i=1;i<nums.size();i++){
			switch(state){
			case begin:
				if(nums[i-1]<nums[i]){
					state=up;
					max_length++;
				}
				else if(nums[i-1]>nums[i]){
					state=down;
					max_length++;
				}
				break;
			case up:
				if(nums[i-1]>nums[i]){
					state=down;
					max_length++;
				}
				break;
			case down:
				if(nums[i-1]<nums[i]){
					state=up;
					max_length++;
				}
				break;
			}
		}
		return max_length;
	}
};

int main(){
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(17);
	nums.push_back(5);
	nums.push_back(10);
	nums.push_back(13);
	nums.push_back(15);
	nums.push_back(10);
	nums.push_back(5);
	nums.push_back(16);
	nums.push_back(8);
	Solution solve;
	printf("%d\n",solve.wiggleMaxLength(nums));
	return 0;
}



