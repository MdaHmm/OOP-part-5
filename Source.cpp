//#include"Client.h"
#include"Food.h"
#include"Supermarket.h"

int main() 
{
	Bread *bread = new Bread("Bread", 25.0f, 1.25f, "White");
	Milk *milk = new Milk("Milk", 70.6f, 1.0f, 10);

	Supermarket *supermarket = new Supermarket();
	
	supermarket->AddProduct(bread);
	supermarket->AddProduct(milk);
	supermarket->ShowDataOfProducts();

	std::cout << "\n";

	supermarket->Buy("Milk");
	supermarket->ShowDataOfProducts();

	return{};
}