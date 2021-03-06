// Copyright © 2017-2019 Trust.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "../../src/HexCoding.h"
#include "../../src/PrivateKey.h"
#include "../../src/PublicKey.h"
#include "../../src/Tendermint/Address.h"

#include "../TWTestUtilities.h"

#include <gtest/gtest.h>
#include <TrustWalletCore/TWHDWallet.h>

namespace TW {
namespace Tendermint {

TEST(Address, FromKeyHash) {
    auto privateKey = PrivateKey(parse_hex("95949f757db1f57ca94a5dff23314accbe7abee89597bf6a3c7382c84d7eb832"));
    auto publicKeyData = privateKey.getPublicKey(true);
    ASSERT_EQ(hex(publicKeyData.begin(), publicKeyData.end()), "026a35920088d98c3888ca68c53dfc93f4564602606cbb87f0fe5ee533db38e502");

    auto publicKey = PublicKey(publicKeyData);
    auto address = Address("bnb", publicKey);
    ASSERT_EQ(address.encode(), "bnb1grpf0955h0ykzq3ar5nmum7y6gdfl6lxfn46h2");
}

}} // namespace
