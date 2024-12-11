#include <stdio.h>

int main(){
	float math, literature,english;
	float total,average;
	//nhap diem mon toan,van,anh
	printf("nhap diem toan: ");
	scanf("%f",&math);
	printf("nhap diem mon van: ");
	scanf("%f",&literature);
	printf("nhap diem mon anh: ");
	scanf("%f",&english);
	// tinh diem tong va trung binh
	total = math + literature + english;
	average = total/3;
	// in ket qua 
	printf("tong diem: %.2f\n",total);
	printf("diem trung binh: %.2f\n",average);
	
	return 0;
	
}
