#ifndef _BULLET_H
#define _BULLET_H

#include "cocosd.h"
USING_NS_CC;

class Bullet:public CCNode
{
public :
	Bullet(void);
	virtual ~Bullet(void);
	CREATE_FUNC(Bullet);
	bool init();
	void end();
	void flyTo(CCPoint targetInWordSpace, int type = 0);
protected:
	float getSpeed(int type);
	CCSprite *_bulletSprite;
};
#endif