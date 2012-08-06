//
//  main.c
//  Project-Euler
//  problem one
//  Created by Justin Zollars on 8/5/12.
//  Copyright 2012 Justin Zollars. All rights reserved.
//

#include <stdio.h>


int	MultipleOf( int candidate );

int main (int argc, const char * argv[]) {
	int	i, finalvalue;
	
	for ( i = 1; i <= 999; i++ ) {
		if ( MultipleOf( i ) != 0 ) {
            finalvalue = MultipleOf( i ) + finalvalue;
        }
	}
    
    printf( "%2d:  ", finalvalue );
	
	return 0;
}


int	MultipleOf( int candidate )
{
	
	if (( candidate % 3) == 0 )
		return candidate;
	else if (( candidate % 5) == 0 ) {
		return candidate;
	}
    
    else {
        return 0;
    }
}