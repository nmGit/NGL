#pragma once

#include "NGL/Core/Core.h"

namespace NGL
{

	class RasterObject
	{
	  public:
		typedef void (*draw_cb)(Core::area a, uint8_t *buf);

		struct rasterGeometry
		{
			Core::point parent;
			Core::point offset;
		};

		void SetPos(Core::point &p);
		const Core::point &Pos();

		virtual void Rasterize(draw_cb cb, void *user_data) = 0;

		/*!
    	\brief Set absolute position
    	\param p Upper left corner
	*/
		virtual const Core::rect &Size() = 0;

		const rasterGeometry &GetGeometry();

	  protected:
		rasterGeometry &Geometry();

	  private:
		draw_cb m_draw_cb = nullptr;
		void *m_draw_user_data = nullptr;
		Core::point m_position = {0, 0};
		rasterGeometry m_geometry;
	};
}; // namespace NGL::Renderer