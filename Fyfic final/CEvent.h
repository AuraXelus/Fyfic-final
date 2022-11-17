#pragma once


#include <SDL.h>

class CEvent {
public:
	CEvent();

	virtual ~CEvent();

	virtual void OnEvent(SDL_Event* Event);

	virtual void OnKeyPress();

	virtual void OnMouseMove(int mX, int mY, int relX, int relY, bool Left, bool Right, bool Middle);

	virtual void OnMouseWheel(bool Up, bool Down);

	virtual void OnLButtonDown(int mX, int mY);

	virtual void OnLButtonUp(int mX, int mY);

	virtual void OnRButtonDown(int mX, int mY);

	virtual void OnRButtonUp(int mX, int mY);

	virtual void OnMButtonDown(int mX, int mY);

	virtual void OnMButtonUp(int mX, int mY);

	virtual void OnExit();

	virtual void OnUser(Uint8 type, int code, void* data1, void* data2);
};

