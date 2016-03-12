#include "test-gtest.h"
#include <3rdParty/gmock/gtest/gtest.h>

TEST( array_sorter_test, char_arr_sort )
{
    char arr[] = {'a','b','c','d','e','f','g','h','a','b'};
    char eq[]  = {'a','a','b','b','c','d','e','f','g','h'};
    int sz = sizeof(arr)/sizeof(arr[0]);

    array_sort(arr, sz);

    for( int i=0; i<sz; ++i ) {
        EXPECT_EQ( arr[i], eq[i] );
    }
}

TEST( SquareRootTest, ZeroAndNegativeNos )
{ 
    ASSERT_EQ( 0.0, square_root(0.0) );
    ASSERT_EXIT( square_root(-22.0)
                , ::testing::ExitedWithCode(-1)
                , "Error: Negative Input\n" );
}

TEST( SquareRootTest, PositiveNos )
{ 
    ASSERT_NEAR( 18.0
                , square_root(324.0)
                , 1e-3 );
    ASSERT_NEAR( 25.4
                , square_root(645.16)
                , 1e-3 );
    ASSERT_NEAR( 50.3321
                , square_root(2533.310224)
                , 1e-3 );
}