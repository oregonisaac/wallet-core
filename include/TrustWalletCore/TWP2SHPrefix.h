// Copyright © 2017-2019 Trust.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once
#include "TWBase.h"

TW_EXTERN_C_BEGIN

/// Pay to script hash (P2SH) address prefix.
///
/// - SeeAlso: https://en.bitcoin.it/wiki/List_of_address_prefixes
TW_EXPORT_ENUM(uint8_t)
enum TWP2SHPrefix {
    TWP2SHPrefixBitcoin = 0x05,
    TWP2SHPrefixLitecoin = 0x32,
    TWP2SHPrefixDash = 0x10,
    TWP2SHPrefixZcoin = 0x07,
    TWP2SHPrefixZcashT = 0xBD,
};

TW_EXTERN_C_END
