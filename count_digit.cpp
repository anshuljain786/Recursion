#include<iostream>
using namespace std;

int count_digit( int num )
{
    static int count = 0 ;

    if( num == 0 )
        return 0;

    count += 1;

    
    int SmallCount =  count_digit( num / 10 );

    return count;
}
int main( void )
{
    cout<<count_digit( 12034500 );
}