#include <iostream>

using namespace std;

class Shape
{
    protected :
       float area;
       float radius;
    public :
      Shape()
      {
          cout<<"I am a shape"<<endl;
      }
     
};

class Circle : public Shape
{
    public :
    Circle()
    {
        radius = 5.00;
    }
       void calculateArea()
       {
           area = 3.14 * radius * radius;
       }
       float getArea()
       {
           return area;
       }
};

class Square : public Shape
{
    public:
       Square()
       {
         radius = 5.00;
       }
       void calculateArea()
       {
           area = radius  * radius;
       }
       float getArea()
       {
           return area;
       }
      
};
int main() {

    Circle ball;
    ball.calculateArea();
    cout<<"Area of the ball : "<<ball.getArea()<<endl;

    Square cube;
   cube.calculateArea();
   cout<<"Area of the sqare : "<<cube.getArea()<<endl;
   return 1;

}
