#include"martin.h"

//只需要在定义的时候加static
int martin::count = 0;

martin::martin()
{
	count++;
}

martin::~martin()
{
	count--;
}

void martin::fight()
{


}

void martin::hide()
{

}

int martin::getCout()
{
	return count;
}

