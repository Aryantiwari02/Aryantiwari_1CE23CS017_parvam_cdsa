#include <stdio.h>
int main() {    
	int s1,s2,s3,total;    
	float avg,per;    
	char name[10];    
	printf("Enter the name of student:");    
	scanf("%s",name);    
	printf("Enter marks for subject 1:");    
	scanf("%d",&s1);    
	printf("Enter marks for subject 2:");    
	scanf("%d",&s2);    
	printf("Enter marks for subject 3:");    
	scanf("%d",&s3);    
	total=s1+s2+s3;    
	avg=((s1+s2+s3)/3);    
	per=((float)total/300)*100;    
	printf("******Details of student******\n");    
	printf("name:%s\n",name);    
	printf(" subject 1 marks:%d\n",s1);    
	printf(" subject 2 marks:%d\n",s2);    
	printf(" subject 3 marks:%d\n",s3);    
	printf("Total:%d\n",total);   
	printf("average:%f\n",avg);  
	printf("Percentage :%f",per);    
	if((s1>35)&&(s2>35)&&(s3>35)){        
		printf("\n PASS \n");
	}    
	else{        
		printf("\n FAIL\n");    
	}   
	return 0;
}