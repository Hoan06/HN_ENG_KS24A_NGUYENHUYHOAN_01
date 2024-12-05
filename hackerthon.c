#include <stdio.h>

int main(){
	int chose;
	int array[100];
	int size,sum,index,index2,index3,check=1;
	int swap=0;
	do {
		printf("---------MENU----------\n");
		printf("1.nhap so phan tu va gia tri cho mang \n");
		printf("2.in ra gia tri cac phan tu trong mang \n");
		printf("3.tim gia tri nho nhat va lon nhat trong mang \n");
		printf("4.in ra tong cua tat ca cac phan tu \n");
		printf("5.them mot phan tu vao cuoi mang \n");
		printf("6.xoa phan tu tai vi tri cu the \n");
		printf("7.sap xep mang theo thu tu giam dan (bubble sort) \n");
		printf("8.tim kiem phan tu trong mang \n");
		printf("9.in ra so nguyen to trong mang \n");
		printf("10.sap xep mang theo thu tu tang dan (selection sort) \n");
		printf("11.thoat \n");
		scanf("%d",&chose);
		if (chose==1){
			printf("nhap so luong ");
			scanf("%d",&size);
			for (int i=0;i<size;i++){
				printf("nhap gia tri cho array[%d] ",i);
				scanf("%d",&array[i]);
			}
			swap=1;
		}
		if (chose==2){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				for (int i=0;i<size;i++){
				printf("array[%d]=%d ",i,array[i]);
			  }
			    printf("\n");
			}
		}
		if (chose==3){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				int max=array[0];
			    int min=array[1];
			    for (int i=0;i<size;i++){
				     if (array[i]>max){
				 	   max=array[i];
			     	}
				     if (array[i]<min){
					    min=array[i];
				    }
			    }
			    printf("phan tu lon nhat la %d \n",max);
			    printf("phan tu nho nhat la %d \n",min);
			}
		}
		if (chose==4){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				sum=0;
			    for (int i=0;i<size;i++){
				  sum+=array[i];
			    }
			    printf("tong cac phan tu la %d \n",sum);
			}
		}
		if (chose==5){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				printf("moi ban nhap gia tri phan tu muon them ");
			    scanf("%d",&index);
			    array[size]=index;
			    size+=1;
			}
		}
		if (chose==6){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				printf("moi ban nhap vi tri muon xoa ");
			    scanf("%d",&index2);
			    for (int i=index2;i<size;i++){
				array[i]=array[i+1];
			   }
			   size-=1;
			}
		}
		if (chose==7){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				for (int i=0;i<size;i++){
				for (int j=0;j<size-i-1;j++){
					if (array[j]<array[j+1]){
						int temp;
						temp=array[j];
						array[j]=array[j+1];
						array[j+1]=temp;
					}
				}
			  }
			}
		}
		if (chose==8){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				int flag=1;
			    printf("moi ban nhap phan tu muon tim kiem ");
			    scanf("%d",&index3);
			    for (int i=0;i<size;i++){
				if (array[i]==index3){
					 printf("phan tu %d o vi tri %d \n",index3,i);
					 flag=0;
				    } 
			    }
			    if (flag){
				   printf("phan tu khong ton tai trong mang \n");
			    }
			}
		}
		if (chose==9){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				check=1;
			    for (int i=0;i<size;i++){
				  int num=array[i];
				   if (num>1){
					  int count=1;
					   for (int j=2;j*j<=num;j++){
						   if (num%2==0){
						 	 count=0;
							  break;
						  }
					 }
					if (count==1){
						printf("so nguyen to %d \n",array[i]);
						check=0;
					} 
				}
			  }
			    if (check==1){
				   printf("trong mang khong co so nguyen to \n");
			   }
			}
		}
		if (chose==10){
			if (swap==0){
				printf("ban chua nhap mang \n");
			} else {
				for (int i=0;i<size;i++){
				int min_index=i;
				for (int j=i+1;j<size;j++){
					if (array[j]<array[min_index]){
						min_index=j;
					}
				}
				if (min_index!=i){
					int item;
					item=array[min_index];
					array[min_index]=array[i];
					array[i]=item;
				}
			}
			}
		}
		
	} while (chose!=11);
	
	
	
	
	return 0;
}
