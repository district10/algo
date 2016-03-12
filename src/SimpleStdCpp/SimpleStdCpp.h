#ifndef ALGO_SIMPLE_STD_CPP_H
#define ALGO_SIMPLE_STD_CPP_H

namespace algo {

size_t strlen( const char *str );
char *strcpy( char *to, const char *from  );
int atoi( const char *str );
int kmp( const char *text, const char *pattern );

} // end of namespace algo

#endif