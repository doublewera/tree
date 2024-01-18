#pragma once

// TODO: Как потребовать у шаблона поддерживать оператор "<" ?
template <typename T>
class Node {
	T value;
	Node* left;
	Node* right;
public:
	Node(T value): value(value) {}
};

/*
* Сравнение строк на больше-меньше: по алфавиту
Маша
Машенька
Паша
*/