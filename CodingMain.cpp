#include "CodingCaesar.h"
#include "CodingXOR.h"

int main()
{
	cout << "Vvedit\' text dlya shufryvannia:\n";
	string text;
	getline(cin, text);

	cout << "Vvedit\' klych dlya shufryvannia:\n";
	int key;
	cin >> key;

	CodingCaesar textCaesar(text, key);
	string rezCoding = textCaesar.Coding(text, key);
	cout << "Rezultat shufruvannia metodom Caesar:\t" << rezCoding << "\n";
	string rezDecoding = textCaesar.Decoding(rezCoding, key);
	cout << "Rezultat deshufruvannia metodom Caesar:\t" << rezDecoding << "\n";


	cout << "---------------------------------------------------\n";
	cout << "Vvedit\' text dlya shufryvannia:\n";
	string text1;
	std::cin.ignore();
	getline(cin, text1);

	cout << "Vvedit\' klych dlya shufryvannia:\n";
	int key1;
	cin >> key1;
	CodingXOR textXOR(text1, key1);
	string rez1 = textXOR.Coding(text1, key1);
	cout << "Rezultat shufruvannia metodom XOR:\t" << rez1 << "\n";
	cout << "Rezultat deshufruvannia metodom XOR:\t" << textXOR.Decoding(rez1, key1);
}