#include<iostream>
using namespace std;
int sum(int input[], int n) {
  

  static int sumi = 0 ;
    if( n == 0 )
      return sumi  ;

    sumi += input[0];
    
      return  sum( input+1 , n -  1 );


}

int main( void )
{
  int input[] = {1 , 2, 3 , 4, 5 } ;
  cout << sum( input,5 );
}
