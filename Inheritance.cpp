#include <iostream>

using namespace std;

class Animal
{
    protected : 
       int noOfLegs=4;
    public :
      Animal()
      {
          
          cout<<endl<<"I am an Animal"<<endl;
      }
      
      string move()
      {
          return "I can move";
      }
      
      int getNoOfLegs()
      {
          return noOfLegs; 
      }
     string makeSound()
      {
           return "I can make sound";
      }      
          
};
class Dog : public Animal
{
    private :
       int sniffingLevel;
    public :
       Dog()
       {
           sniffingLevel = 1;
       }
       string makeSound()
       {
         return "I can bark";
       }
       int sniff()
       {
           return sniffingLevel;
       }
};
class Horse : public Animal
{
    private :
       int runningSpeed;
    public :
          Horse()
          {
              runningSpeed = 80;
          }
          int speed()
          {
              return runningSpeed;
          }
    
};
class Donkey : public Animal
{
    private :
      string workingAbility;
    public :
       Donkey()
       {
           workingAbility = "high";
       }
       string work()
       {
           return workingAbility;
       }
};
int main()
{
    Animal petAnimal;
    cout<<"No of legs : "<<petAnimal.getNoOfLegs()<<endl;
    cout<<petAnimal.makeSound()<<endl;
    cout<<petAnimal.move()<<endl;
    
    Dog barker;
    cout<<barker.move()<<endl;
    cout<<barker.makeSound()<<endl;
    cout<<"Sniffing Level : "<<barker.sniff()<<endl;
 
    Horse healer;
    cout<<healer.move()<<endl;
    cout<<"Running speed : "<<healer.speed()<<endl;
    
    Donkey driver;
    cout<<driver.move()<<endl;
    cout<<"Working ability : "<<driver.work()<<endl;
    return 1;
}
