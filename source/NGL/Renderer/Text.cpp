#include "NGL/Renderer/Text.h"
#include "NGL/Core/Font.h"

#include <cstring>

Text::Text()
{
	
}

Text::Text(std::string t)
	: m_str(t)
{
}

const NGL::rect &Text::Size()
{
	// TODO
	return m_size;
}

void Text::Rasterize(draw_cb cb, void *user_data)
{
	int strlen = m_str.length();
	NGL::color bg = NGL::color::NONE;
	uint8_t font_width = 0;
	uint8_t font_height = 0;
	uint16_t x_position = 0;
	uint16_t kerning = 0;

	bool there_was_a_pixel = false;
	for (int i = 0; i < strlen; i++)
	{
		uint8_t *letter = nullptr;
		if (m_font_size == NGL::font_size::MEDIUM)
		{
			letter = get_letter_24x24(m_str[i]);
			font_width = 24;
			font_height = 24;
		}
		else if (m_font_size == NGL::font_size::SMALL)
		{
			letter = get_letter_8x8(m_str[i]);
			font_width = 8;
			font_height = 8;
		}
		else if (m_font_size == NGL::font_size::LARGE)
		{
			letter = get_letter_48x55(m_str[i]);
			font_width = 48;
			font_height = 60;
		}
		uint16_t char_width = 0;
		for (uint16_t x = 0; x < font_width; x++)
		{
			for (uint16_t y = 0; y < font_height; y++)
			{

				uint16_t x_offset = font_width - (x + 1);
				uint16_t y_offset = y * font_width;
				uint16_t index = x_offset + y_offset;
				uint8_t font_byte = letter[index / 8];

				uint8_t bit_val = 0x1 & (font_byte >> (x % 8));
				if (bit_val)
				{
					there_was_a_pixel = true;
					//write_buf(Pos().x + x - x_position, Pos().y + y, m_color);
				}
			}
			if (there_was_a_pixel)
			{

				char_width++;
			}
			there_was_a_pixel = false;
		}
		x_position += char_width + kerning;
	}
}

