#include<stdio.h>
int main(){
	int choice;
	int choice1;
	int find;
	int count=0;
	int size = 10;
	int numbers[size];
	int x,k;
	do{
		printf("\n                         Menu");
	printf("\n1. nhap so phan tu can nhap va gia tri cua mang");
	printf("\n2. in gia cac phan tu dang quan ly");
	printf("\n3. them 1 phan tu vao vi tri chi dinh");
	printf("\n4. sua 1 phan tu tai vi tri chi dinh");
	printf("\n5. xoa 1 phan tu tai vi tri chi dinh");
	printf("\n6. sap xep cac phan tu");
	printf("\n7. giam dan");
	printf("\n8. Tang dan");
	printf("\n9. tim kiem phan tu nhap vao (neu mang chua sap xep thi tim kiem tuyen tinh,neu mang sap xep tim kiem nhi phan)");
	printf("\n10. Thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d]:",i);
				scanf("%d",&numbers[i]);
				}
			break;
		case 2:
			for (int i=0; i<size; i++){
				printf("Phan tu thu [%d] = %d\n",i,numbers[i]);
			}
			break;
		case 3:
			printf("nhap phan tu can them: ");
                scanf("%d", &k);
                printf("nhap vi tri can chen: ");
                scanf("%d", &x);
                if(x < 0 || x > size){
                    printf("Vi tri chen khong hop le.\n");
                    break;
                }
                for(int i = size; i > x; i--){
                    numbers[i] = numbers[i - 1];
                }
                numbers[x] = k;
                size++;
                break;
		case 4:
			printf("Nhap vi tri can sua: ");
                scanf("%d", &x);
                if(x < 0 || x >= size){
                    printf("Vi tri sua khong hop le.\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &k);
                numbers[x] = k;
                printf("Da sua phan tu tai vi tri %d.\n", numbers[x]);
                break;
  		case 5:
  			printf("Nhap vi tri can xoa: ");
                scanf("%d", &x);
                if (x < 0 || x >= size) {
                    printf("Vi tri xoa khong hop le.\n");
                    break;
                }
                for (int i = x; i < size - 1; i++) {
                    numbers[i] = numbers[i + 1];
                }
                size--;
                printf("Da xoa phan tu tai vi tri %d.\n",x);
                break;

  		case 6:
  			printf("\n    Menu Sap Xep   ");
                printf("\n7. giam dan");
                printf("\n8. Tang dan");
                printf("\nNhap lua chon: ");
            break;
  		case 7:
  			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(numbers[i] < numbers[j]){
						int temp = numbers[i];
						numbers[i] = numbers[j];
						numbers[j] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,numbers[i]);
			}
  			break;
  		case 8:
  			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(numbers[i] > numbers[j]){
						int temp = numbers[j];
						numbers[j] = numbers[i];
						numbers[i] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,numbers[i]);
			}
  			break;
		case 9:
			printf("nhap phan tu muon tim kiem: ");
			scanf("%d", &find);
			for(int i=0; i<size; i++){
				if(find== numbers[i]){
					count++;
				}
			}
			printf("Co %d ki tu giong ki tu tim kiem",count);
			break;
		case 10:
			printf("thoat");
			break;
			default:
			printf("lua chon khong hop le");
		}
	}while(choice != 10);
	return 0;
}
