#pragma once

#include "RasterObject.h"
#include "NGL/Core/Core.h"
#include <string>

class Text : public RasterObject
{
  public:
	Text();
	Text(std::string s);

	virtual void Rasterize(draw_cb cb, void *user_data) override;

	const NGL::rect &Size() override;

  protected:
  private:
	std::string m_str = "";
	NGL::font_size m_font_size = NGL::font_size::SMALL;
	NGL::color m_color = NGL::color::BLACK;
	NGL::rect m_size;
};