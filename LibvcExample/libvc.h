void vc_putstr(char *str);
int vc_strlen(char *str);
void vc_swap(int *a, int *b);
int vc_strcmp(char *s1, char *s2);

#define MAX 1024 /* text replacement */

typedef char *string;

typedef struct sllist
{
    int data;
    struct sllist *next;
} sllnode;