#pragma once

template <typename T>
struct _vec2
{
	union
	{
		T x;
		T y;
		T mData[2];
	};
};