#ifndef PASSWORD_MANAGER_HPP
#define PASSWORD_MANAGER_HPP

#include "Input_Handlers.hpp"

struct PasswordManager
{
          PasswordManager(){ RUN_CLI_VAULT(); }


          void RUN_CLI_VAULT();

};

#endif // !PASSWORD_MANAGER_HPP


