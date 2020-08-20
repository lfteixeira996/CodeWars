##############################################  
#Name   : Mumbling  
#Author : Luis Teixeira  
#Date   : 09-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def accum(s):
    
    i = 1
    str = ''
    to_upper = True
    len_s = len(s)
    
    for char in s:
        
        to_upper = True
        
        for x in range(0, i):
            
            if(to_upper): 
                str += char.upper()
                to_upper = False
    
            else:
                str += char.lower()
                
        i +=1
        if(i <= len_s):
            str += '-'

    return str