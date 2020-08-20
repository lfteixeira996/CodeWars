##############################################  
#Name   : Mult_Table  
#Author : Luis Teixeira  
#Date   : 18-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  


def multiplication_table(size):
    table = []
    x = 1
    
    for j in range(size):
        row = []
        for i in range(1,size+1):
            row.append(i*x)
        table.append(row)

        x = x+1
        
    return table