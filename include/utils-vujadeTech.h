#ifndef UTILS_H
#define UTILS_H

#define UTILS_H_ 1
#define DEFAULT_BUFFER_SIZE 20
#define MAXLINE 80 // max length of line in a file
#define NULL_CHAR = '\0';

void pf_int( const char *, int );
int getline_vt( char [], int );
void copy_vt( char to[], char from[] );
char * strrev_vt( char [] );
void swap_vt( int * , int * ); // Vuja de Tech
void swap_ch( char *, char* );
char* butLast ( char [] );
char* firstNull ( char * );
int isBlankOrTabQ( const char );
char * retreatWhile ( char * , const char );
char * retreatWhile_fp ( char *, int (* )( char ) , char );
int lineIsBlank( const char * );
//char * replaceFirst( char [], char , char  );
char * advanceUntil( char [], const char );
int is_z (const char c);

#endif
