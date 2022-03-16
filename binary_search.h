#pragma once

#include <vector>
#include <iostream>

using namespace std;

// Ñ°ÕÒÒ»¸öÊı×Ö
int binarySearch1(const vector<int>& nums, int a)
{
	int left = 0, right = nums.size()-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] == a)
			return mid;
		else if (nums[mid] > a)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}

