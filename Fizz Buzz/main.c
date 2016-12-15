//
//  main.c
//  Fizz Buzz
//
//  Created by Angie Linton on 2016-12-14.
//  Copyright © 2016 Angie Linton. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    for(i=1; i<=100; i++)
    {
        if (i % 3 == 0)
        printf("%d Fizz\n", i);
        
        if (i % 5 == 0)
            printf("%d Buzz\n", i);
        
        if ((i % 5 == 0) && (i % 3 == 0))
            printf("%d FizzBuzz\n", i);
    
    
    else
        printf("%d \n", i );
    }

    return 0;
}
