#include "iostream"
#include "string"

class      Student
{
    private:
        std::string _login;//bfubar

    public:
        Student(std::string const & login) : _login(login)//login->bfubar
        {

        }

        void    setLogin(){
            std::transform(_login.begin(), _login.end(), _login.begin(), ::toupper);
        }

        std::string&        getLoginRef()
        {
            return this->_login;
        }

        std::string const & getLoginRefConst() const
        {

            return this->_login ;
        }

        std::string*        getLoginPtr()
        {
            return &(this->_login);
        }

        std::string const * getLoginPtrConst() const
        {
            return &(this->_login);
        }

};
/*
 *int main()
 * int a = 2;
 *  ft_cpp_function(a);  void
 *
 *
 * void     ft_cpp_function(a){
 *
 * a+= 2;
 *
 * }
 * */

int     main()
{

    //std::string  some = "bfubar";
    Student        bob = Student("bfubar"); //Student bob("bfbar");


    bob.setLogin();
    std::cout << bob.getLoginRef() << std::endl;



    Student const  jim = Student("jfubar");//Student const jim("Jfubar")



    std::cout << bob.getLoginRefConst()  << " " << jim.getLoginRefConst() << std::endl;




    std::cout << "!!!!!" << std::endl;
    std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

    bob.getLoginRef() = "bobfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    *(bob.getLoginPtr()) = "bobbyfubar";
    std::cout << bob.getLoginRefConst() << std::endl;
}