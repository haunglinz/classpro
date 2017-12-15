#ifndef _FISHNET_H
#define _FISHNET_H

#include "cocos2d"
USING_NS_CC
class FishNet:public CCNode
{
public :
	FishNet(coid);
	virtual ~FishNet(void);
	CREATE_FUNC(FishNet)
		bool init();
	void  showAt(CCPoint pos,int type=0);
protected:
	CCSPrite *_fishNetSprite;

};
#endif