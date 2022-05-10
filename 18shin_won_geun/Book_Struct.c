#include <stdio.h>
typedef struct{
    char name[30];
}Book;
void copy_str(Book *book, char *name)
{
    for(int i=0;i<30;i++)
        book->name[i]=name[i];//
}
int main()
{
    Book potter;
    char name[30];
    copy_str(&potter, "HARRY POTTER");
    printf("%s\n", potter.name);
    return 0;
}
