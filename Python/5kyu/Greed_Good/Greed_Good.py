##############################################  
#Name   : Greed_Good  
#Author : Luis Teixeira  
#Date   : 09-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  
def score(dice):

    print(dice)
    
    # your code here
    count_1 = dice.count(1)
    count_2 = dice.count(2)
    count_3 = dice.count(3)
    count_4 = dice.count(4)
    count_5 = dice.count(5)
    count_6 = dice.count(6)
    
    score = 0
    
    if(count_1 >= 3):
        score += 1000
        count_1 -=3
    
    if(count_6 >= 3):
        score += 600
                
    if(count_5 >= 3):
        score += 500
        count_5 -=3
        
    if(count_4 >= 3):
        score += 400        

    if(count_3 >= 3):
        score += 300 
        
    if(count_2 >= 3):
        score += 200     
    
    score += count_1*100 + count_5*50
     

    return score
        