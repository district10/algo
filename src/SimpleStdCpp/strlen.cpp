#include <algo/SimpleStdCpp.h>

size_t algo::strlen( const char *str )
{
    const char *s;
    for( s=str; *s; ++s ) { }
    return s-str;
}

// alternative 1
size_t algo::strlen_alt1( const char *str )
{
    size_t i = 0;
    while(*str++) { ++i; }
    return i;
}
