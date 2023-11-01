#include <iostream>
#include <cstring>
class branch
{
    private: //by default data members are private
        int roll;
        long int regis;
    public:
        char name[31];
        char branch[11];
        void result(float marks)
        {
            if (marks>=6 && marks<=10)
            {
                std::cout<<"Passed and promoted to 2nd year";
            }
            else
            {
                std::cout<<"Passed and promoted to 2nd year";
            }
            
        }
        int assign(int roll_no,int reg_no)
        {
            roll=roll_no;
            regis=reg_no;
        }
        void showprivatedata()
        {
            std::cout<<roll<<"\n"<<regis;
        }

};
class derived: private branch
{
    public:
        int a;
};

int main()
{
    branch stud;
    std::cin>>stud.name;
    std::cout<<stud.name;
    stud.result(9.37);
    stud.assign(22401,128040); //using private data
    stud.showprivatedata(); //showing private data
    derived child;
    child.a=9;
    std::cout<<child.a;
   
}