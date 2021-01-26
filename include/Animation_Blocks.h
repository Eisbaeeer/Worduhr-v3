#pragma once
#include "Arduino.h"

enum BLOCKS {
    WLANT,
    WLAN,
    HERZ,
    SMILY,
    FIRE_1,
    FIRE_2,
    FIRE_3,
    FIRE_4,
    FIRE_5,
    FIRE_6
};

const uint16_t grafik_11x10[][11] = {
    {// WLANT
     0b10001010000, 0b10101010000, 0b11011010000, 0b10001011111, 0b00000000000,
     0b01110010001, 0b10001011001, 0b11111010101, 0b10001010011, 0b00000000000},
    {// WLAN
     0b00011111000, 0b01110001110, 0b11000000011, 0b00001110000, 0b00111011100,
     0b01100000110, 0b00001110000, 0b00011011000, 0b00000000000, 0b00000100000},
    {0b00110001100, // HERZ
     0b01111011110, 0b11111111111, 0b11111111111, 0b11111111111, 0b01111111110,
     0b00111111100, 0b00011111000, 0b00001110000, 0b00000100000},
    {
        //				  01234567890
        0b00011111000, // 0	SMILY
        0b00111111100, // 1
        0b01101110110, // 2
        0b11111111111, // 3
        0b11111111111, // 4
        0b10111111101, // 5
        0b11001110011, // 6
        0b01110001110, // 7
        0b00111111100, // 8
        0b00011111000  // 9
    },
    {
        //				  01234567890
        0b00000000000, // 0 FIRE_1
        0b00000000000, // 1
        0b00000000000, // 2
        0b00000000000, // 3
        0b00000000000, // 4
        0b00000000000, // 5
        0b00000000000, // 6
        0b00000000000, // 7
        0b00000000000, // 8
        0b00100000000  // 9
    },
    {
        //				  01234567890
        0b00000000000, // 0 FIRE_2
        0b00000000000, // 1
        0b00000000000, // 2
        0b00000000000, // 3
        0b00000000000, // 4
        0b00000000000, // 5
        0b00000000000, // 6
        0b00010000000, // 7
        0b00100000000, // 8
        0b00000000000  // 9
    },
    {
        //				  01234567890
        0b00000000000, // 0 FIRE_3
        0b00000000000, // 1
        0b00000000000, // 2
        0b00000000000, // 3
        0b00000100000, // 4
        0b00001000000, // 5
        0b00001000000, // 6
        0b00000000000, // 7
        0b00000000000, // 8
        0b00000000000  // 9
    },
    {
        //				  01234567890
        0b00000000000, // 0 FIRE_4
        0b00000000000, // 1
        0b00000010000, // 2
        0b00000101000, // 3
        0b00000010000, // 4
        0b00000000000, // 5
        0b00000000000, // 6
        0b00000000000, // 7
        0b00000000000, // 8
        0b00000000000  // 9
    },
    {
        //				  01234567890
        0b00000000000, // 0 FIRE_5
        0b00000010000, // 1
        0b00000101000, // 2
        0b00001000100, // 3
        0b00000101000, // 4
        0b00000010000, // 5
        0b00000000000, // 6
        0b00000000000, // 7
        0b00000000000, // 8
        0b00000000000  // 9
    },
    {
        //				  01234567890
        0b00000111000, // 0 FIRE_6
        0b00001000100, // 1
        0b00010000010, // 2
        0b00010000010, // 3
        0b00010000010, // 4
        0b00001000100, // 5
        0b00000111000, // 6
        0b00000000000, // 7
        0b00000000000, // 8
        0b00000000000  // 9
    },

    /*
            {
    //				  01234567890
                                    0b#...#.#....,    // 0
                                    0b#.#.#.#....,    // 1
                                    0b##.##.#....,    // 2
                                    0b#...#.#####,    // 3
                                    0b...........,    // 4
                                    0b.###..#...#,    // 5
                                    0b#...#.##..#,    // 6
                                    0b#####.#.#.#,    // 7
                                    0b#...#.#..##,    // 8
                                    0b...........     // 9
            },
    */
};
