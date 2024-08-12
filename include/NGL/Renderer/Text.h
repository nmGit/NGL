#pragma once

#include "NGL/Core/Core.h"
#include "RasterObject.h"
#include <string>
namespace NGL
{
	class Text : public RasterObject
	{
	  public:
		Text();
		Text(std::string s);

		virtual void Rasterize(draw_cb cb, void *user_data) override;

		const Core::rect &Size() override;

	  protected:
	  private:
		std::string m_str = "";
		Core::font_size m_font_size = Core::font_size::SMALL;
		Core::color m_color = Core::color::BLACK;
		Core::rect m_size;
	};
} // namespace NGL