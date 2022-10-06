#include <stdio.h>

void discount(float price, int percent)
{
	float sale = price * (100 - percent) / 100;    // 15% == .85

	printf("sale : %.2f ", sale); // %.2f print 2 zero
}


int main() {


	float price;

	printf("Enter price : ");

	scanf("%f", &price);



	int  percent;

	printf("percent of : ");

	scanf("%d", &percent);

	discount(price, percent); // 100   15
	// sale : 85.00


	return 0;

}

/*

	price * ( 100 - percent )/100    ----------  „⁄«œ·Â «·‰”»Â «·„¡ÊÌÂ


	*/