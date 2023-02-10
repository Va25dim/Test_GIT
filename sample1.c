#include <stdio.h>
 
void say_hello(void)
{
        printf(&quot;Hello, Alex\n&quot;);
}
 
int main (int argc, char** argv)
{
        say_hello();
       
        return 0;
}