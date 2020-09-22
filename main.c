#include<stdio.h>
int ifelse(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d".&marks);
    printf("%d = ",marks);
    if(marks>50){
        printf("PASS");
    }
    else if(marks<50){
        printf("NO PASS");
    }
    else{
        printf("equal");
    }
}
