#include <iostream>

using namespace std;

class Employee
{
    private :
      float basic , pf , hra , da , esi , netPay , allowance , deduction , hm = 0;
      string dept , name , id ;
      int yrs;
    public :
        Employee(string employeeName,string employeeId,string departmentName,int yearsOfExperience)   
        {
              name = employeeName;
              id = employeeId;
              dept = departmentName;
              yrs = yearsOfExperience;
               if(yrs == 0)
               {
                   basic = 5000;
               }
               else
               {
                   basic = 7000; 
               }
               da = basic * 0.1;
               hra = basic * 0.2;
               pf = basic * 0.3;
               esi = basic * 0.3;
               
               
               allowance = da + hra;
               deduction = pf + esi;
               
               netPay = basic + allowance - deduction;
        }   
        float net()
        {
            return netPay;
        }
        string nam()
        {
            return name;
        }
        string dep()
        {
            return dept;
        }
        string idd()
        {
            return id;
        }
        int yr()
        {
            return yrs;
        }
     
};

int main()
{
    Employee dinesh("dinesh","1532j0004","developer",0);
    cout<<"ID                  : "<<dinesh.idd()<<endl;
    cout<<"Name                : "<<dinesh.nam()<<endl;
    cout<<"department          : "<<dinesh.dep()<<endl;
    cout<<"years of experience : "<<dinesh.yr()<<endl;
    cout<<"Salary              : "<<dinesh.net()<<endl<<endl;
    
    Employee david("david","1532j0003","analyst",0);
    cout<<"ID                  : "<<dinesh.idd()<<endl;
    cout<<"Name                : "<<dinesh.nam()<<endl;
    cout<<"department          : "<<dinesh.dep()<<endl;
    cout<<"years of experience : "<<dinesh.yr()<<endl;
    cout<<"Salary              : "<<dinesh.net()<<endl;
    
    return 1;
}
