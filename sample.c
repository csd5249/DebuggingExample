#include <stdio.h>
#include <string.h>
#define MYSTRING "0123456789"

//poopy water

int func_a( int a, char *str ) {
    memcpy( str, MYSTRING, a );
    if ( strncmp(str, MYSTRING, a) == 0 ) {
        printf( "String matched [%10s]\n", str );
    } else {
        printf( "String not matched [%10s]\n", str );
    }
    return( 0 );
}

int func_b( int b ) {
    if ( b%54 == 33 ) {
        b = /*-*/100000;
    }
    return( b );
}

int main( int argv, char **argc ) {

    char *my_string, mstr[10];
    int i, b = 0;

    for ( i=0; i<100; i++ ) {
        if ( i == 19 ) {
            printf( "Hello there!\n" );
            my_string = mstr;
            func_a( 10, my_string ); // Bug two
        } else {
            b += func_b( i ); // Bug three
        }
        // i++;  // Bug one
    }

    if ( b < 0 ) {
        printf( "Bad value program broken [%d]\n", b );
    }
    
    return( 0 );
}
