#pragma once

#include <ostream>

namespace tracer::containers
{

class Vec3
{
public:
    Vec3(double xx=0, double yy=0, double zz=0);

    double dot(const Vec3& vec2) const;
    Vec3& norm();
    Vec3 mult(const Vec3& vec2) const;

    Vec3 operator+ (const Vec3& vec2) const;
    Vec3 operator- (const Vec3& vec2) const;
    Vec3 operator* (double number) const;
    Vec3 operator% (Vec3& vec2);
    friend std::ostream& operator<<(std::ostream& os, const Vec3& vec);

    double xx_;
    double yy_;
    double zz_;
};

} // namespace tracer::containers