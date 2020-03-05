#include <stdio.h>

#define MAXLINES 1000

char* lineptr[MAXLINES];

int readlines(char* lineptr[], int nlines);
void writelines(char* lineptr[], int nlines);
void qsort_(char* lineptr[], int left, int right);
void swap(char* v[], int i, int j);
char* alloc(int);
int getline(char*, int);

int main(int argc, const char* argv[]) {
  int nlines;

  if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qsort(lineptr, 0, nlines -1);
    writelines(lineptr, nlines);
    return 0;
  } else {
    printf("error: input too big to sort\n");
    return 1;
  }
  return 0;
}
