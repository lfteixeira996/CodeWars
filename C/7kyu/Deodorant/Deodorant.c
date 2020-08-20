/***************************************
#Name   : Deodorant  
#Author : Luis Teixeira  
#Date   : 07-03-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/

int evaporator(double content, double evap_per_day, double threshold) {
    
    int day = 0;
    double lost_per_day;
    threshold = content*(threshold/100);
        
    while(content > threshold)
    {
      lost_per_day = evap_per_day/100;
      lost_per_day = content*lost_per_day;
      
      content = content - lost_per_day;  
      day++;
    }
    
    return day;
}