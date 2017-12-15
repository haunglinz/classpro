#include "FishNet.h"
#include "staticData.h"
FishNet::FishNet(void)
{
}
FishNet::~FishNet(void)
{

}

bool FishNet::init()
{
	if(CCNode::init())
	{
		return false;
	}
	CCStrig *fileName = CCString::createWithFormat("weapon_net_%03d.png",1);
	_fishNetSprite = CCSprite ::createWithSpriteFrameName(fileName->getCString());
	addChild(_fishNetSprite);
	return true;
}

void FishNet::ShowAt(CCPoint pos,int type)
{
	this->setVisible(true);
	this->setPosition(pos);
	CCString *fishNetFrameName = CCString ::createWithFormate("weapon_net_%03d.png",type+1);
	this->_fishNetSprite->setDisplayFrame(CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(fishNetFrameName->getCString()));
	stopAllActions();
	//CCDelayTime *delay = CCDelayTime::create(1);
	CCSequence *squence = CCSequence::create(CCDelayTime::create(1) ,CCHide::create,NUll);
	runAction(squence);

}