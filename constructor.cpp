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
      /* square(const obj& obj)
       {
           l = obj.l;
           
       }*/
       void calculateArea()
       {
          area =  b * l;
       }
       int printArea()
       {
          return area ;
       }
     /*  void calculateAreaRectangle(){
          area = 2 * l * b;
       }
       void printAreaRectangle()
       {
           cout<<"Area of the rectangle : "<<area <<endl;
       }*/
};
int main()
{
    square square1(9);
    square square2(3,4);
   // square area2(area1);
    square1.calculateArea();
    
    cout<<"Area of the square :"<<square1.printArea()<<endl;
    square2.calculateArea();
   
     cout<<"Area of the rectangle :"<< square2.printArea() ;
    return 1;
}