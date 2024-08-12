#pragma once
#include "Core/Core.h"
#include "Renderer/RasterObject.h"
#include <vector>

namespace NGL::Widgets
{

	/*!
	 * \defgroup ngl_widget Widgets
	 * \brief Base UI Elements
	 */

	class Renderer;

	/*!
	 * \brief Widget Base Class
	 * \ingroup ngl_widget
	 */
	class Widget
	{
	  public:
		friend Renderer;

		Widget(Widget *parent);

		/*!
\brief Rasterize widget
*/
		virtual void Redraw();

		/*!
    	\brief Create the widget
	*/
		virtual void Create() = 0;

		/*!
    	\brief Destroy the widget
	*/
		virtual void Destroy();

		/*!
    	\brief Get the minimum geometry
    	\return Mimum size of the widget
	*/
		const Core::rect &MinimumSize();

		/*!
    	\brief Position of the widget
    	\return position of the widget
	*/
		const Core::point &Pos();

		/*!
    	\brief Add a child to the widget
    	\param children child to add
	*/
		void AddChild(Widget *children);

	  protected:
		void SetMinimumWidth(int width);
		void SetMinimumHeight(int height);
		void SetPos(Core::point p);
		void RedrawInternal();
		void CreateInternal();

		/*!
    	\brief Gets the raster object

		Return nullptr if this object is not directly raterizeable
		
    	\return Returned value description
	*/
		virtual NGL::RasterObject *GetRasterObject();

	  private:
		int m_minimum_width = 0;
		int m_minimum_height = 0;
		Core::point m_position = {0};
		Core::rect m_minimum_geometry = {0};
		std::vector<Widget *> m_children;
		Widget *m_parent = nullptr;
	};
}; // namespace NGL::Widgets