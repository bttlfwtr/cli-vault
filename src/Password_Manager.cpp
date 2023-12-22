#include "Password_Manager.hpp"

void PasswordManager::RUN_CLI_VAULT()
{
          while (true)
          {
                    // system("clear"); // vulnerability
                    PrintHandlers::PrintMenu(std::cout);

                    /*
                    RUN_CLI_VAULT is the caller / calling func
                    GetMenuChoice is the callee / called func
                    GetMenuChoice transfers smart pointer ownership to RUN_CLI_VAULT
                    Once switch case ends, then the smart parter is considered out of scope
                    then the destructor for it will be called.
                    */
                    switch (InputHandlers::GetMenuChoice(std::cin))
                    {
                              case 'A':

                                        PrintHandlers::PrintMenuSelection("ADDED\n", std::cout);
                                        break;
                              case 'S':
                                        PrintHandlers::PrintMenuSelection("SEARCHED\n", std::cout);
                                        break;
                              case 'M':
                                        PrintHandlers::PrintMenuSelection("MODIFIED\n", std::cout);
                                        break;
                              case 'D':
                                        PrintHandlers::PrintMenuSelection("DELETED\n", std::cout);
                                        break;
                              case 'E': // exits program by all means of return keyword.
                                        PrintHandlers::PrintMenuSelection("EXITED\n", std::cout);

                                        return;
                              case 'H':
                                        PrintHandlers::PrintMenuSelection("HELPED\n", std::cout);

                                        break;
                              default:
                                        PrintHandlers::PrintMenuSelection("BAD OPERATION\n", std::cout);
                                        break;
                    }

                    // _getch(); // if using screen clear

          }

          return;
}