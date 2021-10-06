#include "Rectangular trapezium.h"

void Rectangular_trapezium::recalculatePS() {
	this->S = height * ((a + b) / 2);
	this->P = a + b + height + sqrt(pow(height, 2) + pow(b - a, 2));
	if (a == b) {
		this->P = b * (a - (a - b));
		this->S = a*b;

	}
};

