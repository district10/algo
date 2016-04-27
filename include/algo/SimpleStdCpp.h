#ifndef ALGO_SIMPLE_STD_CPP_H
#define ALGO_SIMPLE_STD_CPP_H

#include <cstddef>

namespace algo {

size_t strlen( const char *str );
size_t strlen_alt1( const char *str );
char *strstr( const char *haystack, const char *needle );
char *strcpy( char *to, const char *from );
int atoi( const char *str );

} // end of namespace algo

#endif
