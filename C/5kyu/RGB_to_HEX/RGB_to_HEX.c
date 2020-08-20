/***************************************
#Name   : RGB_to_HEX  
#Author : Luis Teixeira  
#Date   : 07-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
int rgb(int r, int g, int b, char *output)
{

  if(r>255)
    r = 255;
  
  if(g>255)
    g = 255;
    
  if(b>255)
    b = 255;
  
  if(r<0)
    r = 0;
  
  if(g<0)
    g = 0;
    
  if(b<0)
    b = 0;
   
  
  sprintf(output, "%.2X%.2X%.2X", r, g, b);
  

  return output;

}