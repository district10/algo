#include <AlgoConfigs.h>
#include <SimpleStdCpp/SimpleStdCpp.h>
#include <3rdParty/cppformat/format.h>

#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void test_algo_strlen();
void test_algo_strcpy();
void test_algo_atoi();

int main( void )
{
    test_algo_strlen();
    test_algo_strcpy();
    test_algo_atoi();


    std::string foo(fmt::format("A number ({}) and a character ({}).\n", 18, 'a'));
    std::cout << foo;

    return 0;
}

void test_algo_strlen()
{
    std::cout << "testing strlen...\n";
#define TEST_STRLEN( buf, len ) \
    assert( algo::strlen(buf) == len && buf ); \
    printf( "\tlen of \"%s\":\t\t%d.\n", buf, (int)algo::strlen(buf) ); \

    TEST_STRLEN( "1234567890", 10 )
    TEST_STRLEN( "123",         3 )
    TEST_STRLEN( "",            0 )

#undef TEST_STRLEN

    std::cout << "testing strlen... done.\n\n";
}

void test_algo_strcpy()
{
    printf( "testing strcpy...\n" );
#define TEST_STRCPY( to, from ) \
    algo::strcpy( to, from ); \
    assert( strcmp( to, from ) == 0 && "should be equal after cpy." ); \
    printf( "\tcopied \"%s\"\n", to );

    char buf[100];

    TEST_STRCPY( buf, "hello world." )
    TEST_STRCPY( buf, "How do you do?" )
    TEST_STRCPY( buf, "" )
    TEST_STRCPY( buf, "new line\nvertical tab\t" )

#undef TEST_STRCPY

    printf( "testing strcpy... done.\n\n" );
}

void test_algo_atoi()
{
    printf( "testing atoi...\n" );
#define TEST_ATOI( a, i ) \
    assert( algo::atoi(a) == i && "should be equal after parsing." ); \
    printf( "\t\"%s\" -> %d\n", a, i );

    TEST_ATOI( "45",         45 );
    TEST_ATOI( "-23",       -23 );
    TEST_ATOI( "   -34  ",  -34 );
    TEST_ATOI( "   +98  ",  +98 );
    TEST_ATOI( "   012  ",   12 );
    TEST_ATOI( "",            0 );
    TEST_ATOI( "0",           0 );
    TEST_ATOI( "123456", 123456 );
    TEST_ATOI( "12 3456",    12 );

    char a[512];
    int i;
    const char *fpath = Algo_Data_Dir "/atoi-cases.txt";
    FILE *fp = fopen( fpath, "r" );
    if ( fp ) {
        while ( 2 == fscanf( fp, "%s\t%d\n", a, &i ) ) {
            TEST_ATOI( a, i );
        }
    } else {
        std::cerr << "Loading testing data failed at " << fpath;
    }
    fclose( fp );

#undef TEST_ATOI

    printf( "testing atoi... done.\n\n" );
}
