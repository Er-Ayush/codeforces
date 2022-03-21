#include <iostream>
#include<vector>
#include <string>

using namespace std;

class Settlement
{
    public:

    template < typename T > static T input() {
        T value;
        cin >> value;
        return value;
    }
};
class Main
{
    private:
    static void main(std::vector<std::string> &args)
    {
        double amount;
        double dollar;
        double pound;
        double code;
        double euro;
        double rupee;
  
        std::cout << "1:Rupee \t2:Dollar \t3:Pound \n4:Euro"<<std::endl;
        code = Settlement::input<int>();
        std::cout << "How much money you want to convert?"<<std::endl;
        amount = Settlement::input<float>();
        if (code = 1)
        {
           
            dollar = amount / 74.39;
            std::cout << "Your " << std::to_string(amount) << " Rupee is : " << (dollar) << " Dollar"<<std::endl;
            pound = amount / 101.73;
            std::cout << "Your " << std::to_string(amount) << " Rupee is : " << (pound) << " Pound"<<std::endl;
            euro = amount / 84.91;
            std::cout << "Your " << std::to_string(amount) << " Rupee is : " << (euro) << " Euro"<<std::endl;
        }
        else
        {
            if (code = 2)
            {
                
                rupee = amount * 74;
                std::cout << "Your " << std::to_string(amount) << " Dollar is : " << (rupee) << " Rupees"<<std::endl;
                pound = amount * 0.73;
                std::cout << "Your " << std::to_string(amount) << " Dollar is : " << (pound) << " Pound"<<std::endl;
                euro = amount * 0.88;
                std::cout << "Your " << std::to_string(amount) << " Dollar is : " << (euro) << " Euro"<<std::endl;
            }
            else
            {
                if (code = 3)
                {
                   
                    rupee = amount * 101.73;
                    std::cout << "Your " << std::to_string(amount) << " pound is : " << (rupee) << " Rupees"<<std::endl;
                    dollar = amount * 1.37;
                    std::cout << "Your " << std::to_string(amount) << " pound is : " << (dollar) << " Dollar"<<std::endl;
                    euro = amount * 1.2;
                    std::cout << "Your " << std::to_string(amount) << " pound is : " << (euro) << " Euro"<<std::endl;
                }
                else
                {
                    if (code = 4)
                    {
                       
                        rupee = amount * 84.91;
                        std::cout << "Your " << std::to_string(amount) << " euro is : " << (rupee) << " Rupees"<<std::endl;
                        dollar = amount * 1.14;
                        std::cout << "Your " << std::to_string(amount) << " euro is : " << (dollar) << " Dollar"<<std::endl;
                        pound = amount * 0.83;
                        std::cout << "Your " << std::to_string(amount) << " euro is : " << (pound) << " Pound"<<std::endl;
                    }
                    else
                    {
                        std::cout << "Invalid input"<<std::endl;
                    }
                }
            }
        }
    }
};
int main()
{
    std::vector<std::string> parameter;
    Main::main(parameter);
    return 0;
};