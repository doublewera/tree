#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

int main(int argc, char** argv) {
	Node<string>* names;
	names = new Node<string>('Wera');
	cout << *names;
	return 0;
}
