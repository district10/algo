#include <3rdParty/gmock/gtest/gtest.h>
#include <algo/SimpleStdCpp.h>

TEST( atoiTest, positive )
{
    EXPECT_EQ(               5, algo::atoi(           "5" ) );
    EXPECT_EQ(       123456789, algo::atoi(   "123456789" ) );
    EXPECT_EQ(       123456789, algo::atoi( "  123456789" ) );
    EXPECT_EQ(       123456789, algo::atoi( " +123456789" ) );
}

TEST( strlenTest, str )
{
    EXPECT_EQ(               0, algo::strlen(                "" ) );
    EXPECT_EQ(               1, algo::strlen(               "1" ) );
    EXPECT_EQ(               2, algo::strlen(              "12" ) );
    EXPECT_EQ(               3, algo::strlen(             "19n" ) );
    EXPECT_EQ(               4, algo::strlen(            "abcd" ) );
    EXPECT_EQ(              10, algo::strlen(      "0123456789" ) );
}

TEST( strlenAlt1Test, str )
{

    EXPECT_EQ(               0, algo::strlen_alt1(           "" ) );
    EXPECT_EQ(               1, algo::strlen_alt1(          "1" ) );
    EXPECT_EQ(               2, algo::strlen_alt1(         "12" ) );
    EXPECT_EQ(               3, algo::strlen_alt1(        "19n" ) );
    EXPECT_EQ(               4, algo::strlen_alt1(       "abcd" ) );
    EXPECT_EQ(              10, algo::strlen_alt1( "0123456789" ) );
}

/*
TEST( strcpyTest, str )
{
    char from1[100] = "good", to1[100] = {0};
    algo::strcpy( to1, from1 );
    EXPECT_STR_EQ( from1, to1 );

    char from2[100] = "good", to2[100] = {0};
    algo::strcpy( to2, from2 );
    EXPECT_STR_EQ( from2, to2 );

    char from3[100] = "good", to3[100] = {0};
    algo::strcpy( to3, from3 );
    EXPECT_STR_EQ( from3, to3 );
}
*/
