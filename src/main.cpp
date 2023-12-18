#include "Password_Manager.hpp"

// int argc, const char** argv
int main() // pointer to argument pointers thus an array of pointers
{
          PasswordManager* pwManager = new PasswordManager();

          std::cout << "terminating process...\n";

          delete pwManager;

          return 0;
}