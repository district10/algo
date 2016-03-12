#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

size_t tzx_strlen( const char *str )
{
    const char *s;
    for( s=str; *s; ++s ) { }
    return s-str;
}

char *tzx_strcpy( char *to, const char *from  )
{
    assert( to && from && "should be both valid." );
    char *p = to;
    while( (*p++=*from++) != 0 ) { }
    return to;
}

int tzx_atoi( const char *str )
{
    if ( !str ) { return 0; }

    int len = strlen( str );
    int sign = 1;

    const char *p = str;
    while ( *p == ' ' ) {
        ++p;
    }

    if ( *p == '+' ) { sign = +1; ++p; }
    if ( *p == '-' ) { sign = -1; ++p; }

    int i = 0;
    while( p && '0' <= *p && *p <= '9' ) {
        int d = *p - '0';
        i = i * 10 + d;
        ++p;
    }

    return i*sign;
}
