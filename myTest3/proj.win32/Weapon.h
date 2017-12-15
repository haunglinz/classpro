#pragma once 
USING_NS_CC;

class Weapon:public CCNode
{
public:
	static Weapon * create(CannonType type = k_Cannon_Type_1);
	bool init(CannonType type = k_Cannon_Type_1);
	CannonType getCannonType();
	CCSize getCannonSize();
	void changeCannon(CannonOperate operate);
	~Weapon();
	void aimAt(CCPoint target);
	void shootTo(CCPoint target);
protected:
	CC_SYNTHESIZE_READONLY(Cannon *,_cannon,Cannon);
	CC_SYNTHESIZE_READONLY(CCArray *,_bullets,Bullets);
	CC_SYNTHESIZE_READONLY(CCArray *,_fishNets,FishNets);
	CC_SYNTHESIZE_READONLY(CCArray *,_particils,CCParticleSystemQuad);
	Bullet *getBulletToShoot();
private:
};
#endif