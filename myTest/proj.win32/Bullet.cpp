#include "Bullet.h"

CCPoint Bullet :: getCollisionPoint()
{
	return getParent()->converToWorldSpace(getPosition());
}