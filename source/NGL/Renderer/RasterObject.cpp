#include "NGL/Renderer/RasterObject.h"
#include "NGL/Core/Core.h"

namespace NGL
{

	const RasterObject::rasterGeometry &RasterObject::GetGeometry()
	{
		return m_geometry;
	}

	void RasterObject::SetPos(Core::point &p)
	{
		m_position = p;
	}

	const Core::point &RasterObject::Pos()
	{
		return m_position;
	}

}; // namespace NGL::Renderer
