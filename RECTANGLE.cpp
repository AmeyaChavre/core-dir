#include <iostream>
using namespace std;
class Point
{
public:
    void SetX(int x) { itsX = x ; }
    void SetY(int y) { itsY = y ; }
    int GetX() const {return itsX;}
    int GetY() const {return itsY;}
private:
    int itsX;
    int itsY;
};
class Rectangle
{
public:
    Rectangle(int top , int left, int bottom, int right);
    ~Rectangle() {};

    int GetTop() const {return itsTop;}
    int GetLeft() const {return itsLeft;}
    int GetBottom() const {return itsBottom;}
    int GetRight() const {return itsRight;}

    Point GetUpperLeft() const {return itsUpperLeft;}
    Point GetLowerLeft() const {return itsLowerLeft;}
    Point GetUpperRight() const {return itsUpperRight;}
    Point GetLowerRight() const {return itsLowerRight;}

    void  SetUpperLeft(Point Location) {itsUpperLeft=Location;}
    void SetLowerLeft(Point Location) {itsLowerLeft=Location;}
    void SetUpperRight(Point Location) {itsUpperRight=Location;}
    void SetLowerRight(Point Location) {itsLowerRight=Location;}

    void SetTop(int top) {itsTop=top;}
    void SetLeft(int left) {itsLeft=left;}
    void SetBottom(int bottom) {itsBottom=bottom;}
    void SetRight(int right) {itsRight=right;}

    int GetArea() const;

private:
    Point itsUpperLeft;
    Point itsLowerLeft;
    Point itsUpperRight;
    Point itsLowerRight;
    int itsTop;
    int itsLeft;
    int itsBottom;
    int itsRight;
};
Rectangle::Rectangle(int top,int left, int bottom,int right)
{

itsTop=top;
itsLeft=left;
itsBottom=bottom;
itsRight=right;

itsUpperLeft.SetX(left);
itsUpperLeft.SetY(top);

itsUpperRight.SetX(right);
itsUpperRight.SetY(top);

itsLowerLeft.SetX(left);
itsLowerLeft.SetY(bottom);

itsLowerRight.SetX(right);
itsLowerRight.SetY(bottom);

}

int Rectangle::GetArea() const
{
int Width=(itsRight-itsLeft);
int Height=(itsTop-itsBottom);
return (Width*Height);
}

int main()
{
Rectangle MyRectangle(100,20,50,80);
int Area=MyRectangle.GetArea();
cout << "Area: \n" << Area << endl;
cout << "Upper Left X Coordinate: " << MyRectangle.GetUpperLeft().GetX() << endl;
cout << "Upper Left Y Coordinate: " << MyRectangle.GetUpperLeft().GetY() << endl;
return 0;
}
