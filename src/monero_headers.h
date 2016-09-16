//
// Created by mwo on 5/11/15.
//

#ifndef XMREG01_MONERO_HEADERS_H_H
#define XMREG01_MONERO_HEADERS_H_H

#define DB_LMDB   2
#define BLOCKCHAIN_DB DB_LMDB


#include "net/http_base.h"
#include "net/http_server_handlers_map2.h"
#include "net/http_client.h"
#include "storages/http_abstract_invoke.h"

#include "cryptonote_core/cryptonote_basic.h"
#include "cryptonote_core/tx_pool.h"
#include "cryptonote_core/blockchain.h"
#include "blockchain_db/lmdb/db_lmdb.h"

#include "ringct/rctTypes.h"
#include "ringct/rctOps.h"
#include "ringct/rctSigs.h"

#include "common/base58.h"


#endif //XMREG01_MONERO_HEADERS_H_H

