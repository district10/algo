#include <3rdParty/gmock/gtest/gtest.h>
#include <algo/SimpleStdCpp.h>

TEST( atoiTest, positive )
{
    EXPECT_EQ(               5, algo::atoi(           "5" ) );
    EXPECT_EQ(       123456789, algo::atoi(   "123456789" ) );
    EXPECT_EQ(       123456789, algo::atoi( "  123456789" ) );
    EXPECT_EQ(       123456789, algo::atoi( " +123456789" ) );
}