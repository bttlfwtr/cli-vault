#ifndef PRINT_HANDLER_HPP
#define PRINT_HANDLER_HPP

#include <iostream> // dependency injection using ostream object
// #include <sstream>

struct PrintHandler
{
          static void PrintMenu(std::ostream& outStream);
};

#endif // !PRINT_HANDLER_HPP