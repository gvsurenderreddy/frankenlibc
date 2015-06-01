#include <sys/types.h>
#include <sys/stat.h>

int filter_init(char *, int);
int filter_fd(int, int, struct stat *);
int filter_load_exec(char *, char **, char **);

int emptydir(void);
int colon_open(char *, char *);
int os_emptydir(void);
int os_post(void);
int os_open(char *, char *);
