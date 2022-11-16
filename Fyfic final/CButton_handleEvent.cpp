#include "CButton.h"

bool CButton::handleEvent(int x, int y) {
	//Check if mouse is in button
	bool inside = true;

	//Mouse is left of the button
	if (x < mPosition.x)
	{
		inside = false;
	}
	//Mouse is right of the button
	else if (x > mPosition.x + BTN_WIDTH)
	{
		inside = false;
	}
	//Mouse above the button
	else if (y < mPosition.y)
	{
		inside = false;
	}
	//Mouse below the button
	else if (y > mPosition.y + BTN_HEIGHT)
	{
		inside = false;
	}

	return inside;
	
	
}