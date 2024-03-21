#include "../externals/ChronoBenchmark.hpp"
#include "../src/Print_Handlers.hpp"
#include "../src/Vault_Container.hpp"

int main()
{
      std::ios_base::sync_with_stdio(false);


      VaultContainer container;

      Account googleItem0("google", "googleUsername0", "googlePassword0", "somegmailaccount0@gmail.com", "public purposes", Account::Tag::PUBLIC);
      Account facebookItem0("facebook", "facebookUsername0", "facebookPassword0", "somegmailaccount3@gmail.com", "family and friends", Account::Tag::PERSONAL);
      Account facebookItem1("facebook", "facebookUsername1", "facebookPassword1", "somegmailaccount4@gmail.com", "link game accounts", Account::Tag::GAME);
      Account amazonItem0("amazon", "amazonUsername0", "amazonPassword0", "somegmailaccount0@gmail.com", "no prime", Account::Tag::PERSONAL);
      Account amazonItem1("amazon", "amazonUsername1", "amazonPassword1", "somegmailaccount1@gmail.com", "yes prime", Account::Tag::PERSONAL);
      Account amazonItem2("amazon", "amazonUsername2", "amazonPassword2", "somegmailaccount2@gmail.com", "blank slate account", Account::Tag::PERSONAL);

      Account duplicateAmazonItem2(Account("amazon", "amazonUsername2", "REPLACEDPASSWORD", "somegmailaccount2@gmail.com", "blank slate account", Account::Tag::PERSONAL));

      container.AddItem(googleItem0);
      container.AddItem(facebookItem0);
      container.AddItem(facebookItem1);
      container.AddItem(amazonItem0);
      container.AddItem(amazonItem1);
      container.AddItem(amazonItem2);


      container.AddItem(duplicateAmazonItem2);
      container.AddItem(duplicateAmazonItem2);
      container.AddItem(duplicateAmazonItem2);
      container.AddItem(duplicateAmazonItem2);


      container.PrintVault(std::cout);



      // ChronoTimer* timer = new ChronoTimer;

      // for (int i{ 0 }; i < 9999999; ++i)
      // {
      //           container.AddItem(Account("amazon" + std::to_string(i), "amazonUsername0", "amazonPassword0", "somegmailaccount0@gmail.com", "no prime", Account::Tag::PERSONAL));
      // }

      // delete timer;


      std::cout << "   outerSize:" << container.vault.size() << "\n      innerSize: ";

      for (const auto& domainKey : container.vault)
            std::cout << domainKey.second.size() << " ";
}
