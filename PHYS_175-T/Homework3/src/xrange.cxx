#include "../homework3/xrange.h"

void XRange::setX(vector<int> range)
{
        for (unsigned int i=0; i<range.size(); i++)
        {
                x.push_back(range.at(i));
        }
}

int XRange::getX(int a)
{
        return x.at(a);
}
