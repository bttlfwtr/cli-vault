#include "Vault_Container.hpp"

void VaultContainer::AddItem(const Account& item)
{
          vault[item.domain][item.username] = item;
}

void VaultContainer::PrintVault(std::ostream& outStream)
{
          // for every domain key's username key, print its value content
          for (const auto& domainKey : vault)
          {
                    for (const auto& userKey : domainKey.second)
                    {
                              outStream << userKey.second.username << "\n"
                                        << userKey.second.password << "\n"
                                        << userKey.second.description << "\n"
                                        << userKey.second.tag << "\n";
                    }
          }
}
