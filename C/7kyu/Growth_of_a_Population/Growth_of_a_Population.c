
int nbYear(int p0, double percent, int aug, int p) 
{
    
    int hab = p0;
    int year = 0;
    
    do
    {
      year++;
      hab = hab + (hab*percent/100) + aug;
    
    }while(hab<p);
    
    return year;
}