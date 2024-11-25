#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>

// Функция для вставки нового элемента в массив перед заданной позицией
#include <iostream>

// Функция для вставки нового элемента в массив перед заданной позицией
//void insertElement(int*& arr, int& size, int position, int newElement) {
//    if (position < 0 || position > size) { // Корректируем условие проверки
//        std::cout << "Invalid position!" << std::endl;
//        return;
//    }
//
//    // Создаем новый массив, который будет на один элемент больше исходного
//    int* newArr = new int[size + 1];
//
//    // Копируем элементы до позиции вставки
//    for (int i = 0; i < position; ++i) {
//        newArr[i] = arr[i];
//    }
//
//    // Вставляем новый элемент
//    newArr[position] = newElement;
//
//    // Копируем оставшиеся элементы
//    for (int i = position; i < size; ++i) {
//        newArr[i + 1] = arr[i];
//    }
//
//    // Увеличиваем размер массива
//    ++size;
//
//    // Освобождаем память старого массива
//    delete[] arr;
//
//    // Указатель на новый массив присваиваем старому указателю
//    arr = newArr;
//}
//
//int main() {
//    int size = 5;
//    int* arr = new int[size] {1, 2, 3, 4, 5};  // Пример исходного массива
//
//    int position = 2;  // Позиция, перед которой нужно вставить новый элемент
//    int newElement = 99;  // Новый элемент, который нужно вставить
//
//    std::cout << "Original array: ";
//    for (int i = 0; i < size; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    insertElement(arr, size, position, newElement);
//
//    std::cout << "Updated array: ";
//    for (int i = 0; i < size; ++i) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    // Освобождаем память
//    delete[] arr;
//
//    return 0;
//}


//int main() {
//	int arr[5] = { 11, 12, 13, 34, 55 };
//	int pos;
//	for (int i = 0; i < size(arr); i++) {
//		if (arr[i] % 10 == arr[i] / 10) {
//			pos = i;
//		}
//	}
//	cout << pos;
//}




//int main(){
//	int size = 5;
//	int size2 = 0;
//	int * newArr = new int[5];
//	int* arr = new int[size] {1, 25, 3, 4, 25};
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 5 == 0) {
//			continue;
//		}
//		else {
//			newArr[size2] = arr[i];			
//			size2++;
//		}
//	}
//	for (int j = 0; j < size2; ++j) {
//		std::cout << newArr[j] << " ";
//    }
//}



//int CharToInt(char sim) {
//	return (int)sim - 48;
//}
//
//void TranclateStr(string str) {
//	int size = 0;
//	int* mas = new int[size];
//	string time_str;
//	int kol = 0;
//	int ch = 0;
//	for (int i = 0; i < str.length(); i++) {
//		if (i == str.length() - 1) {
//			time_str += str[i];
//			for (int k = 0; k < time_str.length(); k++) {
//				ch += CharToInt(time_str[k]) * pow(10, (time_str.length() - 1) - k);
//			}
//			mas[kol] = ch;
//			kol++;
//			ch = 0;
//			break;
//		}
//		else if (str[i] != ' ') {
//			time_str += str[i];
//		}
//		else {
//			for (int k = 0; k  < time_str.length(); k++) {
//				ch += CharToInt(time_str[k]) * pow(10, (time_str.length() - 1) - k);
//			}
//			mas[kol] = ch;
//			kol++;
//			ch = 0;
//			time_str = "";
//		}
//	}
//	for (int m = 0; m < kol; m++) {
//		cout << mas[m] << " ";
//	}
//}
//int main() {
//	string a = "123 546";
//	TranclateStr(a);
//}
#include <map>

//
//class Table {
//private:
//	int code_inst;
//	int code_disc;
//	string teach_fio;
//	//map<string, int> vedomost;
//};

//class Student {
//private:
//	string stud_fio;
//	int mark = NULL;
//	int zach_book;
//	string data_oc;
//public:
//	Student(string stud_fio,int zach_book, string data_oc) {
//		this->stud_fio = stud_fio;
//		this->zach_book = zach_book;
//		this->data_oc = data_oc;
//	}
//	void SetMark(int new_mark) {
//		mark = new_mark;
//	}
//	int getMark() {
//		return mark;
//	}
//	void GetData() {
//		cout << stud_fio << " " << zach_book << " " << data_oc << " " << mark;
//	}
//};
//
//
//class Table {
//private:
//	vector<Student> stud_table;
//	int count = 0;
//public:
//	Table(vector<Student> stud_table) {
//		this->stud_table = stud_table;
//	}
//	int GetNotGoToExam() {
//		for (int i = 0; i < stud_table.size(); i++) {
//			if (stud_table[i].getMark() == 1) {
//				count++;
//			}
//		}
//		return count;
//	}
//	
//	void Delete6() {
//		for (int i = 0; i < stud_table.size(); i++) {
//			if (stud_table[i].getMark() == 6) {
//				stud_table.erase(stud_table.begin() + i);
//				//stud_table.resize(stud_table.size() - 1);
//			}
//		}
//	}
//
//	void ReturnTable() {
//		for (int i = 0; i < stud_table.size(); i++) {
//			stud_table[i].GetData();
//			cout << endl;
//		}
//	}
//};
//
//int main() {
//	Student stud1("Alexy", 654, "11/09/2003");
//	stud1.SetMark(3);
//	//stud1.GetData();
//	Student stud2("Michail", 819, "07/04/2003");
//	stud2.SetMark(1);
//	//stud2.GetData();
//	Student stud3("Daniel", 216, "23/06/2003");
//	stud3.SetMark(6);
//	//stud2.GetData();
//	Student stud4("Macsim", 546, "06/02/2003");
//	stud4.SetMark(5);
//	//stud2.GetData();
//	vector<Student> students = { stud1 , stud2 , stud3, stud4 };
//	Table tab(students);
//	cout << tab.GetNotGoToExam() << endl;
//	tab.Delete6();
//	tab.ReturnTable();
//
//}

//////////////struct Node {
//////////////	int data;
//////////////	Node* next;
//////////////
//////////////	Node(int value) : data(value), next(nullptr) {}
//////////////};
//////////////
//////////////void appendNode(Node*& head, int value) {
//////////////	Node* new_node = new Node(value);
//////////////	if (head == nullptr) {
//////////////		head = new_node;
//////////////	}
//////////////	else {
//////////////		Node* current = head;
//////////////		while (current->next != nullptr) {
//////////////			current = current->next;
//////////////		}
//////////////		current->next = new_node;
//////////////	}
//////////////}
//////////////void pritsList(Node* head) {
//////////////	Node* current = head;
//////////////	while (current != nullptr) {
//////////////		std::cout << current->data << " ";
//////////////		current = current->next;
//////////////	}
//////////////	std::cout << std::endl;
//////////////}
//////////////
//////////////void ListRer(Node*& head, int pos) {
//////////////	int count = 1;
//////////////	Node* current = head;
//////////////	Node* NodePos = nullptr;
//////////////	while (current->next != nullptr) {
//////////////		if (count == pos - 1) {
//////////////			NodePos = current->next;
//////////////			current->next = nullptr;
//////////////			break;
//////////////		}
//////////////		else {
//////////////			current = current->next;
//////////////			count++;
//////////////		}
//////////////	}
//////////////	Node* tail = NodePos;
//////////////	while (tail->next != nullptr) {
//////////////		tail = tail->next;
//////////////	}
//////////////
//////////////	// Переносим sublistStart в начало исходного списка
//////////////	tail->next = head;
//////////////	head = NodePos;
//////////////}
//////////////
//////////////void AppendElement(Node*& head,int value) {
//////////////
//////////////	Node* current = head;
//////////////	while (current->next != nullptr && current->next->data < value) {
//////////////		current = current->next;
//////////////	}
//////////////
//////////////	Node* cur_end = current->next;
//////////////
//////////////	Node* new_elem = new Node(value);
//////////////
//////////////	new_elem->next = current->next;
//////////////
//////////////	current->next = new_elem;
//////////////}
//////////////
//////////////void DeleteRepitable(Node*& head) {
//////////////	Node* current = head;
//////////////
//////////////	while (current != nullptr && current->next != nullptr) {
//////////////		Node* time_node = current;
//////////////		while (time_node->next != nullptr) {
//////////////			if (time_node->next->data == current->data) {
//////////////				time_node->next = time_node->next->next;
//////////////				delete time_node->next;
//////////////			}
//////////////			else {
//////////////				time_node = time_node->next;
//////////////			}
//////////////		}
//////////////		current = current->next;
//////////////	}
//////////////}
//////////////
//////////////void removeDuplicates(Node*& head) {
//////////////	Node* current = head;
//////////////
//////////////	while (current != nullptr && current->next != nullptr) {
//////////////		Node* runner = current;
//////////////
//////////////		while (runner->next != nullptr) {
//////////////			if (runner->next->data == current->data) {
//////////////				Node* temp = runner->next;
//////////////				runner->next = runner->next->next;
//////////////				delete temp; // Освобождаем память удаленного узла
//////////////			}
//////////////			else {
//////////////				runner = runner->next;
//////////////			}
//////////////		}
//////////////
//////////////		current = current->next;
//////////////	}
//////////////}

//int main() {
//	Node* head = nullptr;
//
//	// Добавляем элементы в список: 1 -> 2 -> 3 -> 4 -> 5
//	appendNode(head, 1);
//	appendNode(head, 2);
//	appendNode(head, 3);
//	appendNode(head, 3);
//	appendNode(head, 2);
//
//	std::cout << "Ishodniy spisok:" << std::endl;
//	pritsList(head);
//
//	//int position = 3; // Позиция, с которой начинаем перемещение в начало списка
//	//ListRer(head, position);
//
//	//std::cout << "Posle peremesheniya: " << position << endl;
//	//pritsList(head);
//
//	//std::cout << "Posle appenda: " << endl;
//	//AppendElement(head, 5);
//	//pritsList(head);
//	DeleteRepitable(head);
//
//	std::cout << "Список после удаления всех повторяющихся элементов:" << std::endl;
//	pritsList(head);
//
//	// Освобождаем выделенную память
//	Node* current = head;
//	while (current != nullptr) {
//		Node* temp = current;
//		current = current->next;
//		delete temp;
//	}
//
//	return 0;
//}


//
//static int sum(int a, int b) {
//	return a + b;
//}
////
////struct Node {
////	int data;
////	Node* next;
////
////	Node(int value) : data(value), next(nullptr) {}
////};
////
////void appendNode(Node*& head, int value) {
////	Node* new_node = new Node(value);
////	if (head == nullptr) {
////		head = new_node;
////	}
////	else {
////		Node* current = head;
////		while (current->next != nullptr) {
////			current = current->next;
////		}
////		current->next = new_node;
////	}
////}
////void pritsList(Node* head) {
////	Node* current = head;
////	while (current != nullptr) {
////		std::cout << current->data << " ";
////		current = current->next;
////	}
////	std::cout << std::endl;
////}
////
////void ListRer(Node*& head, int pos) {
////	int count = 1;
////	Node* current = head;
////	Node* NodePos = nullptr;
////	while (current->next != nullptr) {
////		if (count == pos - 1) {
////			NodePos = current->next;
////			current->next = nullptr;
////			break;
////		}
////		else {
////			current = current->next;
////			count++;
////		}
////	}
////	Node* tail = NodePos;
////	while (tail->next != nullptr) {
////		tail = tail->next;
////	}
////
////	// Переносим sublistStart в начало исходного списка
////	tail->next = head;
////	head = NodePos;
////}
////
////void AppendElement(Node*& head,int value) {
////
////	Node* current = head;
////	while (current->next != nullptr && current->next->data < value) {
////		current = current->next;
////	}
////
////	Node* cur_end = current->next;
////
////	Node* new_elem = new Node(value);
////
////	new_elem->next = current->next;
////
////	current->next = new_elem;
////}
////
////void DeleteRepitable(Node*& head) {
////	Node* current = head;
////
////	while (current != nullptr && current->next != nullptr) {
////		Node* time_node = current;
////		while (time_node->next != nullptr) {
////			if (time_node->next->data == current->data) {
////				time_node->next = time_node->next->next;
////				delete time_node->next;
////			}
////			else {
////				time_node = time_node->next;
////			}
////		}
////		current = current->next;
////	}
////}
////
////void removeDuplicates(Node*& head) {
////	Node* current = head;
////
////	while (current != nullptr && current->next != nullptr) {
////		Node* runner = current;
////
////		while (runner->next != nullptr) {
////			if (runner->next->data == current->data) {
////				Node* temp = runner->next;
////				runner->next = runner->next->next;
////				delete temp; // Освобождаем память удаленного узла
////			}
////			else {
////				runner = runner->next;
////			}
////		}
////
////		current = current->next;
////	}
////}
////
////int main() {
////	Node* head = nullptr;
////
////	// Добавляем элементы в список: 1 -> 2 -> 3 -> 4 -> 5
////	appendNode(head, 1);
////	appendNode(head, 2);
////	appendNode(head, 3);
////	appendNode(head, 3);
////	appendNode(head, 2);
////
////	std::cout << "Ishodniy spisok:" << std::endl;
////	pritsList(head);
////
////	int position = 3; // Позиция, с которой начинаем перемещение в начало списка
////	ListRer(head, position);
////
////	std::cout << "Posle peremesheniya: " << position << endl;
////	pritsList(head);
////
////	std::cout << "Posle appenda: " << endl;
////	AppendElement(head, 5);
////	pritsList(head);
////	DeleteRepitable(head);
////
////	std::cout << "Список после удаления всех повторяющихся элементов:" << std::endl;
////	pritsList(head);
////
////	// Освобождаем выделенную память
////	Node* current = head;
////	while (current != nullptr) {
////		Node* temp = current;
////		current = current->next;
////		delete temp;
////	}
////
////	return 0;
////}


#include "Wall.h"

int qwerty = 14;