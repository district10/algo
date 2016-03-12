#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "wheels/c.h"

void test_tzx_strlen();
void test_tzx_strcpy();
void test_tzx_atoi();

int main( void )
{
    test_tzx_strlen();
    test_tzx_strcpy();
    test_tzx_atoi();
    return 0;
}

void test_tzx_strlen()
{
    printf( "testing strlen...\n" );
#define TEST_STRLEN( buf, len ) \
    assert( tzx_strlen(buf) == len && buf ); \
    printf( "\tlen of \"%s\":\t\t%d.\n", buf, tzx_strlen(buf) );

    TEST_STRLEN( "1234567890", 10 )
    TEST_STRLEN( "123",         3 )
    TEST_STRLEN( "",            0 )

#undef TEST_STRLEN

    printf( "testing strlen... done.\n\n" );
}

void test_tzx_strcpy()
{
    printf( "testing strcpy...\n" );
#define TEST_STRCPY( to, from ) \
    tzx_strcpy( to, from ); \
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

void test_tzx_atoi()
{
    printf( "testing atoi...\n" );
#define TEST_ATOI( a, i ) \
    assert( tzx_atoi(a) == i && "should be equal after parsing." ); \
    printf( "\t\"%s\" -> %d\n", a, i );

    TEST_ATOI( "45",         45 );
    TEST_ATOI( "-23",       -23 );
    TEST_ATOI( "   -34  ",  -34 );
    TEST_ATOI( "   +98  ",  +98 );
    TEST_ATOI( "   012  ",   12 );
    TEST_ATOI( "",            0 );
    TEST_ATOI( "0",           0 );
    TEST_ATOI( "123456", 123456 );

#undef TEST_ATOI

    printf( "testing atoi... done.\n\n" );
}
