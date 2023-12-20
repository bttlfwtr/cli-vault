#include "../src/Vault_Container.hpp"

int main()
{
          VaultContainer container;

          Account amazonItem0("amazon", "amazonUsername0", "amazonPassword0", "somegmailaccount0@gmail.com" , "no prime", Tag::personal);
          Account amazonItem1("amazon", "amazonUsername1", "amazonPassword1", "somegmailaccount1@gmail.com" , "yes prime", Tag::personal);

          container.AddItem(amazonItem0);

          container.PrintVault(std::cout);
}