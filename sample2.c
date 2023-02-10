include <stdio.h>
#include <stdlib.h>
 
void say_hello(void)
{
        char *username;
 
        username = getenv(&quot;USERNAME&quot;);
 
        if (username != NULL) {
                printf(&quot;Hello, %s\n&quot;, username);
        } else {
                printf(&quot;Hello, Alex\n&quot;);
        }
}
 
int main (int argc, char** argv)
{
        say_hello();
       
        return 0;
}