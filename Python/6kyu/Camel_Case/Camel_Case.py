##############################################  
#Name   : Camel_Case  
#Author : Luis Teixeira  
#Date   : 13-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def camel_case(string):
     
    #create list with the strings in "string" 
    list = string.rsplit(" ")
    ret = ""
       
    #capitalize each string 
    #add the capitalized string to the return string
    for word in list:
        ret += word.capitalize()
        
    return ret
    