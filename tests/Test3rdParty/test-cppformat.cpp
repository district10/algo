#include <3rdParty/cppformat/format.h>
#include <3rdParty/gmock/gtest/gtest.h>

TEST( cppformat, cstr )
{
    EXPECT_STREQ( "Hello GTest"
                 , std::string("Hello GTest").c_str() );
    EXPECT_STREQ( "2: 50"
                 , fmt::sprintf("{}: {}\n", 2, "50").c_str() );
}
