#include "../libmx/inc/libmx.h"
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <limits.h>
#include <stdbool.h>

int pf_sizeoffile(const char *file);
int pf_numbersofstrings(const char *file);
char **pf_stringtoarr(char *data, int sizeoffile);
