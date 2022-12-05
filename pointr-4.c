 #include <stdio.h>
 
 int main()
 {
 	int arr[]={10,20,30,40,50};
 	int *ptr;
 	
 	ptr=arr;
 	
 	printf("%d",ptr+1);
 	// dönüş tipi int olduğundan dolayı her bir artışta bellekten 4 baytlık artış olur.
 	return 0;
 }
 
