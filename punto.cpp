#include <iostream>

using namespace std;

class Punto
{
	protected:
	float x;
	float y;

	public:
	Punto();
	Punto(float, float);

	void ColocaX(float);
	void ColocaY(float);

	float DameX();
	float DameY();
};

Punto::Punto():
	x(0),
	y(0)
{

}

Punto::Punto(float nx, float ny) :
	x(nx),
	y(ny)
{

}

void Punto::ColocaX(float nx)
{
	x = nx;
}

void Punto::ColocaY(float ny)
{
	y = ny;
}

float Punto::DameX()
{
	return x;
}

float Punto::DameY()
{
	return y;
}


int main()
{
	Punto P;

	float f;

	cout << "Programa Punto." << endl << endl;
	cout << "Introduzca el punto." << endl;
	cout << "X: ";
	cin>> f;
	P.ColocaX(f);

	cout << "Y: ";
	cin>> f;
	P.ColocaY(f);

	cout << endl << "El punto introducido es P(" << P.DameX() << "," << P.DameY() <<")."<<endl;

	return 0;
}