#include <stdio.h>
#include "break_on_sth.h"

#include <vector>
#include <string>

int main( int argc, const char* argv[] )
{
    int re = 1;
    do
    {
        BREAK_ON_FALSE( argc >= 3, "Need 2 params" );

        LOG_DEBUG_VALUE( argc, argv[0], argv[1], argv[2] );

        std::vector<std::string> test;
        test.push_back( "hello" );
        test.push_back( "world" );
        test.push_back( argv[1] );
        test.push_back( argv[2] );

        LOG_DEBUG_VALUE( test );

        re = 0;
    } while ( false );
    return re;
}
