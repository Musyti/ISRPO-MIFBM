#include <iostream>

int main() {
	system("chcp 1251");
	int name;
	int pass;
	int name_tmp;
	int pass_tpm;

	std::cout << "ââåäèòå èìÿ " << std::endl;
	std::cin >> name;
	std::cout << "ââåäèòå ïàğîëü " << std::endl;
	std::cin >> pass;

	do {

	std::cout << "ïîâòîğèòå ïàğîëü " << std::endl;
	std::cin >> pass_tpm;

	} while (pass != pass_tpm);

	pass_tpm = 0;
	name_tmp = NULL;

	std::cout << "ÏÎÇÄĞÎÂËßŞ ÂÛ ÇÀĞÅÃÅÑÒĞÈĞÎÂÀÍÛ" << std::endl;


	std::cout << "âîéäèòå â àêàóíò" << std::endl;
	while (name != name_tmp || pass != pass_tpm) {

	std::cout << "ââåäèòå èìÿ "; std::cin >> name_tmp;

	std::cout << "ââåäèòå ïàğîëü "; std::cin >> pass_tpm;
	}


	std::cout << "ÏÎÇÄĞÎÂËßŞ ÂÛ ÇÀØËÈ";
}