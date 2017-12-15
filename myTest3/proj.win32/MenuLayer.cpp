#include "MenuLayer.h"

MenuLayer ::MenuLayer(void)
{}

MenuLayer ::~Menulayer(void)
{
}

bool MenuLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}

	return true;
}