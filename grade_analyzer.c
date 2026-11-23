#include<stdio.h>
int main(){
int n,marks[100][5];
int total=0,i,j;
int topper=0,topMarks=0;
float percentage,ct=0;
printf("enter number of students:",n);
scanf("%d",&n);
for(i=0;i<n;i++){
    total=0;
    printf("\nenter marks of student %d:",i+1);
    for(j=0;j<5;j++){
        printf("subject %d:",j+1);
        scanf("%d",&marks[i][j]);
        total=total+marks[i][j];
    }
    percentage=total/5.0;
    ct=ct+percentage;
    printf("\ntotal=%d/500\n",total);
    printf("percentage=%.2f%%\n",percentage);
    int pass=1;
    for(j=0;j<5;j++){
        if(marks[i][j]<40)
            pass=0;
    }
    if(pass==0){
        printf("status:fail\n");
        printf("grade:f\n");
}
else{
    printf("status:pass\n");
    if(percentage>=90)
    printf("grade:A+\n");
else if(percentage>=80)
    printf("grade:A\n");
else if(percentage>=70)
    printf("grade:B\n");
else if(percentage>=60)
    printf("grade:C\n");
else if(percentage>=50)
    printf("grade:D\n");
else 
    printf("grade:F\n");
}
if(total>topMarks){
    topMarks=total;
    topper=i;
}
}
printf("class topper:student %d\n",topper+1);
printf("topper marks=%d/500\n",topMarks);
printf("class average=%.2f%%\n,ct/n");
return 0;
}