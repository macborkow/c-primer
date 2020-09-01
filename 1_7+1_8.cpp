///*
//* comment pairs /*   */ cannot nest.
//* ''cannot nest'' is considered source code,
//* as is the rest of the program
//*/
//int main()
//{
//    return 0;
//}


//std::cout << "/*";
//std::cout << "*/";
//std::cout << /* "*/" */;
//std::cout << /*  "*/" /* "/*"  */;

//fixed:
#include <iostream>
int main() {
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */";
std::cout << /* "*/" /* "/*" */;
return 0;
}