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
    protected :
       int sniffingLevel;
    public :
       Dog()
       {
           cout<<"I am dog"<<endl;
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
              cout<<"I am a horse"<<endl;
              runningSpeed = 80;
          }
          int speed()
          {
              return runningSpeed;
          }
    
};
//Multi level Inheritance
class PoliceDog:public Dog
{
    private:
        int age;
    public : 
       PoliceDog()
       {
           cout<<"I am a police dog"<<endl;
           cout<<"I am serving to Nation"<<endl;
           sniffingLevel = 5;
           age = 8 ;
       }
       int sniff()
       {
           return sniffingLevel;
       }
       int getAge()
       {
           return age;
       }
};
//end of multi level Inheritance
class Donkey : public Animal
{
    private :
      string workingAbility;
    public :
       Donkey()
       {
           cout<<"I am a donkey"<<endl;
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
    
    PoliceDog armer;
    cout<<"Sniffing Level : "<<armer.sniff()<<endl;
    cout<<"Age : "<<armer.getAge()<<endl;
    
 
    Horse healer;
    cout<<healer.move()<<endl;
    cout<<"Running speed : "<<healer.speed()<<endl;
    
    Donkey driver;
    cout<<driver.move()<<endl;
    cout<<"Working ability : "<<driver.work()<<endl;
    return 1;
}
