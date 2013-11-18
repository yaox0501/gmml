#include "../includes/Geometry/coordinate.hpp"

using namespace Geometry;

//////////////////////////////////////////////////////////
//                       Constructor                    //
//////////////////////////////////////////////////////////
Coordinate::Coordinate() : x_(0.0), y_(0.0), z_(0.0) {}

Coordinate::Coordinate(double x, double y, double z) : x_(x), y_(y), z_(z) {}

Coordinate::Coordinate(const Coordinate &coordinate) : x_(coordinate.x_), y_(coordinate.y_), z_(coordinate.z_) {}

//////////////////////////////////////////////////////////
//                           ACCESSOR                   //
//////////////////////////////////////////////////////////
double Coordinate::GetX()
{
    return x_;
}

double Coordinate::GetY()
{
    return y_;
}

double Coordinate::GetZ()
{
    return z_;
}

//////////////////////////////////////////////////////////
//                           MUTATOR                    //
//////////////////////////////////////////////////////////
void Coordinate::SetX(double x)
{
    x_ = x;
}

void Coordinate::SetY(double y)
{
    y_ = y;
}

void Coordinate::SetZ(double z)
{
    z_ = z;
}

//////////////////////////////////////////////////////////
//                         FUNCTIONS                    //
//////////////////////////////////////////////////////////
void Coordinate::Translate(double x, double y, double z)
{
    x_ += x;
    y_ += y;
    z_ += z;
}

//////////////////////////////////////////////////////////
//                     DISPLAY FUNCTIONS                //
//////////////////////////////////////////////////////////
void Coordinate::Print(std::ostream& out)
{
    out << std::setw(10) << x_ << ", " << std::setw(10) << y_ << ", " << std::setw(10) << z_;
}


