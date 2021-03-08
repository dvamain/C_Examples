#include <stdio.h>

#define IN 1 //单词内
#define OUT 0 //单词外

int main(int argc, char const *argv[])
{
     /*
    int c = 0;
    
   
    while ((c = getchar()) != EOF){
        putchar(c);
        printf("\n c is %d and EOF is: %d \n",c, EOF);
    }
    

    int i = 0;
    int j = 0;
    int k = 0;
 
    j = i++;
    k = ++i;
 
    printf("i = %d, j = %d, k = %d.\n", i, j, k);
    */

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c=getchar()) != EOF)
    {
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' '|| c== '\t' || c=='\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d.\n", nl, nc, nw);
    
    
    
    
    return 0;
}
