#include "DeskMonitionControl.h"
#include "DeskMonitionView.h"

CDeskMonitionControl::CDeskMonitionControl()
{
	m_pView = nullptr;
}

CDeskMonitionControl::~CDeskMonitionControl()
{
	if (nullptr != m_pView)
	{
		m_pView->deleteLater();
		m_pView = nullptr;
	}
}

void CDeskMonitionControl::OnBegin()
{
	if (nullptr == m_pView)
	{
		m_pView = new(std::nothrow) DeskMonitionView();
		if (nullptr == m_pView)
		{
			// log error info
			//////////////////////////////////////////////////////////////////////////
			return;
		}
	}
	if (nullptr != m_pView)
	{
		m_pView->show();
	}
}
