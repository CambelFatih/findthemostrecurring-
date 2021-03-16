#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tekrarsayisi=1,temp,tkredensayi=0,j,i;
    int m,a,n;
    printf("dizinin satir sayisini girin");
    scanf("%d",&m);
    printf("dizinin sütun sayisini girin");
    scanf("%d",&n);
    int dizi[m][n];
    srand(time(NULL));

//**********************************


    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
    dizi[i][j] = rand()%m*n;
            }
    }


    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
    printf(" %5d ",dizi[i][j]);
            }
            printf("\n");
    }



//************************************


for(a=0 ; a<m ; a++){
        temp=0;


    for(i=0; i<n; i++)
    {
        tekrarsayisi=1;
      if(dizi[a][i]!=-9){


        for(j=i+1; j<n; j++)
            if(dizi[a][i]==dizi[a][j]){
                tekrarsayisi++;
                dizi[a][j]=-9;
            }
        if(tekrarsayisi>temp)
        {
            tkredensayi=dizi[a][i];
            temp=tekrarsayisi;
        }


    }
    }
    printf(" %d.indisi %d %d\n",a,temp,tkredensayi);
}


    return 0;
}
