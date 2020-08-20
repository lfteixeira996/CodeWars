##############################################  
#Name   : My_Languages  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def my_languages(results):
    
    #create empty list --> return
    list = []
    
    
    #sort dict by value in a reverse order
    listofTuples = sorted(results.items() , reverse=True, key=lambda x: x[1])
    
    # Iterate over the sorted sequence
    for elem in listofTuples :
        
        if elem[1] >= 60:
            list.append(elem[0])
    
    return list