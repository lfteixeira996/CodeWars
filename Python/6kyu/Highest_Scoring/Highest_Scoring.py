##############################################  
#Name   : Highest_Scoring  
#Author : Luis Teixeira  
#Date   : 17-12-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################  

def high(x):
    
    high_score = 0
    high_score_word = ""
    
    #split the string of words by space
    data = x.split()
    
    #access each word in the string
    for word in data:
          
        score = 0
        #check the score of the word
        for letter in word:
            score += ord(letter)-96
            
        #check if the score is higher than the highest    
        if score > high_score:
             high_score = score
             high_score_word = word
      
    return high_score_word
            