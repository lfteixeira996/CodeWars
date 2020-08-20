##############################################  
#Name   : RGB_to_HEX  
#Author : Luis Teixeira  
#Date   : 07-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
##############################################

The rgb() method is incomplete. Complete the method so that passing in RGB decimal values will result in a hexadecimal representation being returned. The valid decimal values for RGB are 0 - 255. Any (r,g,b) argument values that fall out of that range should be rounded to the closest valid value.

The following are examples of expected output values:

char output[7] = {0};

rgb(255, 255, 255, output); 
output == "FFFFFF";

rgb(255, 255, 300, output); 
output == "FFFFFF";

rgb(0, 0, 0, output); 
output == "000000";

rgb(148, 0, 211, output);
output == "9400D3";