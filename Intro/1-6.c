#include <stdio.h>



int power (int m, int n);

int main(int argc, char const *argv[])
{
    char c = '2';
    printf("%d\n",c-'0');

    int tmp = power(3,4);
    printf("%d\n",tmp);

    return 0;
}


int power (int m, int n){
    int result = m;
    /*
    for(int i=0; i<n-1; i++){
        result = result*m;
    }
    */

    //可以避免多创建一个i值    
    for (result = 1; n > 0; n--){
       result = result * m;
    }

    return result;
}
