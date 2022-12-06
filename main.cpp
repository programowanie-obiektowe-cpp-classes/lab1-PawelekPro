#include <iostream>
using namespace std;

//struct human
//{
//    void   printage() { std::cout << age << '\n'; }
//    int age;
//    double height;
//};
//
//int main()
//{
//    human alice;
//    alice.height = 175.5;
//    alice.age    = 35;
//    alice.printage();
//}

struct Human
{
    Human(int a, double h, std::string n)
    {
        age    = a;
        height = h;
        name   = n;
        std::cout << "Hello, " << name << "!\n";
    }
    ~Human() { std::cout << "Goodbye, " << name << "...\n"; }

    int         age;
    double      height;
    std::string name;
};

int main()
{
    Human Alice(35, 175.5, "Alice");
    
    int a1 = 0; // Nie, tutaj nie ma przypisania, int od razu inicjalizowany jest 0. Nieco myl¹ce...
    int a2(0);  // Tutaj bez niespodzianki, ale co siê stanie, gdy zawo³amy domyœlny konstruktor
                // jakiejœ klasy?
    int a3{0};  // Od C++11 preferujemy nawiasy klamrowe!
    std::cout << "a1:" << a1 << endl;
    std::cout << "a2:" << a2 << endl;
    std::cout << "a3:" << a3 << endl;

}
