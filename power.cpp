#include<iostream>
using namespace std;

int power( int x , int n )
{
    static long long int output = 1;
    //Base case : power = 0  then x raised to the powwer = 0 then it return 1
    if( n == 0 )
        return 1;

    //edge case if x = 0 , then output  = 0 
    if( x == 0 )
       return 0;
    
    output *= x;

    int smalleroutput = power( x , n - 1 );

    return output;

}

int main( )
{
    int x = 2;
    int n = 4;

    cout<<power( x , n );
}