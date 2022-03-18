#pragma once

#include <iostream>
#include <vector>

using namespace std;

void backTrack(vector<vector<int>>& ans, vector<int>& vec, int index)
{
	if (index == vec.size() - 1)
		ans.push_back(vec);

	for (int i = index; i < vec.size(); ++i)
	{
		swap(vec[index], vec[i]);
		backTrack(ans, vec, index + 1);
		swap(vec[index], vec[i]);
	}
}

// 使用回溯递归实现全排列
vector<vector<int>> fullPermutation(vector<int>& v)
{
	vector<vector<int>> ans;
	backTrack(ans, v, 0);
	return move(ans);
}

void backTrackTest()
{
	vector<int> v = { 1, 2, 3 };
	auto ans = fullPermutation(v);
	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
}

