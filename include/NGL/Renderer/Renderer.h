#pragma once

#include "NGL/Widget.h"

#include <stdint.h>

namespace NGL
{

class Renderer
{
  public:
	/*!
    	\brief Constructor
    	\param widg Parent Widget
    	\param width Width of render area
    	\param height Height of render area
	*/
	Renderer(NGL::Widgets::Widget &widg, int width, int height);

	/*!
    	\brief Render frame

		This should be called every time the screen is re-drawn.
	*/
	void Render();

  protected:
  private:
	NGL::Widgets::Widget &m_main_widget;

	uint8_t *buffer = nullptr;
	int m_width = 0;
	int m_height = 0;
};
} // namespace NGL
