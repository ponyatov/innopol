/// @defgroup rpc rpc
/// @brief INNOPOL simplified RPC

#include <stdint.h>

#if defined __BYTE_ORDER__ && __BYTE_ORDER__ == __LITTLE_ENDIAN
#else
#error structs use implicit byte ordering
#endif

/// @brief Channel layer packet
struct Channel {
    uint8_t start = 0xFA;  //< start byte
    uint16_t length;       //< package length (`l_l`/`l_h`, little endial)
    uint8_t crc8;          //< ^header check sum
    uint8_t data = 0xFB;   //< data frame marker
    uint8_t message[];     ///< @ref Transport layer packet
} __attribute__((packed));

extern bool check(Channel* ch);  //< check package format

/// @brief Transport layer packet
struct Transport {
    /* data */
};
