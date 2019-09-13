#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Point3D
{
private:
    double x, y, z;
public:
    Point3D(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    double distanceFrom(double xVal, double yVal, double zVal)
    {
        return sqrt(pow(x-xVal, 2)+pow(y-yVal, 2)+pow(z-zVal, 2));
    }
    double distanceFromCenter()
    {
        return distanceFrom(0,0,0);
    }
    double distanceFrom(Point3D other)
    {
        return sqrt(pow(x-other.x, 2)+pow(y-other.y, 2)+pow(z-other.z, 2));
    }
    void details()
    {
        cout << "x= " << x << "\ty= " << y << "\tz= " << z << endl;
    }
};

int main()
{
    Point3D point1(2,3,4), point2(3,7,8);
    cout << "point1:"<<endl;
    point1.details();
    cout << "point2:"<<endl;
    point2.details();
    cout << "The distance between point1 and (0,0,0) is : " << point1.distanceFromCenter() << endl;
    cout << "The distance between point1 and point2 is : " << point1.distanceFrom(point2) << endl;
}
