 #include<stdio.h>
 main()  
{
	int i,j,k,n,count=0;
	char name[40];
	printf("enter name: ");
	gets(name);
	
	for(j=0;name[j];j++){
		n=j;
		printf("the frequency of character: ");
	}
	
	for(j=0;name[j];j++){
		count=1;
		if(name[i]){
			for(j=i+1;j<n;j++){
				if(name[i]==name[j]){
					count++;
				    
				}
			}
		}
	}
	
}
