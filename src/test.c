#include <stdio.h>
#include "wheels/c.h"

int main( void )
{
    char *buf = "1234567890";
    printf( "len of buf(\"%s\"): %d\n", buf, tzx_strlen(buf) );
    return 0;
}
