#include <math.h>
#include "agents.h"

double distance(struct agent a1, struct agent a2)
{
	return sqrt((a1.x-a2.x)*(a1.x-a2.x)+(a1.y-a2.y)*(a1.y-a2.y));
}
