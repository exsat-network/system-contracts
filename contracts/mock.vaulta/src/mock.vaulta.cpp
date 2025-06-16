#include <mock.vaulta/mock.vaulta.hpp>

namespace eosio {

void mock::deposit(const name& owner, const asset& amount) {
   require_auth(owner);
   action(
      permission_level{ owner, "active"_n },
      "eosio"_n,
      "deposit"_n,
      std::make_tuple(owner, amount)
   ).send();
}

void mock::withdraw(const name& owner, const asset& amount) {
   require_auth(owner);
   action(
      permission_level{ owner, "active"_n },
      "eosio"_n,
      "withdraw"_n,
      std::make_tuple(owner, amount)
   ).send();
}

void mock::unstaketorex(const name& owner, const name& receiver, const asset& from_net, const asset& from_cpu) {
   require_auth(owner);
   action(
      permission_level{ owner, "active"_n },
      "eosio"_n,
      "unstaketorex"_n,
      std::make_tuple(owner, receiver, from_net, from_cpu)
   ).send();
}

void mock::claimrewards(const name owner) {
   require_auth(owner);
   action(
      permission_level{ owner, "active"_n },
      "eosio"_n,
      "claimrewards"_n,
      std::make_tuple(owner)
   ).send();
}

} /// namespace eosio
