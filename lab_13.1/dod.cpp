#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod()
{
	a *= ((1.0 * (2 * n - 1) / (2 * n)) * (1.0 * (2 * n - 1) / (2 * n + 1)) * (x * x));
}