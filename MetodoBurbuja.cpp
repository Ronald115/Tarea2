#include <iostream>
#include <vector>
//Metodo de burbuja.

int main()
{
	//Se agrega una lista con valores aleatorios
	std::vector<std::int32_t> l1 = {18,15,75,22,10,5,68,4};
	int dam = 8;
	std::cout << "Lista inicial: ";
	for (int i = 0;i < dam;i++) {
		std::cout << l1[i] << ",";
	}

	std::cout << "\n";
	//aqui se ordena la lista
	for (int i = 1;i < dam - 1; i++) {
		for (int j = 0; j < dam - 1;j++) {
			if (l1[j] > l1[j + 1]) {
				int temp = l1[j];
				l1[j] = l1[j + 1];
				l1[j + 1] = temp;
			}
		}
	}
	//Se imprime la lista ordenada
	std::cout << "Lista ordenada: ";
	for (int i = 0;i < dam;i++) {
		std::cout << l1[i]<<",";
	}
}



