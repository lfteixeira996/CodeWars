##############################################  
#Name   : Replace_Alph  
#Author : Luis Teixeira  
#Date   : 16-12-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def alphabet_position(text):

    ret = ""
 
    for letter in text:
      letter_2 = letter.lower()
      
      if letter_2.isalpha():
          ret += str(ord(letter_2)-96) + ' '
           
    #remove last character --> ' '
    ret = ret[:-1:]
    
    return ret