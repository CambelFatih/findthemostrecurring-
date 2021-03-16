#include<stdio.h>


int main()
{
    int satirsayisi=10,i,j,k,n,a=0,bosluk,boslu,bos;
	printf("NOTE: This number is directly proportional to the letter size.");
    printf("\nPlease enter a number greater than or equal to 10.");
    printf("\n");
    scanf("%d",&satirsayisi);
       for(i=0; i<satirsayisi; i++)
    {
        printf("  ");
        printf("*");
        if(i==0)
        {
            for(k=0; k<satirsayisi/2+5; k++)
            {
                printf("*");                      //FFFFFFFFFFFFFFFFF
            }
        }
        if(i==satirsayisi/2-1)
        {
            for(n=0; n<satirsayisi/2+3; n++)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    printf("\n\n");







    /*
    ********
    *      *
    *      *
    ********
    *      *
    *      *
    *      *
    */


    for(i=0; i<satirsayisi-1; i++)
    {
        printf("  ");
        printf("*");              //AAAAAAAAAAAAAAAAAAAAa
        if(i==0 || i==satirsayisi/2-1)
        {
            for(n=0; n<satirsayisi/2+1; n++)
            {
                printf("*");
            }
        }
        else
        {
            for(k=0; k<satirsayisi/2+1; k++)
            {
                printf(" ");
            }
        }


        printf("*\n");

    }

    printf("\n\n");





    for(i=0; i<satirsayisi; i++)    //TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
    {
        printf("  ");
        if(i==0)
        {
            for(k=0; k<satirsayisi; k++)
            {
                printf("*");
            }
        }
        else
        {
            for(n=0; n<satirsayisi/2; n++)
            {
                printf(" ");
            }

        }
        printf("*\n");
    }


    printf("\n\n");




    /*


    *****
    *   *
    *****
    ***
     *
     *
     *
    ***




    */


    for(i=0; i<3; i++)
    {
        for(k=0; k<satirsayisi/2; k++)
        {
            printf(" ");
        }


        for(k=0; k<3; k++)
        {
            printf("*");

        }
        printf("\n");


    }
    for(i=0; i<satirsayisi/2+4; i++)
    {
        for(k=0; k<satirsayisi/2+1; k++)
        {
            printf(" ");
        }

        printf("*\n");
    }






























    for (i=0; i<satirsayisi+1; i++)
    {
        printf("  ");//HHHHHHHHHHHHHHHHHHHHH
        printf("*");
        if (i==satirsayisi/2)
        {
            for (j=0; j<satirsayisi/2+5; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (k=0; k<(satirsayisi/2)+4; k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    printf("\n\n");
















































    printf("\n\n");


    /*

      **********
      *
      *
      *
      **********
         ***
         ***

     */




    for(i=0; i<satirsayisi+1; i++)
    {
        printf("  ");

        if(i==0 || i==satirsayisi)
        {
            printf(" ");

            for(k=0; k<satirsayisi; k++)    //Ç Ç Ç ÇÇÇÇ
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=0; k<satirsayisi/2-3; k++)
    {
        for(j=0; j<satirsayisi/2+2; j++)
        {
            printf(" ");
        }
        printf("**");
        printf("\n");

    }



    /*
    ********
    *      *
    *      *
    ********
    *      *
    *      *
    *      *
    */
    printf("\n\n");

    for(i=0; i<satirsayisi; i++)
    {
        printf("  ");
        printf("*");              //AAAAAAAAAAAAAAAAAAAAa
        if(i==0 || i==satirsayisi/2)
        {
            for(n=0; n<satirsayisi/2+4; n++)
            {
                printf("*");
            }
        }
        else
        {
            for(k=0; k<satirsayisi/2+4; k++)
            {
                printf(" ");
            }
        }


        printf("*\n");

    }




    /*


     **       **
     * *     * *
     *  *   *  *         // MMMMMMM HARFÝ   3bosluk*\n2bosluk*\1bosluk*\n*
     *   * *   *
     *    *    *
     *         *
    **7bosluk**
    *bosluk*5bosluk*bosluk*
    *2bosluk*3bosluk*2bosluk*
    *3bosluk*bosluk*3bosluk*
    *4bosluk*4bosluk*
    */


    printf("\n\n");
    bosluk=satirsayisi-1;



    for(i=0; i<satirsayisi/2+3; i++)
    {
        printf("  ");
        if(i<satirsayisi/2+1)
        {
            printf("*");


            for(j=0; j<i; j++)
            {
                printf(" ");
            }
            if(i<satirsayisi/2)
                printf("*");


            for(j=0; j<bosluk; j++)                     //MMMMMMMMMMM
            {
                printf(" ");
            }
            printf("*");
            bosluk=bosluk-2;


            for(j=0; j<i; j++)
            {
                printf(" ");
            }
            printf("*\n");


        }


        else
        {
            printf("*");

            for(n=0; n<satirsayisi+1; n++)
            {
                printf(" ");

            }
            printf("*\n");
        }
    }
    /* BBBBBBBBBBBB
       HARFI ASAGIDA



       */
    printf("\n\n");
    for(i=0; i<satirsayisi+1; i++)
    {
        printf("  ");
        if(i<satirsayisi/2+1)
        {
            printf("*");
            if(i==0||i==satirsayisi/2)
            {
                for(j=0; j<satirsayisi/2+2; j++)
                {
                    printf("*");

                }
                printf("\n");
            }
            else
            {
                for(j=0; j<satirsayisi/2+2; j++)                              //BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
                {
                    printf(" ");
                }
                printf("*\n");

            }
        }
        else
        {
            printf("*");
            if(i==satirsayisi)
            {
                for(j=0; j<satirsayisi/2+2; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            else
            {
                for(j=0; j<satirsayisi/2+2; j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
        }
    }
    /*
    EEEEEEEEEEE HARFÝ
    */
    printf("\n\n");
    for(i=0; i<satirsayisi+1; i++)
    {
        printf("  ");

        if(i==0 ||  i==satirsayisi)
        {
            printf("*");

            for(j=0; j<satirsayisi/2+3; j++)
            {
                printf("*");
            }
            printf("*\n");
        }
        else if(i==satirsayisi/2)
        {
            printf("*");
            for(j=0; j<satirsayisi/2+1; j++)
            {
                printf("*");


            }
            printf("*\n");
        }
        else
        {
            printf("*\n");
        }
    }
    /*  LLLLLLLLLLLLLLL
       HARFÝÝÝ   */
    printf("\n\n");
    for(i=0; i<satirsayisi; i++)
    {
        printf("  ");
        if(i==satirsayisi-1)
        {
            for(j=0; j<satirsayisi; j++)      //LLLLLLLLLLLLL
            {
                printf("*");
            }
        }
        else
        {
            printf("*\n");
        }
    }
    printf("\n\n");
    return 0;
}

