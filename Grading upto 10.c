#include <stdio.h>
#include <conio.h>

int main()
{
    int a=1,aplus=0,aplane=0,aminus=0,bplus=0,bminus=0,cplus=0,cminus=0,dplain=0,fail=0;
    float marks;

    while(a<11){
    printf("Enter the marks: ");
    scanf("%f", &marks);
    a++;
    if(marks>=80){
    aplus=aplus++;
    }
    else if((marks<80)&&(marks>=75)){
    aplane=aplane++;
    }
    else if((marks<75)&&(marks>=70)){
    aminus=aminus++;
    }
    else if((marks<70)&&(marks>=65)){
    bplus=bplus++;
    }
    else if((marks<65)&&(marks>=60)){
    bminus=bminus++;
    }
    else if((marks<60)&&(marks>=55)){
    cplus=cplus++;
    }
    else if((marks<55)&&(marks>=50)){
    cminus=cminus++;
    }
    else if((marks<50)&&(marks>=45)){
    dplain=dplain++;
    }
    else if(marks<=44){
    fail=fail++;
        }
    }
    printf("\nTotal number of A+ = %d\n",aplus);
    printf("Total number of A = %d\n",aplane);
    printf("Total number of A- = %d\n",aminus);
    printf("Total number of B+ = %d\n",bplus);
    printf("Total number of B- = %d\n",bminus);
    printf("Total number of C+ = %d\n",cplus);
    printf("Total number of C- = %d\n",cminus);
    printf("Total number of D = %d\n",dplain);
    printf("Total number of Fail = %d\n",fail);
    return 0;
}
