#ifndef UTILS_H
#define UTILS_H

#define UTILS_H_ 1
#define DEFAULT_BUFFER_SIZE 20
#define MAXLINE 80 // max length of line in a file

void pf_int( const char *, int );
int getline_vt( char [], int );
void copy_vt( char to[], char from[] );
char * strrev_vt( char [] );
void swap_vt( int * , int * ); // Vuja de Tech
void swap_ch( char *, char* );

#endif
