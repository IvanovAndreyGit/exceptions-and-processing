#include <iostream>

int func(std::string str, int forbidden_length)
{
    int length = str.length();
    if (forbidden_length != length)
    return length;
    throw "You have entered word of forbidden length! Bye";
    
}

int main()
{
    
    int forbidden_length;
    std::string str;
    int length;

    std::cout << "Enter forbidden length: ";
    std::cin >> forbidden_length;

    do
    {
        std::cout << "Enter word: ";
        std::cin >> str;
        try
        {
            length = func(str, forbidden_length);
            std::cout << "Word legth \"" << str << "\" is equal " << length << std::endl;
        }
        catch (const char * err_msg)
        //catch (...)
        {
            std::cout << err_msg << std::endl;
            return 0;
        }
       
    } 
    while(true);

}

