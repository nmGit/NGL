#pragma once
#include "NGL/Widget.h"
#include "NGL/Renderer/RasterObject.h"
#include "NGL/Renderer/Text.h"
#include <string>

class Label : public Widget
{
  public:
	Label(Widget *parent, std::string lbl = "");
	virtual void Redraw() override;
	virtual void Create() override;

  protected:
	RasterObject *GetRasterObject() override;

  private:
	std::string text;
	Text m_rasterizer;
};