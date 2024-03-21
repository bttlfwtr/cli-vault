#include "Input_Handlers.hpp"

char InputHandlers::GetMenuChoice(std::istream& inStream)
{
      PrintHandlers::PrintInputContext("choice: ", std::cout);

      char menuChoice{};
      inStream >> menuChoice;
      // toupper returns int, typecast char to ignore conversion warning
      menuChoice = (char)toupper(menuChoice);

      // ternary check if menuChoice is a lower case, if true, convert, else default to input.
      // take lower case input, subtract it by the lower bound of its caseness to normalize ascii value, then add lower bound of upper case.
      // menuChoice = (menuChoice >= 'a' && menuChoice <= 'z') ? (menuChoice - 97 + 65) : menuChoice;

      // ignore buffered following inputs of char std::cin
      inStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      return menuChoice;
}

Account InputHandlers::GetAccountInput(std::istream& inStream)
{
      Account newAccount{};
      PrintHandlers::PrintInputContext("domain: ", std::cout);
      inStream >> newAccount.domain;

      PrintHandlers::PrintInputContext("username: ", std::cout);
      inStream >> newAccount.username;

      PrintHandlers::PrintInputContext("password: ", std::cout);
      inStream >> newAccount.password;

      PrintHandlers::PrintInputContext("email: ", std::cout);
      inStream >> newAccount.email;

      PrintHandlers::PrintInputContext("description: ", std::cout);
      std::getline(inStream, newAccount.description);

      PrintHandlers::PrintInputContext("tag: ", std::cout);

      return newAccount;
}