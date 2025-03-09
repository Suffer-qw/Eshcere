//меня не было
#include <iostream>
   
class Shape
{
public:
    virtual double getSquare() const = 0;     // площадь фигуры
    virtual double getPerimeter() const = 0;  // периметр фигуры
};
class Rectangle : public Shape  // класс прямоугольника
{
public:
    Rectangle(double w, double h) : width(w), height(h)
    { }
    double getSquare() const override
    {
        return width * height;
    }
    double getPerimeter() const override
    {
        return width * 2 + height * 2;
    }
private:
    double width;   // ширина
    double height;  // высота
};
class Circle : public Shape     // круг
{
public:
    Circle(double r) : radius(r) 
    { }
    double getSquare() const override
    {
        return radius * radius * 3.14;
    }
    double getPerimeter() const override
    {
        return 2 * 3.14 * radius;
    }
private:
    double radius;  // радиус круга
};
  
int main()
{
    Rectangle rect{30, 50};
    Circle circle{30};
      
    std::cout << "Rectangle square: " << rect.getSquare() << std::endl;
    std::cout << "Rectangle perimeter: " << rect.getPerimeter() << std::endl;
    std::cout << "Circle square: " << circle.getSquare() << std::endl;
    std::cout << "Circle perimeter: " << circle.getPerimeter() << std::endl;
}
