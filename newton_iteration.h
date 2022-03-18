#pragma once

#include <iostream>
using namespace std;

// 使用牛顿迭代法
// 牛顿迭代法实际上是求函数的根
float sqrt2(const float& num)
{
	float xn = num;
	while (xn * xn - num > 1e-5)
	{
		xn = (xn + num / xn) / 2.0;
	}
	return xn;
}

void newtonTest()
{
	printf("%d", sqrt2(3));
}