#include<iostream>
using namespace std;

void print1( int num )
{
    //Print numbers in reverse manner 
    if( num == 0 )
        return ;

    cout<<num<<" ";

    print1( num - 1 );

}

void print2( int num )
{
    //Print numbers in reverse manner 
    if( num == 0 )
        return ;


    print2( num - 1 );

        cout<<num<<" ";


}



int main( void )
{
    print1(5);
    cout<<endl<<"-----------------------------------------------------------------------"<<endl;
    print2(5);
}