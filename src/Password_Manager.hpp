#ifndef PASSWORD_MANAGER_HPP
#define PASSWORD_MANAGER_HPP

#include "Input_Handler.hpp"

struct PasswordManager
{
          PasswordManager(){}
          ~PasswordManager(){}

          void ProcessMenuInput(const char& menuInput);

          void RUN_CLI_VAULT();
};

#endif // !PASSWORD_MANAGER_HPP


