#pragma once

#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>

namespace eosio {
   class [[eosio::contract("mock.vaulta")]] mock : public contract {
      public:
         using contract::contract;

         [[eosio::action]] void deposit(const name& owner, const asset& amount);
         [[eosio::action]] void withdraw(const name& owner, const asset& amount);
         [[eosio::action]] void unstaketorex(const name& owner, const name& receiver, const asset& from_net, const asset& from_cpu);
         [[eosio::action]] void claimrewards(const name owner);

         using deposit_action = eosio::action_wrapper<"deposit"_n, &mock::deposit>;
         using withdraw_action = eosio::action_wrapper<"withdraw"_n, &mock::withdraw>;
         using unstaketorex_action = eosio::action_wrapper<"unstaketorex"_n, &mock::unstaketorex>;
         using claimrewards_action = eosio::action_wrapper<"claimrewards"_n, &mock::claimrewards>;
   };
} /// namespace eosio
