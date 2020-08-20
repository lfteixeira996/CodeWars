##############################################  
#Name   : who_likes_it  
#Author : Luis Teixeira  
#Date   : 26-09-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def likes(names):
    
    n_names = len(names)
    
    if n_names == 0 :
        return 'no one likes this'
        
    elif n_names == 1:
        return names[0] + " likes this"
    
    elif n_names == 2:
        return names[0] + " and " + names[1] +" like this"
          
    elif n_names == 3:
        return names[0] + ", " + names[1] + " and " + names[2] +" like this"
        
    else:
        return names[0] + ", " + names[1] + " and " + str(n_names-2) +" others like this"