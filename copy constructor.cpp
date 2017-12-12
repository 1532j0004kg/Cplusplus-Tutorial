#include <iostream>

using namespace std;

class square
{
    private :
       int l , b , area;
    public : 
        square(int length)
        {
            l = length;
            b = length;
            area=0;
            
        }
        //copy constructor
        square(const square& obj)
        {
            this->l = obj.l;
            this->b = obj.b;
            this->area = obj.area;
        }
        //
       square(int length , int breadth)
       {
         l = length;
         b = breadth;
         area=0;
       }
       void calculateArea()
       {
          area =  b * l;
       }
       int printArea()
       {
          return area ;
       }
};
int main()
{
    square square1(9);
    square square2(3,4);
    //invoke copy constructor
    square square3(square1);
    square3.calculateArea();
    cout<<"area of the sq : "<<square3.printArea()<<endl;
    //
    square1.calculateArea();
    
    cout<<"Area of the square :"<<square1.printArea()<<endl;
    square2.calculateArea();
   
     cout<<"Area of the rectangle :"<< square2.printArea() ;
    return 1;
}
