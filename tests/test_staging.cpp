#include "../src/Vault_Container.hpp"
#include "../externals/ChronoBenchmark.hpp"

int main()
{
          VaultContainer container;

          // Account amazonItem0("amazon", "amazonUsername0", "amazonPassword0", "somegmailaccount0@gmail.com", "no prime", Tag::PERSONAL);
          // Account amazonItem1("amazon", "amazonUsername1", "amazonPassword1", "somegmailaccount1@gmail.com", "yes prime", Tag::PERSONAL);
          // Account amazonItem2("amazon", "amazonUsername2", "amazonPassword2", "somegmailaccount2@gmail.com", "blank slate account", Tag::PERSONAL);
          // Account facebookItem0("facebook", "facebookUsername0", "facebookPassword0", "somegmailaccount3@gmail.com", "family and friends", Tag::PERSONAL);
          // Account facebookItem1("facebook", "facebookUsername1", "facebookPassword1", "somegmailaccount4@gmail.com", "link game accounts", Tag::GAME);


          // container.AddItem(amazonItem0);
          // container.AddItem(amazonItem1);
          // container.AddItem(amazonItem2);
          // container.AddItem(facebookItem0);
          // container.AddItem(facebookItem1);

          // std::cout << "outerSize:" << container.vault.size() << "\n";

          // container.PrintVault(std::cout);

          Timer* time = new Timer;

          for (int i { 0 }; i < 9999999; ++i)
          {
                    container.AddItem(Account("amazon" + i, "amazonUsername0", "amazonPassword0", "somegmailaccount0@gmail.com", "no prime", Tag::PERSONAL));
          }

          delete time;
}
