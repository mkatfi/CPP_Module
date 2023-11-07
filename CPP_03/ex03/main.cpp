
#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap asd( "Ash" );
    DiamondTrap asd2( "BOO" );
    DiamondTrap asd3("...");

    asd.whoAmI();
    asd2.whoAmI();
    asd3 = asd;
    asd3.whoAmI();

    asd.attack( "the air" );
    asd.takeDamage( 10 );
    asd.beRepaired( 10 );

    asd3.attack( "the air" );
    asd3.takeDamage( 10 );
    asd3.beRepaired( 10 );
    return 0;
}