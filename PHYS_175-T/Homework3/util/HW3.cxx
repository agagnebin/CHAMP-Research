#include "../homework3/xrange.h"
#include "../homework3/y1.h"
#include "../homework3/y2.h"

/*void XRange::setX(vector<int> range)
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

int Y11::getY1(int b)
{
        return pow(getX(b), 2);
}

int Y21::getY2(int c)
{
        return pow(getX(c), 3);
}*/

int main()
{
    vector<int> xrange;
    for (unsigned int i = 1; i <=6; i++)
    {
        xrange.push_back(i);
    }
	XRange xran;
	xran.setX(xrange);

	Y11 y1;
    y1.setX(xrange);

	Y21 y2;
    y2.setX(xrange);

	for (unsigned int i=0; i < 6 ; i++)
	{
		cout << xran.getX(i) << " " << y1.getY1(i) << " " << y2.getY2(i) << endl;
	}
}




