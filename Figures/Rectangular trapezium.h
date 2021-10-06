#pragma once
#include "Figures.h"


class Rectangular_trapezium :
	public Figures
{
private:
	double height; // Высота трапеции
	double a; // Меньшее основание трапеции
	double b; // Большее основание трапеции
public:

	Rectangular_trapezium(double a, double b, double height, string name) : a{ a }, b{ b }, height{ height }  {
		this->name = name;
		cornerCount = 4;
		recalculatePS();
	};

	void recalculatePS();

	void set_a(double a) { this->a = a; recalculatePS(); }
	void set_b(double b) { this->b = b; recalculatePS(); }
	void set_h(double h) { this->height = h; recalculatePS(); }

};