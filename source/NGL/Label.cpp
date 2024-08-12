#include "NGL/Label.h"
namespace NGL::Widgets
{

	Label::Label(Widget *w, std::string lbl) : Widget(w)
	{
	}

	void Label::Redraw()
	{
	}

	void Label::Create()
	{
	}

	RasterObject *Label::GetRasterObject()
	{
		return &m_rasterizer;
	}
} // namespace NGL::Widgets