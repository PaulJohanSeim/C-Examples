#include <stdio.h>

main()
{

    int rows, cols, i, j, taper1, taper2;
    int val [10][10];

    taper1 = 0;
    taper2 = 0;
    i = 0;
    j = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Now enter array values %d rows by %d columns \n", rows, cols);




    
    for (i = 0; i < rows; ++i)
	for (j = 0; j < cols; ++j)
	{  
	    scanf("%d", &val[i][j]);
	


    if (i == j)
    {
	if (val[i][j] == 1)
	    (taper1 = 1);
	    
	else
	    (taper1 = 0);
    }
  
    else 
    {
	if (val[i][j] == 0)
	    (taper2 = 1);
	
	else if
	    (taper2 = 0);
	(stop = 1);

    }
    



	}
    
    if (taper1 == 1 && taper2 == 1)
	printf("Matrix IS a unit matrix \n");
    else	
	printf("Matrix IS NOT a unit matrix \n");

       

	














}
