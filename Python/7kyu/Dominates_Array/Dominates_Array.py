##############################################  
#Name   : Dominates_Array  
#Author : Luis Teixeira  
#Date   : 19-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
import operator

def dominator(arr):
    elem = len(arr)
    
    #create empty dictionary
    dict = {}
    
    for x in range(elem):
        
        dict[arr[x]] = dict.get(arr[x], 0) + 1
        

    k_max = 0
    v_max = 0
    
    for k,v in dict.items():
        if v > v_max:
            k_max = k
            v_max = v
            
    if v_max > elem/2:
        return k_max
    
