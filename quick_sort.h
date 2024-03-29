#pragma once
#include <vector>
#include <iostream>

using namespace std;

int partition(vector<int> &nums, int left, int right)
{
	int pivot = nums[left];
	while (left < right)
	{
		while (left < right && nums[right] >= pivot) right--;
		nums[left] = nums[right];
		while (left < right && nums[left] <= pivot) left++;
		nums[right] = nums[left];
	}
	nums[left] = pivot;
	return left;
}

void quickSort(vector<int>& nums, int left, int right)
{
	if (left >= right) return;
	srand(time(0));
	int select_index = rand() % (right - left + 1) + left;
	swap(nums[select_index], nums[left]);
	int pivot = partition(nums, left, right);
	quickSort(nums, left, pivot - 1);
	quickSort(nums, pivot + 1, right);
}