                     /* Without OOP concept */

    double calculateArea(double breadth , double height)
    {
        area = 1/3 * breadth * height;
    }
    double calculateArea(double radius)
    {
        area = 3.14 * radius * radius;
    }
 
        
    
int main()
{
    cout<<"Area of the circle : "<<calculateArea(2,2)<<endl;
    cout<<"Area of the recatangle :"<<calculateArea(2);
    return 1;
}
