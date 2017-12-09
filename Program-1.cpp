#include <iostream>

using namespace std;

class Employee
{
    private :
      float basic , pf , hra , da , esi , netPay , allowance , deduction;
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
        float print()
        {
            return netPay;
        }
};

int main()
{
    Employee dinesh("dinesh","1532j0004kg","developer",0);
    dinesh.print();
    cout<<"Netpay for dinesh : "<<dinesh.print();
    return 1;
}
