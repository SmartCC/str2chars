#include<R.h>
#include<Rdefines.h>
#include<wchar.h>

SEXP cstr2chars(SEXP str,SEXP n)
{
  str = AS_CHARACTER(str);
  int *i,j;
  n = AS_INTEGER(n);
  i = INTEGER_POINTER(n);
  
  SEXP chars;
  //NEW_开头的宏是分配内存，分配的长度为传入的参数
  chars=NEW_STRING(*i);
  const char *cs = STRING_VALUE(str);
  char a[2];
  a[1]='\0';
  
  for(j=0; j<*i;j++)
  {
    a[0]=cs[j];
    SET_STRING_ELT(chars,j,CREATE_STRING_VECTOR(a));
  }
  
  return(chars);
}