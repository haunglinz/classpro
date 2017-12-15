#pragma once
#include "cocos2d.h"
#include "BackgroundLayer.h"
#include "FishLayer.h"
#include "MenuLayer.h"
#include "CannonLayer.h"
#include "TouchLayer.h"
#include "Bullet.h"

using namespace cocos2d;
class CameScene:
	public CCScene
{
public :
	GameScene(void);
	CREATE_FUNC(GameScene);
	virtual bool init();
	virtual ~GameScene(void);

	void cannonAimAt(CCPoint target);
	void cannonShootTo(CCPoint target);


protected :
	BackgroundLayer *backgroundLayer;
	FishLayer *fishLayer;
	MenuLayer *menuLayer;
	CannonLayer *_cannonLayer;
	TouchLayer *_touchLayer;
	void preloadResources(void);
	bool checkOutCollisionBetweenFishesAndBullet(Bullet *bullet);
	void checkOutCollision();
	virtual void update(float delta);
};
