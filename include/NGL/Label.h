#pragma once
#include "NGL/Renderer/RasterObject.h"
#include "NGL/Renderer/Text.h"
#include "NGL/Widget.h"
#include <string>

namespace NGL::Widgets
{

	/*!
	 * \brief A Label Widget
	 * \ingroup ngl_widget
	 */
	class Label : public Widget
	{
	  public:
		/*!
    	\brief Constructor
    	\param parent Parent Widget
    	\param lbl The text
	*/
		Label(Widget *parent, std::string lbl = "");
		virtual void Redraw() override;
		virtual void Create() override;

	  protected:
		RasterObject *GetRasterObject() override;

	  private:
		std::string text;
		Text m_rasterizer;
	};
} // namespace NGL::Widgets