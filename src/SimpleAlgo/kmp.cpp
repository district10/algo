#include <algo/SimpleAlgo.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

static void init_kmp_partial_match_table( const char *pattern, int *table )
{
    // TODO
    /*
    assert( strlen(pattern) == sizeof(table) && "same size" );
    
    int len = sizeof( table );
    int pos = 2; // table
    int cnd = 0; // pattern

    table[0] = -1;
    table[1] = 0;

    while( pos < len ) {
        if ( pattern[pos-1] == pattern[cnd] ) {
            table[pos] = cnd + 1;
            ++cnd;
            ++pos;
        } else if ( cnd > 0 ) {
            cnd = table[cnd];
        } else {
            table[pos] = 0;
            ++pos;
        }
    }
    */
}

int algo::kmp( const char *text, const char *pattern )
{
    /*
    if ( !text || !pattern ) { return -1; }

    int n = strlen( text );
    int m = strlen( pattern );
    int *table = (int *)malloc( sizeof(int) * m );
    init_kmp_partial_match_table( pattern, table );

    int i = 0;
    while( text ) {
        if ( *text == pattern[i] ) {
            i += 1;
        } else {
            i = i > 0 ? table[i-1] : 0;
        }
        ++text;
    }
    */
    return 0;
}
