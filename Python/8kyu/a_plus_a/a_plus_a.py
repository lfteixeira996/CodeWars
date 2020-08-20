##############################################  
#Name   : a_plus_a  
#Author : Luis Teixeira  
#Date   : 22-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  

def array_plus_array(arr1,arr2):

  result = 0
    
  #assuming both arrays have the same lenght
  for x in range(0, len(arr1)):
      result += arr1[x] + arr2[x]
  
  return result