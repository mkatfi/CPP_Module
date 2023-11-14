
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "<Brain :> Default Contructor created." << std::endl;
}


Brain::Brain( const Brain& src )
{
    // std::cout << "<Brain :> Copy constructor called" << std::endl;
    *this = src;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "<Brain :> Brain copy Assignment Operator called." << std::endl;
    if ( this != &src ) 
    {
        for ( int i = 0; i < 100; i++ ) 
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "<Brain :> destroyed called." << std::endl;
}