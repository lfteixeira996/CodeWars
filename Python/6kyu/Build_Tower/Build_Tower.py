##############################################  
#Name   : Build_Tower  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def tower_builder(n_floors):
    
    list = []
    string = 

    for x in range(0,n_floors):
    	list.append('*' * (x*2+1))

    return list
    


print(tower_builder(2))    	