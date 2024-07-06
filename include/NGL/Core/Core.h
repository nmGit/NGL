#pragma once
#include <stdint.h>
namespace NGL
{
	struct point
	{
		int x;
		int y;
	};

	struct rect
	{
		int width;
		int height;
	};

	struct area
	{
		point p;
		rect r;
	};

	enum color : uint8_t
	{
		WHITE = 0x00,
		BLACK = 0x01,

		NONE
	};

	enum font_size : uint8_t
	{
		SMALL,
		MEDIUM,
		LARGE
	};
} // namespace NGL
