#include <stdio.h>
/*
void test1(char*buffer, float f) {
    sprintf(buffer, "00 [%f]\n", f);
    puts(buffer);     
    sprintf(buffer, "\n");
     
    sprintf(buffer, "01 [%.2f]\n", f);
    puts(buffer);     
    sprintf(buffer, "02 [%.10f]\n", f);
    puts(buffer);     
    sprintf(buffer, "03 [%.20f]\n", f);
    puts(buffer);     
    sprintf(buffer, "\n");
    puts(buffer);     
     
    sprintf(buffer, "04 [%10f]\n", f);
    puts(buffer);     
    sprintf(buffer, "05 [%20f]\n", f);
    puts(buffer);     
    sprintf(buffer, "06 [%30f]\n", f);
    puts(buffer);     
    sprintf(buffer, "07 [%1f]\n", f);
    puts(buffer);     
    sprintf(buffer, "08 [%2f]\n", f);
    puts(buffer);     
    sprintf(buffer, "\n");
    puts(buffer);     
     
    sprintf(buffer, "09 [%-10f]\n", f);
    puts(buffer);     
    sprintf(buffer, "10 [%-20f]\n", f);
    puts(buffer);     
    sprintf(buffer, "11 [%-30f]\n", f);
    puts(buffer);     
    sprintf(buffer, "12 [%-1f]\n", f);
    puts(buffer);     
    sprintf(buffer, "13 [%-2f]\n", f);
    
    puts(buffer);
    sprintf(buffer, "\n");
     
    
    puts(buffer);
    sprintf(buffer, "14 [%+-10f]\n", f);
    
    puts(buffer);
    sprintf(buffer, "15 [%+-20f]\n", f);
    
    puts(buffer);
    sprintf(buffer, "16 [%-+30f]\n", f);
    puts(buffer);
    sprintf(buffer, "17 [%-+1f]\n", f);
    puts(buffer);
    sprintf(buffer, "18 [%+-2f]\n", f);
    
    puts(buffer);sprintf(buffer, "\n");
 
    puts(buffer);
    sprintf(buffer, "19 [%+-10f]\n", f);
    puts(buffer);
    sprintf(buffer, "20 [%+-20f]\n", f);
    puts(buffer);
    sprintf(buffer, "21 [%-+30f]\n", f);
    puts(buffer);
    sprintf(buffer, "22 [%-+1f]\n", f);
    puts(buffer);
    sprintf(buffer, "23 [%+-2f]\n", f);
    puts(buffer);
    sprintf(buffer, "\n");
     
    puts(buffer);
    sprintf(buffer, "24 [% f]\n", f);
    puts(buffer);
    sprintf(buffer, "25 [%  f]\n", f);
    puts(buffer);
    sprintf(buffer, "26 [%  f]\n", f);
    puts(buffer);
    sprintf(buffer, "\n");
   
    puts(buffer);
    sprintf(buffer, "27 [%+---++. f]\n", f);
    puts(buffer);
    sprintf(buffer, "28 [%+-+-+--++--++f]\n", f);
    puts(buffer);
    sprintf(buffer, "29 [%-+--++12f]\n", f);
    puts(buffer);
    sprintf(buffer, "30 [%-+--++ 12f]\n", f);
    puts(buffer);
    sprintf(buffer, "31 [%- + -    -+ +  12f]\n", f);
    puts(buffer);
    sprintf(buffer, "32 [%- + -    -+ +  f]\n", f);
    puts(buffer);
    sprintf(buffer, "33 [%- + -    -+ +  0000f]\n", f);
    puts(buffer);
    sprintf(buffer, "\n");
     
    puts(buffer);
    sprintf(buffer, "34 [%+-10f]\n", f);
    puts(buffer);
    sprintf(buffer, "35 [%+-0f]\n", f);
    puts(buffer);
    sprintf(buffer, "35 [%+-f]\n", f);
    puts(buffer);
    sprintf(buffer, "36 [%+-20f]\n", f);
    puts(buffer);
    sprintf(buffer, "37 [%+-0f]\n", f);
    puts(buffer);
    sprintf(buffer, "38 [%-+30f]\n", f);
    puts(buffer);
    sprintf(buffer, "39 [%-+0f]\n", f);
    puts(buffer);
    sprintf(buffer, "40 [%-+1f]\n", f);
    puts(buffer);
    sprintf(buffer, "41 [%-+0f]\n", f);
    puts(buffer);
    sprintf(buffer, "42 [%+-2f]\n", f);
    puts(buffer);
    sprintf(buffer, "43 [%+-0f]\n", f);
     
    puts(buffer);
    sprintf(buffer, "44 [%2 test]\n");    
    puts(buffer);
    sprintf(buffer, "\n");
} 
*/
void test2(char*buffer, float f) {
    sprintf(buffer, "00 [%f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "\n");
     
    // sprintf(buffer, "01 [%.0f]\n", f);
    // puts(buffer);
    // sprintf(buffer, "02 [%.-2f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "03 [%.1.19.8.6f]\n", f);
    // puts(buffer);
    // sprintf(buffer, "03 [%.1.19.8.6?f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "04 [%.20f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "04 [%+-+-+- ++   -- -- ++16.20f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "07 [%.50f]\n", f);
    // puts(buffer);
    // sprintf(buffer, "\n");
    // puts(buffer);     

    // sprintf(buffer, "36 [%+-20.13f]\n", f);
    // puts(buffer);     
    // sprintf(buffer, "36c[%+-20.13c]\n", 'f');
    // puts(buffer);     
    // sprintf(buffer, "36d[%+-20.13d]\n", 227);
    // puts(buffer);     
    // sprintf(buffer, "36u[%+-20.13u]\n", 227u);
    // puts(buffer);     
    sprintf(buffer, "36u[%20.13u]\n", 227u);
    puts(buffer);     
    sprintf(buffer, "36d[%20.13d]\n", 227);
    puts(buffer);     
}
int main() {
    //float f = 99.123456789;
    float ff = 99.123456789012345678901234567890123456789012345678901234567890123456789;

    char buffer[200];

    
     //test2(buffer, f);
     test2(buffer, ff);
     
    return 0;
}