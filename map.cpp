#include <cassert>
#include "map.h"

static const char map[] = "0000000001000000"\
                          "0              0"\
                          "0       0 0    0"\
                          "0       0 0    0"\
                          "000000000 000000"\
                          "0              0"\
                          "1   000    00  0"\
                          "0     0    04  4"\
                          "0000000000002 20"\
                          "2222222222222 22"\
                          "3              3"\
                          "2222222222 22222"\
                          "2              2"\
                          "2              2"\
                          "2              2"\
                          "2222322222232222"; //mapas skaicai=textura nuo 0 iki 4

Map::Map() : w(16), h(16) {
    assert(sizeof(map) == w*h+1); // +1 for the null terminated string
}

int Map::get(const size_t i, const size_t j) const {
    assert(i<w && j<h && sizeof(map) == w*h+1);
    return map[i+j*w] - '0';
}

bool Map::is_empty(const size_t i, const size_t j) const {
    assert(i<w && j<h && sizeof(map) == w*h+1);
    return map[i+j*w] == ' ';
}

