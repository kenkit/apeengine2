/*!
	@file
	@author		Evmenov Georgiy
	@date		04/2008
	@module
*//*
	This file is part of MyGUI.
	
	MyGUI is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	
	MyGUI is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.
	
	You should have received a copy of the GNU Lesser General Public License
	along with MyGUI.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __MYGUI_CONTROLLER_EDGE_HIDE_H__
#define __MYGUI_CONTROLLER_EDGE_HIDE_H__

#include "MyGUI_Prerequest.h"
#include "MyGUI_WidgetDefines.h"
#include "MyGUI_ControllerItem.h"

namespace MyGUI
{

	/** This controller used for hiding widgets near screen edges.
		Widget will start hiding(move out of screen) if it's near
		border and it and it's childrens don't have any focus. Hiding
		till only small part of widget be visible. Widget will move
		inside screen if it have any focus.
	*/
	class MYGUI_EXPORT ControllerEdgeHide : public ControllerItem
	{
	public:
		/**
			@param _time in which widget will be hidden or shown
			@param _remainPixels how many pixels you will see afterr full hide
			@param _shadowSize adds to _remainPixels when hiding left or top (for example used for windows with shadows)
		*/
		ControllerEdgeHide(float _time, int _remainPixels = 0, int _shadowSize = 0);

	private:
		const std::string & getType();
		bool addTime(WidgetPtr _widget, float _time);
		void prepareItem(WidgetPtr _widget);

		delegates::CDelegate1<WidgetPtr> eventPostAction;

		float mTime;
		int mRemainPixels;
		int mShadowSize;
		float mElapsedTime;
	};

}

#endif // __MYGUI_CONTROLLER_EDGE_HIDE_H__
