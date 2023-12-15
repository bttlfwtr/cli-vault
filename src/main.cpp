#include "Password_Manager.hpp"

// int argc, const char** argv
int main() // pointer to argument pointers thus an array of pointers
{
          PasswordManager* pwManager{new PasswordManager};
          pwManager->RUN_CLI_VAULT();

          delete pwManager;

          return 0;
}