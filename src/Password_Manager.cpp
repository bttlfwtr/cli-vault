#include "Password_Manager.hpp"

void PasswordManager::RUN_CLI_VAULT()
{
          while (true)
          {
                    PrintHandler::PrintMenu(std::cout);

                    switch (InputHandler::GetMenuChoice(std::cin))
                    {
                    case 'A':
                              PrintHandler::PrintMenuChoiceSelection("ADDED", std::cout);
                              break;
                    case 'S':
                              PrintHandler::PrintMenuChoiceSelection("SEARCHED", std::cout);
                              break;
                    case 'M':
                              PrintHandler::PrintMenuChoiceSelection("MODIFIED", std::cout);
                              break;
                    case 'D':
                              PrintHandler::PrintMenuChoiceSelection("DELETED", std::cout);
                              break;
                    case 'E':
                              PrintHandler::PrintMenuChoiceSelection("EXITED", std::cout);
                              break;
                    case 'H':
                              PrintHandler::PrintMenuChoiceSelection("HELPED", std::cout);
                              break;

                    default:
                              PrintHandler::PrintMenuChoiceSelection("FAILED OPERATION", std::cout);
                              break;
                    }

          }


          return;
}
