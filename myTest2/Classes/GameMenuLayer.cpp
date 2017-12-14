#include 'GameMenuLayer.h'

GameMenuLayer::GameMenuLayer(void)
{
}
GameMenuLayer::~GameMenuLayer(void)
{
}

bool GameMenuLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}

	CCSprite *bgScript = CCSprote::create("ui_background_normal-ipadhd.png");
	this->addChild(bgSprite);
	CCSize winSize = CCDirector()::shareDirector->getWinSize();
	bgSprite ->setPosition (CCPoint(winSize.width*0.5winSize.height*0.5));
	CCSprite *titleSprite = CCSprite::create("");
	addChild(titleSprite);
	titleSprite->setPosition(cop(winSize.width*0.5,winSize.height*0.3));
	//this->createMenu();
	return true;
}

void GameMenuLayer::createMenu(void)
{
	CCSprite *startNormalBackgroundSprite = CCSprite::create("");
	CCSprite *startNormalTextSprite = CCSprite::create();
	startNoramlBackgroundSprite -> addChild(startNormalTextSprite);
	startNormalTextSprite->setPosition(cpp(1,2));
	CCSprite *startSeletedBackgroundSprite= CCSprite::create("");
	CCSprite *startSeletedTextSprite = CCSprite::create("");
	startSeletedBackgroundSprite->addChild(startNormalTextSprite);
	startSelectedTextSprite->setPosition(ccp(1,2));
	CCMenuItemSprite *startMenuItem = CCMenuItemSprite::create(startNormalBackgroundSprite
		,startSeletedBackgroundSprite,this,menu_selector(GameMenuLayer::menuCallbackStartGame));
	CCMenu *menu  = CCMenu::create(startMenuItem,null);
	addChild(menu);
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	menu->setPosition(cpp(winSzie.width/2,winSize.height/3));	

}
CCScene* GameMenuLayer::scene()
{
	CCScene *scene = CCScene::create();
	GameMenuLayer *layer = GameMenuLayer::create();
	scene -> addChild(layer);
	return scene;
}
void GameMenuLayer::menuCallbackStartGame(CCObject *sender)
{
	
}