#include "../src/Vault_Container.hpp"

int main()
{
          VaultContainer container;

          Account amazonItem0("amazon", "amazonUsername0", "amazonPassword0", "no prime", Tag::personal);

          container.AddItem(amazonItem0);

          container.PrintVault(std::cout);
}