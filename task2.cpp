#include<iostream>
#include<cstring>

using namespace std;

class Point
{
    public:
        double x, y;
        Point( double x = 0, double y = 0 ) : x(x), y(y) {}
};

class Line
{
    public:
    Point A,B;
        Line(Point A = Point(), Point B = Point()) : A(A), B(B) {}
        double slope(){
            return (B.y - A.y) / (B.x - A.x);
        }
};

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Point A(x1, y1), B(x2, y2), C(x3, y3), D(x4, y4);
    Line AB(A, B), CD(C, D);

    if (AB.slope() == CD.slope())
    {
        if (A.y - AB.slope() * A.x == C.y - CD.slope() * C.x)
            cout << "MANY" << endl;
        else
            cout << "NO" << endl;
    } else {
        double x = (C.y - A.y + AB.slope() * A.x - CD.slope() * C.x) / (AB.slope() - CD.slope());
        double y = AB.slope() * (x - A.x) + A.y;
        cout << x << ' ' << y << endl;
    }
    return 0;
}