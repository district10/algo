#include <algo/SimpleAlgo.h>
#include <algo/SimpleNullcat.h>
#include <algo/SimpleStdCpp.h>
#include <algo/SimpleProblem.h>
#include <stdio.h>

void testKmp();
void testBoyerMoore();
void testRabinKarp();
void testHanoi();
void testBaseConvertion();

const char *text = "this is your life.";
const char *pattern = "is";

int main(int argc, char **argv)
{
    printf("TestDemo\n");

    /*
    // tested
    testKmp();
    testBoyerMoore();
    testRabinKarp();
    testHanoi();
    */

    return 0;
}

void testKmp()
{
    printf( "algo::kmp(\"%s\", \"%s\") = %d\n", text, pattern, algo::kmp(text,pattern) );
}

void testBoyerMoore()
{
    printf( "algo::boyer_moore(\"%s\", \"%s\") = %d\n", text, pattern, algo::boyer_moore(text,pattern) );
}

void testRabinKarp()
{
    printf( "algo::rabin_karp(\"%s\", \"%s\") = %d\n", text, pattern, algo::rabin_karp(text,pattern) );
}

void testHanoi()
{
    int num = 3;
    printf("total moves: %d\n", (1<<num)-1);
    algo::hanoi( num, 'x', 'y', 'z' );
}

void testBaseConvertion()
{
    algo::convert_base( 232 , 3);
}
