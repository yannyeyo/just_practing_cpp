#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

//bool is_idendef(string str, int pos) {
//	if (pos == 0) {
//		if (((str[pos] >= 'a' && str[pos] <= 'z')) || ((str[pos] >= 'A' && str[pos] <= 'Z'))) {
//			return is_idendef(str, pos + 1);
//		}
//		else {
//			return false;
//		}
//	}
//	else if (pos < str.size()) {
//		if (((str[pos] >= 'a' && str[pos] <= 'z')) || ((str[pos] >= 'A' && str[pos] <= 'Z')) || ((str[pos] >= '1' && str[pos] <= '9'))) {
//			return is_idendef(str, pos + 1);
//		}
//		else {
//			return false;
//		}
//	}
//	else {
//		return true;
//	}
//}
//
//int main() {
//	cout << is_idendef("Ssf112", 0);
//}

//struct Node {
//	int data;
//	Node* next;
//
//	Node(int value): data(value), next(nullptr) {}
//};
//
//void appendNode(Node*& head, int value) {
//	Node* new_elem = new Node(value);
//	if (head == nullptr) {
//		head = new_elem;
//	}
//	else {
//		Node* current = head;
//		while (current->next != nullptr)
//		{
//			current = current->next;
//		}
//		current->next = new_elem;
//	}
//}
//
//void NewMass(Node*& head) {
//	Node* currnet = head;
//	Node* new_mas = nullptr;
//	int count = 0;
//
//	while (currnet != nullptr) {
//		currnet = currnet->next;
//		count++;
//	}
//
//	while (count != 0) {
//		Node* current2 = head;
//		while (current2->next != 0) {
//			current2 = current2->next;
//		}
//		if (new_mas == nullptr) {
//			new_mas = current2;
//		}
//		else {
//			while (new_mas->next != nullptr) {
//				new_mas = new_mas->next;
//			}
//			new_mas->next = current2;
//		}
//		count--;
//		current2 = nullptr;
//	}
//}
//
//list<int> reverse2(list<int> l, int n, list<int>& m) {
//	if (n <= 0) return m;
//	else {
//		Node* pointer = l.front();
//		for (int i = 0; i < n - 1; i++) {
//			pointer = pointer->next;
//		}
//		m.push_back(pointer->data);
//		reverse2(l, n - 1, m);
//	}
//}
//
//void pritsList(Node* head) {
//	Node* current = head;
//	while (current != nullptr) {
//		cout << current->data << " ";
//		current = current->next;
//	}
//	cout << endl;
//}
//
//int main() {
//	Node* head = nullptr;
//
//	appendNode(head, 1);
//	appendNode(head, 2);
//	appendNode(head, 3);
//	appendNode(head, 3);
//	appendNode(head, 2);
//
//	std::cout << "Ishodniy spisok:" << std::endl;
//	pritsList(head);
//	list<int> a = { 1,2,3,4 };
//	list<int> b = { };
//	reverse2(a, 4, b);
//
//	std::cout << "Инвертированный список:" << std::endl;
//	pritsList(head);
//}


//
//void func(string str) {
//	vector<char>bokvi = {};
//	vector<char>znaki = {};
//	string itog_str = "";
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-' || str[i] == '(' || str[i] == ')') {
//			znaki.push_back(str[i]);
//		}
//		else {
//			bokvi.push_back(str[i]);
//		}
//	}
//	for (std::vector<char>::iterator it_b = bokvi.begin(); it_b != bokvi.end(); it_b++) {
//		for (std::vector<char>::iterator it_z = znaki.begin(); it_z != znaki.end(); it_z++) {
//			itog_str += *it_b;
//			if (*(it_z + 1) != '(') {
//				itog_str += *(it_b+1);
//				itog_str += *it_z;
//				it_b = it_b + 1;
//				break;
//			}
//			else {
//				std::vector<char>::iterator time = 
//			}
//		}
//	}
//}
//int main() {
//	string a = "A+(B+C)*D";
//	func(a);
//}

//#include <iostream>
//#include <stack>
//#include <string>
//
//
//int precedence(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    if (op == '^') return 3;
//    return 0;
//}
//
//bool isOperator(char c) {
//    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
//}
//
//std::string infixToPostfix(const std::string& infix) {
//    std::stack<char> operators;
//    std::string output;
//
//    for (size_t i = 0; i < infix.length(); ++i) {
//        char c = infix[i];
//
//        // Если символ - пробел, игнорируем его
//        if (c == ' ') continue;
//
//        // Если символ - цифра, добавляем его к выходной строке
//        if (std::isdigit(c)) {
//            while (i < infix.length() && std::isdigit(infix[i])) {
//                output += infix[i];
//                i++;
//            }
//            output += ' ';
//            i--; // возвращаем индекс назад, т.к. внешний цикл также увеличивает индекс
//        }
//        // Если символ - открывающая скобка, помещаем её в стек
//        else if (c == '(') {
//            operators.push(c);
//        }
//        // Если символ - закрывающая скобка, извлекаем из стека до открывающей скобки
//        else if (c == ')') {
//            while (!operators.empty() && operators.top() != '(') {
//                output += operators.top();
//                output += ' ';
//                operators.pop();
//            }
//            operators.pop(); // удаляем открывающую скобку
//        }
//        // Если символ - оператор
//        else if (isOperator(c)) {
//            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
//                output += operators.top();
//                output += ' ';
//                operators.pop();
//            }
//            operators.push(c);
//        }
//    }
//
//    // Извлекаем все оставшиеся операторы из стека
//    while (!operators.empty()) {
//        output += operators.top();
//        output += ' ';
//        operators.pop();
//    }
//
//    return output;
//}
//
//int main() {
//    std::string infix = "3 + (5 *  2) - 8 ";
//    std::string postfix = infixToPostfix(infix);
//
//    std::cout << "Postfix expression: " << postfix << std::endl;
//
//    return 0;
//}

//class A {
//private:
//	int a;
//public:
//	explicit A(int _a) : a(_a) {};
//};
//
//int main() {
//	A a1 = static_cast<int>(24);
//}

//class B;
//
//class A {
//	B* b_uk;
//};
//
//class B {
//	A* a_uk;
//};

//int a = 2;
//
//int& func(int t) {
//	a = a + t;
//	return a;
//}
//
//int main() {
//	int t = 2;
//	cout << func(t) << endl;
//	func(t) = 10;
//	cout << func(t) << endl;
//
//}

//
//class A {
//	int a;
//public:
//	explicit A(int _a) {
//		a = _a;
//	}
//};
//
//int main() {
//
//	A a(10);
//}

//class Person
//{
//    std::string name{};
//    unsigned age{};
//public:
//    void print()
//    {
//        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
//    }
//    Person(std::string p_name, unsigned p_age)
//    {
//        name = p_name;
//        age = p_age;
//        std::cout << "First constructor" << std::endl;
//    }
//    Person(std::string p_name) : Person(p_name, 18) // вызов первого конструктора
//    {
//        std::cout << "Second constructor" << std::endl;
//    }
//    Person() : Person(std::string("Undefined")) // вызов второго конструктора
//    {
//        std::cout << "Third constructor" << std::endl;
//    }
//
//    ~Person() {
//        cout << "Destructor is here!" << std::endl;
//    }
//};
//int main()
//{
//    Person sam;     // вызываем конструктор Person()
//    sam.print();
//}

//
//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	virtual ~A() {
//		cout << "A destructor" << endl;
//	}
//};
//
//class B {
//public:
//	virtual ~B() {
//		cout << "B destructor" << endl;
//	}
//};
//
//class C : virtual public A, virtual public B {
//public:
//	virtual ~C() {
//		cout << "C destructor" << endl;
//	}
//};
//
//class D : virtual public A, virtual public B {
//public:
//	virtual ~D() {
//		cout << "D destructor" << endl;
//	}
//};
//
//class E : public C, public D, virtual public B {
//public:
//	virtual ~E() {
//		cout << "E destructor" << endl;
//	}
//};
//
//int main() {
//	E* e = new E();
//	delete e;
//
//	return 0;
//}


//#define MAX(a, b) (a >= b ? a : b)
//
//int result = 5 + MAX(1, 4);
//
//int main() {
//	cout << result;
//}


//class A {
//public:
//	A() { cout << "A constr"; }
//	 virtual ~A(){ cout << "A destruct"; }
//};
//
//class B : public A {
//public:
//	B() { cout << "B constr"; }
//	virtual  ~B() { cout << "B destruct"; }
//};
//
//int main() {
//	A* uk = new B;
//	delete uk;
//	return 0;
//}
//#include <chrono>

//class LogDuration {
//public:
//    LogDuration(std::string id)
//        : id_(std::move(id)) {
//    }
//
//    ~LogDuration() {
//        const auto end_time = std::chrono::steady_clock::now();
//        const auto dur = end_time - start_time_;
//        std::cout << id_ << ": ";
//        std::cout << "operation time"
//            << ": " << std::chrono::duration_cast<std::chrono::milliseconds>(dur).count()
//            << " ms" << std::endl;
//    }
//
//private:
//    const std::string id_;
//    const std::chrono::steady_clock::time_point start_time_ = std::chrono::steady_clock::now();
//};
//
//
//int main() {
//    vector<uint8_t> big_vector(1e9, 0);
//
//    {
//        LogDuration ld("vector copy");
//        vector<uint8_t> reciever(move(big_vector));
//    }
//    cout << "size of big_vector is " << big_vector.size() << '\n';
//}

//class A {
//private:
//	int a;
//public:
//	A() = default;
//	A(int _a) : a(_a) { cout << "A constr"; }
//	virtual ~A() { cout << "A destruct"; }
//};
//
//class B : public A {
//private:
//	int b;
//public:
//	B() = default;
//	B(int _b) : b(_b) { cout << "B constr"; }
//	virtual  ~B() { cout << "B destruct"; }
//};
//
//int main() {
//	A a(10);
//	B b(move(a));
//	
//	return 0;
//}

//class BaseClass
//{
//	virtual void func() final;
//};
//
//class DerivedClass final : public BaseClass
//{
//	virtual void func(); // compiler error: attempting to
//	// override a final function
//};
//
// class Last : public DerivedClass
// {
//	 virtual void func() {
//		 nullptr
//	 }; // compiler error: attempting to
//	 // override a final function
// };


//int main() {
//	int a = NULL;
//	int* b = new int;
//	cout << a;
//	b = nullptr;
//	cout << b;
//}

// expre_new_Operator.cpp
// compile with: /EHsc
#include <string.h>
//
//class CName {
//public:
//   enum {
//      sizeOfBuffer = 256
//   };
//
//   char m_szFirst[sizeOfBuffer];
//   char m_szLast[sizeOfBuffer];
//
//public:
//   void SetName(const char* pszFirst, const char* pszLast) {
//     strcpy_s(m_szFirst, sizeOfBuffer, pszFirst);
//     strcpy_s(m_szLast, sizeOfBuffer, pszLast);
//   }
//   void GetName() {
//       cout << m_szFirst << endl;
//       cout << m_szLast << endl;
//   }
//};
//
//int main() {
//    Allocate memory for the array
//   char* pCharArray = new char[CName::sizeOfBuffer];
//   strcpy_s(pCharArray, CName::sizeOfBuffer, "Array of characters");
//
//    Deallocate memory for the array
//   /*delete [] pCharArray;
//   pCharArray = NULL;*/
//   cout << pCharArray << endl;
//
//   delete[] pCharArray;
//    Allocate memory for the object
//   CName* pName = new CName;
//   pName->SetName("FirstName", "LastName");
//    Deallocate memory for the object
//   delete pName;
//   pName = NULL;
//
//   pName->GetName();
//
//   delete pName;
//}

//
//double divide(int a, int b)
//{
//    if (b)
//        return a / b;
//    throw "Division by zero!";
//}
//
//int main()
//{
//    int x{ 500 };
//    int y{};
//
//    try
//    {
//        double z{ divide(x, y) };
//        std::cout << z << std::endl;
//    }
//    catch (char* exec)
//    {
//        std::cout << exec << std::endl;
//    }
//    std::cout << "The End..." << std::endl;
//}

//#include <iostream>
//
//class PrintInDestructor {
//
//public:
//    ~PrintInDestructor() noexcept {
//        std::cerr << "~PrintInDestructor() invoked\n";
//    }
//
//};
//
//void throw_int_func() {
//    std::cerr << "throw_int_func() invoked\n";
//    throw 1;
//}
//
//class ThrowInDestructor {
//
//public:
//    ~ThrowInDestructor() noexcept(false) {
//        std::cerr << "~ThrowInDestructor() invoked\n";
//        //throw_int_func();
//    }
//
//private:
//    PrintInDestructor member_;
//
//};
//
//int main(int, char**) {
//
//    try {
//        ThrowInDestructor bad;
//        throw "BANG!";
//    }
//    catch (int i) {
//        std::cerr << "Catched int exception: " << i << "\n";
//    }
//    catch (const char* c) {
//        std::cerr << "Catched const char* exception: " << c << "\n";
//    }
//    catch (...) {
//        std::cerr << "Catched unknown exception\n";
//    }
//
//    return 0;
//
//}

//class A {
//private:
//
//	A(A& x) = delete;
//	A& operator=(A& x) = delete;
//};
//#include <queue>
//int main() {
//	priority_queue<int> a = {};
//
//
//	a.push(1);
//	a.push(2);
//
//	while (!a.empty()) {
//		cout << a.top() << " ";
//		a.pop();
//	}
//}


#include <iostream>

//class Shape
//{
//public:
//    Shape(int x, int y) : x{ x }, y{ y }
//    {}
//    virtual double getSquare() const = 0;     // площадь фигуры
//    virtual double getPerimeter() const = 0;  // периметр фигуры
//    void printCoords() const
//    {
//        std::cout << "X: " << x << "\tY: " << y << std::endl;
//    }
//private:
//    int x;
//    int y;
//};
//class Rectangle : public Shape  // класс прямоугольника
//{
//public:
//    Rectangle(int x, int y, double w, double h) : Shape{ x, y }, width(w), height(h)
//    { }
//    double getSquare() const override
//    {
//        return width * height;
//    }
//    double getPerimeter() const override
//    {
//        return width * 2 + height * 2;
//    }
//private:
//    double width;   // ширина
//    double height;  // высота
//};
//class Circle : public Shape     // круг
//{
//public:
//    Circle(int x, int y, double r) : Shape{ x, y }, radius(r)
//    { }
//    double getSquare() const override
//    {
//        return radius * radius * 3.14;
//    }
//    double getPerimeter() const override
//    {
//        return 2 * 3.14 * radius;
//    }
//private:
//    double radius;  // радиус круга
//};
//
//int main()
//{
//
//    Shape sh;
//    Rectangle rect{ 0, 0, 30, 50 };
//    rect.printCoords();     // X: 0    Y: 0
//
//    Circle circle{ 10, 20, 30 };
//    circle.printCoords();   // X: 10   Y: 20
//}