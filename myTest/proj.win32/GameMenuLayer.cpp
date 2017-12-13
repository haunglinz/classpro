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
	CCSpriteFrameCache::sharedSpriteFrameCache()->addCCSpriteFrameWithFile("UI_GameMenuText_cn-ipadhd.plist");
	CCSpriteFrameCache::sharedSpriteFrameCache()->addCCSpriteFrameWithFile("UI_GameStartMenuLayer-ipadhd.plist");
	CCSprite *startNormalBackgroundSprite = CCSprite::createWithSpriteFrameName("ui_button_box02_02.png");
	CCSprite *startNormalTextSprite = CCSprite::createWithSpriteFrameName("ui_2p_010.png");
	startNoramlBackgroundSprite -> addChild(startNormalTextSprite);
	CCSize size = startNormalBackgroundSprite()->getContentSize();
	startNormalTextSprite->setPosition(cpp(winSzie.width/2,winSize.height/2+20));
	CCSprite *startSeletedBackgroundSprite= CCSprite::createWithSpriteFrameName("ui_button_box02_01.png");
	CCSprite *startSeletedTextSprite = CCSprite::createWithSpriteFrameName("ui_2p_010.png");
	startSeletedBackgroundSprite->addChild(startNormalTextSprite);
	startSelectedTextSprite->setPosition(ccp(winSzie.width/2,winSize.height/2+20));
	CCMenuItemSprite *startMenuItem = CCMenuItemSprite::create(startNormalBackgroundSprite
		,startSeletedBackgroundSprite,this,menu_selector(GameMenuLayer::menuCallbackStartGame));
	CCMenu *menu  = CCMenu::create(startMenuItem,NULL);
	this-> addChild(menu);
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