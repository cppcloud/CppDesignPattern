#include "AccelAdapter.h"

bool AccelAdapter::Up() {
	return GetVerticalAxis() > 0 ;
}

bool AccelAdapter::Down() {
	return GetVerticalAxis() < 0 ;
}

bool AccelAdapter::Left() {
	return GetHorizontalAxis() < 0 ;
}

bool AccelAdapter::Right() {
	return GetHorizontalAxis() > 0 ;
}
std::pair<int, int> AccelAdapter::Initialize() {
	return {-1, 1} ;
}
