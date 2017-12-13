#include "FishLayer.h"
#include "Fish.h"

FishLayer::FishLayer(void)
{
}

FishLayer::~FishLayer(void)
{

}


bool FishLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	Fish *fish = Fish::create((FishType)3);
	this->addChild(fish);
	//fish->setPosition(300,300);
	//Fish *fish =Fish::create(k_Fish_Type_AngleFish);
	//this->addChild(fish);
	fish->setPosition(cpp(1200,800));
	return true;
}
