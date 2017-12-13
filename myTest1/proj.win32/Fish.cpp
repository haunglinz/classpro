#include "fish.h"
//#include "StaticData.h"
Fish::Fish(void)
{
}
Fish::~Fish(void)
{
}

enum
{
	k_Action_Animate = 0,
	k_Action_MoveTo
};

bool Fish ::init(FishType type)
	{
		if(!CCNpde::init())
		{
			return NULL;
		}
		if(type < k_Fish_Type_SmallFish || type >= k_Fish_Type_Count)
		{
			type = k_Fish_Type_SmallFish;
		}

		setType(type);
		CCString *animationName = CCString::createWithFormate("fish_animation_%02d",_type+1);
	//	CCAnimation *animation = CCAnimationCache::sharedAnimationCache()->animationByName(animationName->getCString());
//		CCAnimate *animate = CCAnimate::create(animation);
//		animate->setTag(0);

		CCAnimation *animateion = CCAnimationCache::sharedAnimationCache()->animationByName(animationName->getCString()); 
		CCAnimate *animate =  CCAnimate::create(animation);
		animate->setTag(0);
		_fishSprite = CCSprite::create();
		addChild(_fishSprite);
		_fishSprite->runAction(CCRepeatForever::create(animate));
		return true;
}

Fish *Fish::create(FishType type)
{
	Fish *fish = new Fish();
	if(fish && fish->init(type))
	{
		fish->autorelease();
		return fish;
	}
	else
	{
		CC_SAFE_DELETE(fish);
		return NULL;
	}

}		

	int Fish::getScore()
	{
		return 0;
	}

	int Fish:getSpeed()
	{
		return 200;
	}

