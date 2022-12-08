#include <iostream>
#include <math.h>
#include <iomanip>

#include "var.h"
#include "dod.h"
#include "sum.h"


using namespace std;

using namespace nsVar;
using namespace nsDod;
using namespace nsSum;


int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	x = xp;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "asin(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	while (x <= xk)
	{
		sum(); 
		cout << "|" << setw(5) << setprecision(2) << x << setw(5) << "|"
			<< setw(10) << setprecision(5) << asin(x) << setw(10) << "|"
			<< setw(7) << setprecision(4) << x+S << setw(7) << "|"
			<< setw(5) << n << setw(5) << "|"
			<< endl << "-------------------------------------------------------"
			<< endl;
		x += dx;
    }
 cin.get();
 return 0;
}
