#include <iostream>

using namespace std;

class circle
{
    private:
       double area=0;
    public:

    double calculateArea(double breadth , double height)
    {
        area = 1/3 * breadth * height;
    }
    double printArea()
    {
        return area;
    }
    double calculateArea(double radius)
    {
        area = 3.14 * radius * radius;
    }
    double printArea1()
    {
        // cout<<"Area of the circle : "<<area<<endl;
      return area;
        
    }
};
int main()
{
    circle ball;
    ball.calculateArea(2,2);
    ball.printArea();
    cout<<"Area of the circle : "<<area<<endl;
    ball.calculateArea(2);
    ball.printArea1();
    cout<<"Area of the recatangle :"<<area;
    return 1;
}
