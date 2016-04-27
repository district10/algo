#ifndef ALGO_SIMPLE_ALGO_H
#define ALGO_SIMPLE_ALGO_H

namespace algo {

int kmp( const char *text, const char *pattern );
int boyer_moore(const char *text, const char *pattern);
int rabin_karp(const char *text, const char *pattern);

} // end of namespace algo

#endif
