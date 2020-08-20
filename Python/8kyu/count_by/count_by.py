##############################################  
#Name   : count_by  
#Author : Luis Teixeira  
#Date   : 28-06-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  

def count_by(x, n):
    """
    Return a sequence of numbers counting by `x` `n` times.
    """
    out = x
    thislist = []
    
    for z in range(n):
        thislist.append(out)
        out += x
    
    
    return thislist