# Copyright Paul-Johan Seim

#include <stdio.h>

main()
{
    float e, eron, n;   
  
    eron = 1.0;
    e = 1.0;
      
    for (n = 1; n < 10; ++n)
    {
	eron = eron * (1/n);
        e = e + eron;                              
      
    }
    
    printf("e = %6.8f\n", e);

}
