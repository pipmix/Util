#include "Util.h"

F2 Util::GetDistanceVector2d(F2 position, F2 target){

	F2 temp;
	temp.x = target.x - position.x;
	temp.y = target.y - position.y;
	return temp;
}

F2 Util::BasicTween(F2& position, F2 target, F1 ease) {

	F2 distance = GetDistanceVector2d(position, target);
	F2 velocity;
	velocity.x = distance.x * ease;
	velocity.y = distance.y * ease;
	position.x += velocity.x;
	position.y += velocity.y;
	
}
