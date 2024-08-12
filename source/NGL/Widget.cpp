#include "NGL/Widget.h"

namespace NGL::Widgets
{

	Widget::Widget(Widget *parent)
	{
		m_parent = parent;
	}

	void Widget::Redraw()
	{
	}

	void Widget::Create()
	{
	}

	void Widget::Destroy()
	{
	}

	const Core::rect &Widget::MinimumSize()
	{
		return m_minimum_geometry;
	}

	const Core::point &Widget::Pos()
	{
		return m_position;
	}

	void Widget::AddChild(Widget *child)
	{
	}

	void Widget::SetMinimumHeight(int height)
	{
		m_minimum_height = height;
	}

	void Widget::SetMinimumWidth(int width)
	{
		m_minimum_width = width;
	}

	void Widget::SetPos(Core::point p)
	{
		m_position = p;
	}

	void Widget::RedrawInternal()
	{
		for (Widget *w : m_children)
		{
			RedrawInternal();
		}
		Redraw();
	}

	void Widget::CreateInternal()
	{
		Create();
		for (Widget *w : m_children)
		{
			CreateInternal();
		}
	}

	NGL::RasterObject *Widget::GetRasterObject()
	{
		return nullptr;
	}

} // namespace NGL::Widget
