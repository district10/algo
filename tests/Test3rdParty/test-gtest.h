#ifndef ALGO_TEST_GTEST_H
#define ALGO_TEST_GTEST_H

#include <algorithm>
#include <iostream>
#include <cmath>

// simple sorter for arrays
template <typename T>
void array_sort( T * arr, size_t len )
{
    std::sort( arr, arr+len );
}

double square_root( double d )
{
    if ( d < 0.0 ) { 
        std::cerr << "Error: Negative Input\n";
        exit( -1 );
    }
    return sqrt(d);
}

#endif