/*!
 * \file DeskMonitionControl.h
 *
 * \author black
 * \date 2020/07/29
 *
 * bref: main wnd control layer
 */
#pragma once


class DeskMonitionView;

class CDeskMonitionControl
{
public:
	CDeskMonitionControl();
	~CDeskMonitionControl();
public:
	/* Name :   OnBegin
	 * Brief:	pragram begin run main wnd
	 * Return: 
	 * Data: 2020/07/29
	 * Author: black
	*/
	void OnBegin();
private:
	DeskMonitionView* m_pView;	// view layer
};