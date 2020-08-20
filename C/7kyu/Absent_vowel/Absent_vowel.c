/***************************************
#Name   : Absent_vowel  
#Author : Luis Teixeira  
#Date   : 21-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include "ctype.h"

int absent_vowel(const char *str_in) {

    //pointer to char array
    char *ptr = str_in;
    char aux;
    int la = 0;
    int le = 0; 
    int li = 0; 
    int lo = 0;
    int lu = 0;

    while(*ptr != '\0')
    {
      aux = tolower(*ptr);

      switch(aux)
      {
        case 'a': {  la++; break; }
        case 'e': {  le++; break; }
        case 'i': {  li++; break; }
        case 'o': {  lo++; break; }
        case 'u': {  lu++; break; }
      }    
      
      ptr++;
    }
    
    
    if (la == 0)
    {
      return 0;
    }
    
    if (le == 0)
    {
      return 1;
    }
    
    if (li == 0)
    {
      return 2;
    }
    
    if (lo == 0)
    {
      return 3;
    }
    
    if (lu == 0)
    {
      return 4;
    }

}