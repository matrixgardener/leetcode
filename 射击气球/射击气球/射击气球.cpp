// 射击气球.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <algorithm>
#include <vector>

bool cmp(const std::pair<int,int>&a,const std::pair<int,int>&b){
	return a.first<b.first;//无需考虑左端点相同时的排序
}

class Solution{
public:
	int findMinArrowShots(std::vector<std::pair<int,int>>&points){
		if(points.size()==0){
			return 0;
		}
		std::sort(points.begin(),points.end(),cmp);//对气球按照左端点从小到大排序
		int shoot_num=1;
		int shoot_begin=points[0].first;
		int shoot_end=points[0].second;

		for(int i=1;i<points.size();i++){
			if(points[i].first<=shoot_end){
				shoot_begin=points[i].first;
				if(shoot_end>points[i].second){
					shoot_end=points[i].second;
				}
			}
			else{
				shoot_num++;
				shoot_begin=points[i].first;
				shoot_end=points[i].second;
			}
		}
		return shoot_num;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<std::pair<int,int>>points;
	points.push_back(std::make_pair(10,16));
	points.push_back(std::make_pair(2,8));
	points.push_back(std::make_pair(1,6));
	points.push_back(std::make_pair(7,12));
	Solution solve;
	printf("%d\n",solve.findMinArrowShots(points));
	return 0;
}

