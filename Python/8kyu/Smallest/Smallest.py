##############################################
#Name   : Smallest  
#Author : Luis Teixeira  
#Date   : 27-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################
def find_smallest_int(arr):
    small = arr[0]

    for i in arr:
    	if i < small:
    		small = i


    return small