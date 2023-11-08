
#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap asd( "Aisha" );
    DiamondTrap asd2( "BOJAMAA" );
    DiamondTrap asd3("WALID");

    asd.whoAmI();
    asd2.whoAmI();
    asd3 = asd;
    asd3.whoAmI();

    asd.attack( "THE HRAWA" );
    asd.takeDamage( 10 );
    asd.beRepaired( 10 );

    asd3.attack( "the box" );
    asd3.takeDamage( 10 );
    asd3.beRepaired( 10 );
    return 0;
}