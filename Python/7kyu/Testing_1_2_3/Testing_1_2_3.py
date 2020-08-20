##############################################  
#Name   : Testing_1_2_3  
#Author : Luis Teixeira  
#Date   : 20-05-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def number(lines):
    
    #empty list
    if len(lines) == 0:
        return lines
        
    else:
        #create an empty list
        list = []
        for x in range(0, len(lines)):
            string = str(x+1) + ': ' + str(lines[x])
            list.append(string)
            
        return list   