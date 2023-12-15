#include "Password_Manager.hpp"

void PasswordManager::RUN_CLI_VAULT()
{
          while (true)
          {
                    PrintHandler::PrintMenu(std::cout);

                    switch (InputHandler::GetMenuChoice(std::cin))
                    {
                    case 'A':
                              PrintHandler::PrintMenuSelection("ADDED", std::cout);
                              break;
                    case 'S':
                              PrintHandler::PrintMenuSelection("SEARCHED", std::cout);
                              break;
                    case 'M':
                              PrintHandler::PrintMenuSelection("MODIFIED", std::cout);
                              break;
                    case 'D':
                              PrintHandler::PrintMenuSelection("DELETED", std::cout);
                              break;
                    case 'E': // exits program by all means of return keyword.
                              PrintHandler::PrintMenuSelection("EXITED", std::cout);

                              return;
                    case 'H':
                              PrintHandler::PrintMenuSelection("HELPED", std::cout);
                              break;

                    default:
                              PrintHandler::PrintMenuSelection("FAILED OPERATION", std::cout);
                              break;
                    }

          }


          return;
}
