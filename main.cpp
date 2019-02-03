#include <iostream>

int main() 
{
    std::cout <<"bool size:" << sizeof(bool)<< std::endl;
    std::cout <<"char size:" << sizeof(char)<< std::endl;
    std::cout <<"wchar_t size:" << sizeof(wchar_t)<< std::endl;
    std::cout <<"char16_t size:" << sizeof(char16_t)<< std::endl;
    std::cout <<"char32_t size:" << sizeof(char32_t)<< std::endl;
    std::cout <<"short size:" << sizeof(short)<< std::endl;
    std::cout <<"int size:" << sizeof(int)<< std::endl;
    std::cout <<"long size:" << sizeof(long)<< std::endl;
    std::cout <<"long long size:" << sizeof(long long)<< std::endl;
    std::cout <<"float size:" << sizeof(float)<< std::endl;
    std::cout <<"double size:" << sizeof(double)<< std::endl;
    std::cout <<"long double size:" << sizeof(long double)<< std::endl;
    
    return 0;
}