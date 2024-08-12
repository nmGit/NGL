#pragma once
#include <stdint.h>

/*!
 * \defgroup ngl_core Core
 * \brief Core Resources
 * \addtogroup ngl_core
 * \{
 */

namespace NGL::Core
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

/// @} // ngl_core