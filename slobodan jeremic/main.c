#include <stdio.h>
#include <stdlib.h>
#define maks 50
int main()
{
    int n,x[maks],i,duz[50],br=0,brn=0,j=0,k=0,m=0;
    char niz[500],slovo[100];
    FILE *fp;
    fp=fopen("ulaz1.txt","r");
    fscanf(fp,"%d",&n);
    for(i=0;i<n;i++){
        fscanf(fp,"%d",&x[i]);
        printf("x[%d]=%d",i,x[i]);
    }
    printf("\n");
            fscanf(fp,"%s",&slovo);
        for(i=0;i<500;i++){
           niz[i]=slovo[j];
            br++;
            if(brn==5){
                    printf("\nMaksimum je 5 preuredjivanja");
                    break;
            }
                if(br==5){
                    br=0;
                    fscanf(fp,"%s",&slovo);
                    j=-1;
                    brn++;
                        }
                    j++;
        }
printf("\n\n");
        for(i=0;i<25;i++){
            printf("\t niz[%d]=%c ",i,niz[i]);

        }
        printf("\n\n");


            if(niz[0]=='I'){
                    printf("\nUslov ispunjen");
                k=niz[2];
                m=niz[4];
            }


printf("%d %d %d",m,k,niz[2]);


    return 0;
}
