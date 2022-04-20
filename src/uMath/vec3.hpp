#pragma once

template <typename T>
struct _vec3
{
	union
	{
		T x;
		T y;
		T z;
		T mData[3];
	};
};