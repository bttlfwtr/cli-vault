#include "password_manager.hpp"

int main(int argc, const char** argv) // pointer to argument pointers thus an array of pointers
{
          PasswordManager* pwManager{new PasswordManager};
          pwManager->RUN_CLI_VAULT();
          delete pwManager;

          return 0;
}