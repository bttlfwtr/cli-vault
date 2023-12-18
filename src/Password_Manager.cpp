#include "Password_Manager.hpp"

void PasswordManager::RUN_CLI_VAULT()
{
          char* menuInput;

          while (true)
          {
                    PrintHandlers::PrintMenu(std::cout);

                    menuInput = InputHandlers::GetMenuChoice(std::cin);

                    switch (*menuInput)
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


                    delete menuInput;
          }

          return;
}