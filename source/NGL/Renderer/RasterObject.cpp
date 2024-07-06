#include "NGL/Renderer/RasterObject.h"
#include "NGL/Core/Core.h"

const RasterObject::rasterGeometry &RasterObject::GetGeometry()
{
	return m_geometry;
}

void RasterObject::SetPos(NGL::point &p)
{
	m_position = p;
}

const NGL::point &RasterObject::Pos()
{
	return m_position;
}