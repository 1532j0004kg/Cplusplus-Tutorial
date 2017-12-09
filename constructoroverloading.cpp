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
    square1.calculateArea();
    
    cout<<"Area of the square :"<<square1.printArea()<<endl;
    square2.calculateArea();
   
     cout<<"Area of the rectangle :"<< square2.printArea() ;
    return 1;
}
