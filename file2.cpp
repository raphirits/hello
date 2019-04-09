#include <iostream>
#include <cctype>
int main(){
	char letter = 'a';
	switch(std::tolower(letter)){
		case 'a': case 'e': case 'i': case 'o': case 'u':
			std::cout<<"Vowel\n";
	}
	return 0;
}
