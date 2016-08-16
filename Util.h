#pragma once
#include <DirectXMath.h>
#include <DirectXCollision.h>
using namespace DirectX;

#define F1 float
#define F2 XMFLOAT2
#define F3 XMFLOAT3
#define V XMVECTOR

namespace Util{

	F2 BasicTween(F2& position, F2 target, F1 ease);
	F2 GetDistanceVector2d(F2 position, F2 target);

}

