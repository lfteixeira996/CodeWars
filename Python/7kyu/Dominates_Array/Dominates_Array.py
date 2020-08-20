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
    
    for x in range(0, elem):
        
        if dict.get(arr[x]) == None:
            dict[arr[x]] = 1
        
        else:
            dict[arr[x]] += 1


    maxi = max(dict.items(), key=operator.itemgetter(1))[0]

    if maxi > elem:
    	return dict.get(maxi)

    else:
    	return -1



dominator([3,4,3,2,3,1,3,3])        