#pragma once

#include <iostream>
using namespace std;

// ʹ��ţ�ٵ�����
// ţ�ٵ�����ʵ�����������ĸ�
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