//
// Created by Alexander Tian on 6/26/23.
//

#ifndef ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H
#define ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H

#include "evaluation.h"
#include "types.h"

constexpr int GAME_PHASE_SCORES[6] = {0, 1, 1, 2, 4, 0};

constexpr int MVV_LVA_VALUES[6] = {  87, 390, 429, 561,1234,   0};

constexpr SCORE_TYPE PIECE_VALUES[6] = {S(  98, 134), S( 412, 420), S( 450, 464), S( 580, 809), S(1227,1472), S(   0,   0)};

constexpr SCORE_TYPE PIECE_SQUARE_TABLES[6][64] = {
        {
                S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50),
                S(  60, 109), S( 107,  94), S(  30,  81), S(  81,  20), S(  44,  38), S( 116,  34), S( -72, 105), S(-102, 133),
                S( -28,  60), S(  12,  49), S(  44,  10), S(  44, -30), S(  71, -38), S( 101, -17), S(  40,  21), S(   0,  33),
                S( -30,  27), S(   7,  16), S(   4,  -1), S(  24, -31), S(  30, -20), S(  32, -11), S(  27,   9), S( -20,  13),
                S( -38,  16), S(  -8,  14), S(  -9,  -7), S(   7, -14), S(  10, -12), S(   5, -11), S(  18,   4), S( -21,  -3),
                S( -42,   4), S( -16,  13), S( -13,  -4), S( -13,  -4), S(   0,  10), S(  -2,   1), S(  34,   2), S( -10,  -9),
                S( -47,  18), S( -18,  16), S( -29,  19), S( -36,  13), S( -23,  25), S(  16,  13), S(  42,   2), S( -18, -15),
                S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50), S( -26, -50)
        },
        {
                S(-240, -67), S(-121, -27), S( -69,  12), S(  -1, -20), S( 132, -31), S(-144,   4), S( -25, -57), S(-149,-121),
                S( -22, -29), S( -43,   5), S(  69,  -8), S(  51,  26), S(  60,  12), S(  97, -20), S(  -6, -10), S(   3, -39),
                S( -42, -15), S(  44,   3), S(  60,  35), S(  91,  42), S( 126,  14), S( 151,  18), S( 100,  -9), S(  65, -45),
                S(   8,  -6), S(  19,  36), S(  38,  51), S(  61,  58), S(  38,  62), S(  68,  55), S(  28,  38), S(  32,   5),
                S( -15,   5), S(  -9,  19), S(  15,  53), S(  16,  64), S(  28,  54), S(  25,  59), S(  43,  27), S(  -3,   6),
                S( -27, -47), S( -11,   7), S(   9,  11), S(   9,  39), S(  19,  31), S(  14,   9), S(  18,  -8), S( -19,  -9),
                S( -52, -33), S( -44,  -7), S( -12, -19), S(  -4,  15), S(  -7,  24), S(   5, -21), S( -14, -15), S(  -1, -51),
                S(-159, -13), S( -32, -52), S( -64, -10), S( -50,  -3), S( -31, -14), S( -26, -12), S( -31, -32), S( -71, -47)
        },
        {
                S( -67, -11), S(  -8, -11), S(-120,   9), S( -69,   5), S( -72,   8), S( -71,  -4), S( -12, -12), S(   1, -21),
                S( -36,  -3), S(  16,   0), S(  -1,  12), S( -10,   3), S(  24,   8), S(  63, -11), S(  20,  -1), S( -34,  -9),
                S( -12,   2), S(  26,   3), S(  59,   3), S(  42,   9), S(  59,  -2), S(  73,  17), S(  60,   7), S(  10,  10),
                S( -20,  -1), S(   7,  22), S(  16,  23), S(  58,  22), S(  40,  29), S(  50,  10), S(   8,  30), S(  -7,  12),
                S( -14,  -5), S(   6,  12), S(   5,  26), S(  19,  32), S(  37,  18), S(   3,  21), S(   3,   2), S(  14, -22),
                S(  -8, -16), S(   5,   3), S(   5,  12), S(   7,  12), S(   0,  25), S(   7,   8), S(  10, -10), S(  12, -19),
                S( -13, -16), S(   6, -25), S(  14, -10), S( -11,   1), S(  -4,  -4), S(  -5, -22), S(  21,  -1), S(   4, -37),
                S(   3, -50), S( -15, -15), S( -30, -10), S( -35,  -8), S( -44, -10), S( -30, -12), S( -41,  -4), S( -25, -34)
        },
        {
                S(  63,  10), S(  64,  12), S(  52,  16), S(  63,  17), S( 104,   2), S(  74,   5), S(  35,  12), S( 139,  -9),
                S(  26,  16), S(  17,  24), S(  56,  17), S(  72,  17), S(  75,   6), S( 122, -18), S(  48,   2), S(  70,  -5),
                S( -28,  18), S(  12,   9), S(  32,   8), S(  39,   7), S(  54,  -3), S(  92, -11), S( 115, -25), S(  52, -18),
                S( -34,  11), S( -22,   9), S(   5,  14), S(  19,   8), S(   2,  14), S(  25,   1), S( -12,   2), S(  -6,  -1),
                S( -65,   9), S( -62,  17), S( -43,  13), S( -34,  15), S( -35,   8), S( -26,  -6), S(  -7,  -9), S( -24, -17),
                S( -76,  -9), S( -51,  -5), S( -52,  -4), S( -49,   0), S( -45,   0), S( -45, -12), S( -14, -17), S( -46, -26),
                S( -85,  -8), S( -46, -15), S( -51,  -2), S( -52,  -3), S( -43, -10), S( -32, -19), S( -19, -27), S(-113,   1),
                S( -48,  -6), S( -42,   0), S( -33,   3), S( -28,  -1), S( -33,  -3), S( -39,  -7), S( -42,  -1), S( -45, -28)
        },
        {
                S( -36,  -7), S( -30,  50), S(  27,  35), S(  48,  21), S( 108,  15), S( 126,  -6), S(  81,   2), S(  53,  15),
                S( -16, -20), S( -57,  29), S( -23,  51), S( -25,  59), S( -16,  82), S(  81,  42), S(  23,  55), S(  35,  30),
                S( -23, -27), S( -16, -11), S(  -1,   6), S( -16,  74), S(   7,  85), S( 108,  34), S( 115,  11), S(  38,  75),
                S( -22, -40), S( -30,  17), S( -20,  29), S( -26,  63), S( -20,  91), S(  14,  74), S(   1,  83), S(  -4,  98),
                S( -27, -28), S( -18,  17), S( -19,  12), S( -28,  62), S( -17,  44), S(  -9,  41), S(   6,  24), S(  -5,  21),
                S( -30, -28), S(   0, -79), S( -18,   3), S( -16, -17), S( -17,  -9), S( -10,  -6), S(  11, -33), S( -13, -12),
                S( -39, -53), S(  -9, -73), S(   2, -87), S( -13, -43), S(  -6, -60), S(   9,-107), S(   4,-103), S( -32, -46),
                S( -10, -69), S( -37, -55), S( -19, -67), S(  -8, -16), S( -22, -69), S( -32, -94), S( -13, -90), S( -47, -92)
        },
        {
                S( -14,-106), S( 258, -84), S( 183, -55), S( 143, -51), S(-172,   6), S( -79,  34), S(  82,  -9), S(   7, -26),
                S( 220, -64), S(  71,  24), S(  86,  17), S(  98,   4), S(  75,  16), S(  72,  30), S( -45,  51), S(-149,  28),
                S(  68,   9), S( 112,  22), S(  92,  31), S(  -1,  29), S(  57,  20), S( 127,  47), S( 147,  38), S( -33,  19),
                S(   7,  -2), S(   0,  38), S(  17,  43), S( -22,  54), S( -59,  54), S(   7,  50), S(  15,  38), S( -99,  20),
                S( -57, -18), S(  75,  -8), S( -24,  40), S( -80,  61), S( -54,  60), S( -58,  50), S( -29,  27), S( -91,   5),
                S( -20, -14), S( -26,  12), S( -66,  35), S( -76,  48), S( -54,  46), S( -56,  36), S(  -2,   9), S( -29,  -8),
                S(  15, -23), S(   4, -10), S( -31,  17), S(-116,  34), S( -78,  32), S( -57,  23), S(  21, -11), S(  39, -40),
                S(  21, -99), S(  66, -60), S(  18, -31), S(-116,  -1), S( -19, -41), S( -77,  -6), S(  34, -39), S(  42, -92)
        }
};


constexpr SCORE_TYPE PASSED_PAWN_BONUSES[8] = {S(   0,   0), S(  -5,  -5), S( -14,   6), S( -19,  34), S(   4,  66), S(  20, 141), S(  93, 145), S(   0,   0)};


#endif //ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H
