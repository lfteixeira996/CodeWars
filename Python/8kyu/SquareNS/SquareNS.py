##############################################  
#Name   : SquareNS  
#Author : Luis Teixeira  
#Date   : 22-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def square_sum(numbers):
    
    result = 0
    
    for x in range(0, len(numbers)):
        result += numbers[x]*numbers[x]
        
    return result