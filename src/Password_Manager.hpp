#ifndef __PASSWORD_MANAGER_HPP__
#define __PASSWORD_MANAGER_HPP__

#include "Input_Handlers.hpp"

struct PasswordManager
{
          PasswordManager() { RUN_CLI_VAULT(); }
          ~PasswordManager(){}

          void RUN_CLI_VAULT();
};

#endif