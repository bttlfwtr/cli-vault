#include "Password_Manager.hpp"

void PasswordManager::RUN_CLI_VAULT()
{
          while (true)
          {
                    PrintHandlers::PrintMenu(std::cout);

                    /*
                    RUN_CLI_VAULT is the caller / calling func
                    GetMenuChoice is the callee / called func
                    GetMenuChoice transfers smart pointer ownership to RUN_CLI_VAULT
                    Once switch case ends, then the smart parter is considered out of scope
                    then the destructor for it will be called.
                    */
                    switch (*InputHandlers::GetMenuChoice(std::cin))
                    {
                              case 'A':
                                        PrintHandlers::PrintMenuSelection("ADDED", std::cout);
                                        break;
                              case 'S':
                                        PrintHandlers::PrintMenuSelection("SEARCHED", std::cout);
                                        break;
                              case 'M':
                                        PrintHandlers::PrintMenuSelection("MODIFIED", std::cout);
                                        break;
                              case 'D':
                                        PrintHandlers::PrintMenuSelection("DELETED", std::cout);
                                        break;
                              case 'E': // exits program by all means of return keyword.
                                        PrintHandlers::PrintMenuSelection("EXITED", std::cout);

                                        return;
                              case 'H':
                                        PrintHandlers::PrintMenuSelection("HELPED", std::cout);

                                        break;
                              default:
                                        PrintHandlers::PrintMenuSelection("FAILED OPERATION", std::cout);
                                        break;
                    }

          }

          return;
}