#pragma once

#include "NGL/Core/Core.h"

class RasterObject
{
  public:
	typedef void (*draw_cb)(NGL::area a, uint8_t *buf);

	struct rasterGeometry
	{
		NGL::point parent;
		NGL::point offset;
	};

	void SetPos(NGL::point &p);
	const NGL::point &Pos();

	virtual void Rasterize(draw_cb cb, void *user_data) = 0;

	/*!
    	\brief Set absolute position
    	\param p Upper left corner
	*/
	virtual const NGL::rect &Size() = 0;

	const rasterGeometry &GetGeometry();

  protected:
	rasterGeometry &Geometry();

  private:
	draw_cb m_draw_cb = nullptr;
	void *m_draw_user_data = nullptr;
	NGL::point m_position = {0, 0};
	rasterGeometry m_geometry;
};