#pragma once

#include "Widget.h"

namespace NGL::Widgets
{
	class List : public Widget
	{
	  public:
		List(Widget *parent);
		virtual void Redraw() override;
		void AddWidget(Widget *w);
		virtual void Create() override;

	  protected:
		NGL::RasterObject *GetRasterObject() override;

	  private:
	};
} // namespace NGL::Widget