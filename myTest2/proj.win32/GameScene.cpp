#include "GameScence.h"

/*
void GameScence::preloadResources(void ){
	CCSpriteFrameCache  *spriteFrameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Large-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Marlin-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Shark-ipadhd.plist");
	spriteFrameCache->addSpriteFramesWithFile("FishtActor-Small-ipadhd.plis");
	spriteFrameCache->addSpriteFramesWithFile("FishActor-Mid-ipadhd.plist");

	cchar str[][50] = {"SmallFish","Croaker","AngelFish","Amphiprion","PufferS",		
		"Bream","Porgy","Chelonian","Lantern","Ray","Shark","GoldenTrout","GShark",
		"GMarlinsFish","GrouperFish","JadePerch","MarlinsFish","PufferB"};
	for (int i=0 ; i<18 ; i++){
		CCArray *array = CCArray::createWithcapacity(10);
		for( int j=0 ; j<10 ; j++)
		{
			CCString *spriteFrameName = CCString::createWithFormat("%s_actor_%03d.png",str[i],j+1);

			CCSpriteFrame *spriteFrame = spriteFrameCache->spriteFrameByName(spriteFrameName->getCString());
			if(spriteName == NULL)
			{
				break;
			}
			array->addObject(spriteFrame);
		}
		if(array->count() == 0)
		{
			continue;
		}
		CCAnimation *animation = CCAnimation::create(array,0.15);
		CCString *animationName = CCString::createWithFormat("fish_animation_%02d",i+1);
		CCAnimationCache::sharedAnimationCache()->addAnimation(animation,animationName->getCString());
	}
	*/
	bool GameScene:init()
	{
		do
		{
			if(!CCScene::init())
			{
				break;
			}
			preloadResources();
			backgroundLayer =BackgroundLayer::create();
			CC_BREAK_IF(!backgroundLayer);
			this->addChild(backgroundLayer);
			fishLayer = FishLayer::create();
			if(!fishLayer)
			{
				break;
			}

			this->addChild(fishLayer);
			menuLayer = MenuLayer::create();
			CC_BREAK_IF(!menuLayer);
			CC_SAFE_RETAIN(menuLayer);

			return true;

		}while(0);
		return false;
	}

	void GameScene::preloadResources(void)
	{
		CCSpriteFrameCache *spriteFrameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
		spriteFrameCache->addSpriteFramesWithFile("FishActor-Marlin-ipadhd.plist");
		spriteFrameCache->addSpriteFramesWithFile("FishActor-Shark-ipadhd.plist");
		spriteFrameCache->addSpriteFramesWithFile("FishActor-Small-ipadhd.plist");
		spriteFrameCache->addSpriteFramesWithFile("FishActor-Mid-ipadhd.plist");
		spriteFrameCache->addSpriteFramesWithFile("FishActor-Large-ipadhd.plist");
		char str[][50] = {"SmallFish","Croaker","AngelFish","Amphiprion","PufferS",	
			"Bream","Porgy","Chelonian","Lantern","Ray","Shark","GoldenTrout",		
			"GShark","GMarlinsFish","GrouperFish","JadePerch","MarlinsFish","PufferB"};
		for (int i= 0 ;i<18 ;i++)
		{
			CCArray *array = CCArray::createWithCapacity(10);
			for (int j=0;j<10;j++)
			{
				CCString *spriteFrameName = CCString :: createWithFormat("%s_actor_%03d.png",str[i],j);
				CCSpriteFrame *spriteFrame = spriteFrameCache->spriteFrameByName(spriteFrameName->getCString());
				if (spriteFrame == NULL)
				{
					break;
				}
				array -> addObject(spriteFrame);
			}
			if (array->count() == 0)
			{
				continue;
			}
			//CCAnimation *animation = CCAnimation::create(array ��0.15);
			CCAnimation *animation = CCAnimation::createWithSpriteFrames(array ,0.15f);
			CCString *animationName = CCString::createWithFormat("fish_animation_%02",i + 1);
			CCAnimationCache::sharedAnimationCache()->addAnimation(animation,animationName->getCString());
		}
	}
}