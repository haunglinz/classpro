#include "Bullet.h"
#include "FishNet.h"

//this->setPosition(startInNodeSpace);
//this->setVisible();
//float angle = cppAngleSigned(cppSub(targetInWorldSpace,startInWorldSpace),CCPointMake(0,1));
//this->setRotation(CC_RADIANS_TO_DEGREES(angle));



CCPoint Bullet :: getCollisionPoint()
{
	return getParent()->converToWorldSpace(getPosition());
}

void Bullet::end()
{
	stopActionByTag(k_Bullet_Action);
	this->setVisible(false);
	FishNet *fishNet = (FishNet *) getUserObject();
	fishNet ->showAt(getPosition(),getTag());
}

void Bullet::flyTo( CCPoint targetInWorldSpace,int type)
{
	CCPoint startInNodeSpace = CCPointZero;
	CCPoint startInWorldSpace = this->getParent()->convertToWorldSpace(startInNodeSpace);
	CCPoint targetInNodeSpace = this->getParent()->convertToNodeSpace(targetInWorldSpace);

	this->setPosition(startInWorldSpace);
	this->setVisible(true);
	float angle = cppAngleSigned(ccpSub(targetInWorldSpace,startInWorldSpace),CCPointMake(0,1));
	this->setRotation(CC_RADIANS_TO_DEGREES(angle));
	this->setTag(type);



}