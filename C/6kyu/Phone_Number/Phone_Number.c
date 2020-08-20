/***************************************
#Name   : Phone_Number  
#Author : Luis Teixeira  
#Date   : 06-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
    int i = 0;
    int x = 0;
        
    for(i = 0; i<15; i++)
    {
      switch (i)
      {
        case 0: {phnum[i] = '('; break;}
        
        case 1: case 2: case 3: {phnum[i] = nums[x] + '0'; x++; break;}
      
        case 4: {phnum[i] = ')'; break;}
        
        case 5: {phnum[i] = ' '; break;}
        
        case 6: case 7: case 8: {phnum[i] = nums[x] + '0'; x++; break;}
        
        case 9: {phnum[i] = '-'; break;}
      
        case 10: case 11: case 12: case 13: {phnum[i] = nums[x] + '0'; x++; break;}
      }
    }
    phnum[14] = '\0';
    
    return phnum;
}


/*****Another Implementation*****/

/*sprintf stands for “String print”. Instead of printing on console, it store output on char buffer which are specified in sprintf*/
char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
    sprintf(phnum, "(%d%d%d) %d%d%d-%d%d%d%d", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]); 
    
    return phnum;
}