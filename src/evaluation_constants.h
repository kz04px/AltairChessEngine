//
// Created by Alexander Tian on 6/26/23.
//

#ifndef ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H
#define ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H

#include "evaluation.h"
#include "types.h"

constexpr int GAME_PHASE_SCORES[6] = {0, 1, 1, 2, 4, 0};

constexpr int MVV_LVA_VALUES[6] = {  87, 390, 429, 561,1234,   0};

constexpr SCORE_TYPE CANONICAL_PIECE_VALUES[6] = {100, 310,340, 500, 900, 0};

constexpr SCORE_TYPE MAX_MINOR_PIECE_VALUE = CANONICAL_PIECE_VALUES[BISHOP];
constexpr SCORE_TYPE MIN_MINOR_PIECE_VALUE = CANONICAL_PIECE_VALUES[KNIGHT];



constexpr SCORE_TYPE PIECE_VALUES[6] = {S( 118, 141), S( 481, 441), S( 467, 427), S( 676, 778), S(1485,1416), S(   0,   0)};

constexpr SCORE_TYPE PIECE_SQUARE_TABLES[6][64] = {
        {
                S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55),
                S( 139, 103), S( 110,  99), S(  68,  86), S( 106,  43), S(  48,  73), S( 122,  99), S( -38, 157), S(  26, 155),
                S(  -9,  45), S(  -3,  40), S(  18,  18), S(  27,  -3), S(  43,  -3), S(  15,  26), S( -14,  53), S( -24,  74),
                S( -14,   6), S(   0,  -6), S(  -1,  -7), S(  15, -21), S(  16, -13), S(  11,  -2), S(  17,   2), S( -34,  18),
                S( -18, -10), S( -22,  -4), S(  -4, -15), S(   9, -15), S(   5, -13), S(  12,  -9), S( -13,  -2), S( -36,   1),
                S( -20, -19), S( -19, -11), S(  -6, -11), S(   2, -11), S(  10,   2), S(  14, -10), S(  20, -12), S( -17,  -9),
                S( -20,  -7), S( -23,  -6), S( -20,  11), S(  -8,  -5), S( -14,  20), S(  27, -11), S(  20,  -8), S( -14,  -6),
                S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55), S( -32, -55)
        },
        {
                S(-255, -56), S(-152, -20), S(-100,  14), S( -16, -16), S(  50, -16), S(-175,   6), S( -43, -61), S(-160,-108),
                S( -48, -21), S( -57,   7), S(  15,  -3), S(  12,  32), S(  15,  18), S(  25,  -7), S( -43,  -7), S( -31, -35),
                S( -37, -19), S(  17,   7), S(  48,  28), S(  76,  34), S(  90,  15), S( 114,  14), S(  55,  -2), S(  39, -45),
                S(  18,  -4), S(  35,  32), S(  48,  43), S(  71,  53), S(  53,  57), S(  68,  46), S(  40,  28), S(  40,   2),
                S(   0,   9), S(  17,  14), S(  38,  42), S(  43,  53), S(  47,  45), S(  41,  42), S(  52,  21), S(   4,   6),
                S( -11, -41), S(   9,   1), S(  24,   9), S(  28,  28), S(  40,  20), S(  28,  -1), S(  25, -12), S(  -7,  -3),
                S( -33, -35), S( -14,  -6), S(   6, -17), S(  19,  14), S(  14,  24), S(  15, -16), S(   4, -15), S(   7, -39),
                S( -93, -39), S( -15, -30), S( -19,  -7), S( -15,   6), S(   1,  -8), S(  -2,  -3), S( -17, -19), S( -46, -60)
        },
        {
                S( -66,   0), S( -10,   0), S(-110,  15), S( -89,  14), S( -97,  21), S(-119,  14), S( -13,  -1), S(  25, -18),
                S( -41,  11), S( -12,   8), S( -16,  14), S( -39,  12), S( -29,  19), S(  -4,  10), S( -28,   8), S( -67,   8),
                S(   9,   0), S(  17,   9), S(  42,   3), S(  14,  11), S(  21,   5), S(  35,  21), S(  35,  17), S(  14,  14),
                S( -18,   2), S(   8,  20), S(  -3,  23), S(  47,  13), S(  24,  17), S(  20,  11), S(  -2,  29), S(  -7,  16),
                S(  -7,  -6), S(   4,   6), S(  12,  11), S(  28,  14), S(  42,   0), S(   0,  16), S(  12,  -2), S(  13, -15),
                S(  -5, -18), S(  22,  -6), S(  19,  -1), S(  17,   0), S(  16,  17), S(  30,  -4), S(  28,  -8), S(  22, -20),
                S(   5, -32), S(  23, -36), S(  30, -24), S(  14, -11), S(  22, -12), S(  23, -24), S(  49,  -7), S(  21, -41),
                S(  26, -63), S(  10, -30), S(  -5,   6), S(   4,  -9), S(  -9,  -7), S(  -4,   3), S(  -9,   0), S(   6, -46)
        },
        {
                S(  11,  16), S(  13,  18), S( -24,  27), S( -31,  31), S(   2,  19), S(  -9,  21), S( -35,  25), S(  53,   9),
                S(   8,  14), S(  -6,  21), S(  22,  13), S(  33,  13), S(  22,   9), S(  44,  -2), S(  -7,  17), S(  22,   5),
                S( -13,   9), S(  19,   1), S(  30,  -2), S(  30,  -4), S(  33,  -8), S(  65,  -7), S(  82, -16), S(  32, -17),
                S(  -8,   6), S(   2,   0), S(  17,   6), S(  33,  -4), S(  11,   3), S(  32,  -2), S( -12,   3), S(  -3,   2),
                S( -32,   9), S( -31,  13), S( -22,   9), S( -14,   9), S( -17,   6), S(  -4,  -5), S(   1,  -5), S( -20,  -6),
                S( -33,  -9), S( -18,  -6), S( -25,  -4), S( -17,  -3), S( -21,   0), S(  -9, -13), S(   3, -10), S( -27, -16),
                S( -38, -11), S( -14, -15), S( -25,  -2), S( -14, -10), S( -11, -11), S(  -2, -19), S(  -1, -23), S( -81,   2),
                S(  -1,  -8), S(   0, -10), S(   7, -11), S(  15, -21), S(   8, -20), S(   5,  -7), S( -17,  -5), S(  -9, -26)
        },
        {
                S( -56,   5), S( -63,  51), S( -33,  28), S( -30,  -3), S( -11,  17), S(  -6,  21), S(  30, -11), S(   0,   4),
                S( -10,   4), S( -57,  37), S( -45,  45), S( -77,  50), S(-123,  83), S( -49,  49), S( -24,  26), S( -14,  19),
                S(  -1, -12), S(  -9,  -3), S( -12,  -5), S( -64,  58), S( -63,  55), S(  12,  20), S(  16,   5), S( -32,  70),
                S(   4, -18), S(   2,  15), S( -19,  32), S( -32,  44), S( -37,  48), S( -25,  43), S( -19,  41), S( -17,  50),
                S(  19, -18), S(  21,  21), S(  13,  10), S(  -2,  54), S(   2,  19), S(  -1,  24), S(  13,   3), S(   0, -12),
                S(  22, -18), S(  47, -63), S(  29,   5), S(  21,  -9), S(  17,  -7), S(  17,   2), S(  27, -20), S(   9, -15),
                S(  30, -38), S(  46, -60), S(  50, -71), S(  37, -28), S(  37, -42), S(  45, -79), S(  34, -73), S(   5, -36),
                S(  60, -56), S(  45, -57), S(  54, -54), S(  47,  39), S(  42, -55), S(  31, -78), S(  48, -83), S(  -1, -69)
        },
        {
                S(-292, -35), S( 142, -43), S( 214, -37), S(  89, -28), S(-222,  30), S( -36,  45), S(  54,  15), S( -28,  -3),
                S( 103, -26), S( 140,  21), S( 137,  31), S( 100,  24), S(  46,  29), S( 161,  37), S(  49,  48), S(-160,  40),
                S(  62,  10), S( 164,  18), S( 191,  23), S(  72,  21), S( 148,   8), S( 232,  41), S( 245,  35), S(   6,  27),
                S( -12,  12), S(  60,  25), S( 135,  23), S(  81,  28), S(  52,  25), S( 158,  32), S( 109,  25), S( -81,  28),
                S( -71,  -5), S( 130, -19), S(  99,  14), S(  62,  23), S(  97,  16), S( 129,  21), S( 106,  10), S( -60,   9),
                S(-102,   4), S( -11,  10), S(  24,  15), S(  70,   9), S(  89,   3), S( 101,  16), S(  66,  10), S( -27,   3),
                S( -96,  -7), S( -72,   4), S( -48,  13), S( -66,  12), S( -27,   6), S( -17,  28), S(   8,   5), S( -18, -14),
                S(-106, -82), S( -70, -37), S(-101,  -7), S(-113, -16), S( -34, -52), S(-102,  13), S( -26, -13), S( -44, -61)
        }
};


constexpr SCORE_TYPE PASSED_PAWN_BONUSES[3][8] = {
        {S(   0,   0), S(   1,  10), S(  -8,  18), S(  -8,  41), S(   9,  64), S(  42, 132), S(  71, 169), S(   0,   0)},
        {S(   0,   0), S(   0,   0), S(   3,  22), S(  -2,  43), S(  31,  88), S(  88, 187), S( 338, 179), S(   0,   0)},
        {S(   0,   0), S(   0,   0), S(  43,  25), S( -11,  30), S(  77,  61), S( 142, 134), S( 331, 160), S(   0,   0)}
};


constexpr SCORE_TYPE PASSED_PAWN_BLOCKERS[6][8] = {
        {S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0)},
        {S(   0,   0), S(   0,   0), S(  23, -49), S(  -3,  -3), S(  -5, -24), S( -20, -68), S( -27, -97), S( 119,-214)},
        {S(   0,   0), S(   0,   0), S(  -1, -34), S(  -6, -46), S(  -5, -43), S(   5, -67), S( -19,-130), S(  59,-259)},
        {S(   0,   0), S(   0,   0), S(  20, -20), S( -15,  28), S(   1,   5), S(  24,  -5), S(  -1, -41), S(   9,-118)},
        {S(   0,   0), S(   0,   0), S(  12, -28), S( -64,  62), S(  17, -49), S(   2,   4), S(  21, -45), S(  33, 129)},
        {S(   0,   0), S(   0,   0), S(  37,  18), S(  32,  16), S( -80,   9), S( -52, -19), S(-118, -86), S(   8,-178)}
};


constexpr SCORE_TYPE PASSED_PAWN_BLOCKERS_2[6][8] = {
        {S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0), S(   0,   0)},
        {S(   0,   0), S(   0,   0), S(   0,   0), S(   7, -22), S( -19, -11), S(  -8,  -7), S(   5, -21), S(  35,-107)},
        {S(   0,   0), S(   0,   0), S(   0,   0), S(   9, -15), S(  -2,  -9), S( -17,  -1), S(  -5, -31), S(  27, -66)},
        {S(   0,   0), S(   0,   0), S(   0,   0), S(  18, -25), S(  33, -25), S(  -6,  18), S(   8,   6), S(  35, -53)},
        {S(   0,   0), S(   0,   0), S(   0,   0), S(  21, -12), S(  -2,  -9), S(   2, -16), S(  22, -25), S(   8, 103)},
        {S(   0,   0), S(   0,   0), S(   0,   0), S( 123,  -7), S(  20,  -1), S( -80,   9), S( -30, -20), S(   8, -90)}
};


constexpr SCORE_TYPE PHALANX_PAWN_BONUSES[8] = {S(   0,   0), S( -11,  -4), S(  -7,  -4), S(  12,  11), S(  37,  74), S(  18, 170), S(  68, 415), S(   0,   0)};

constexpr SCORE_TYPE ISOLATED_PAWN_PENALTY = S( -13, -15);

constexpr SCORE_TYPE BISHOP_PAIR_BONUS = S(  29,  68);

constexpr SCORE_TYPE TEMPO_BONUS = S(  26,  22);

constexpr SCORE_TYPE MOBILITY_VALUES[6] = {S(   0,   0), S(   7,   1), S(   7,   5), S(   5,   3), S(   4,   0), S(   0,   0)};

constexpr SCORE_TYPE SEMI_OPEN_FILE_VALUES[6] = {S(   0,   0), S(   0,   0), S(   0,   0), S(  26,   4), S(   0,  31), S( -21,   9)};

constexpr SCORE_TYPE OPEN_FILE_VALUES[6] = {S(   0,   0), S(   0,   0), S(   0,   0), S(  49,   0), S(  -4,  31), S( -53,  -1)};

constexpr SCORE_TYPE PIECE_THREATS[6][6] = {
        {S(  11, -19), S(  75,  37), S(  73,  80), S( 109,   1), S(  72,  44), S( 227,  61)},
        {S( -11,  16), S(   0,   0), S(  31,  47), S(  60,  22), S(  49,  10), S( 128,  18)},
        {S(   0,  15), S(  31,  43), S(   0,   0), S(  48,  34), S(  55,  65), S(  79,  75)},
        {S( -17,  23), S(  -5,  25), S(   1,  33), S(   0,   0), S(  55,  51), S( 126,  32)},
        {S(  -6,  14), S(   2,   9), S(  -2,  38), S(  -9,  28), S(   0,   0), S(  69, 112)},
        {S(  15,  43), S(   3,  21), S( -34,  39), S( -32,  33), S(-237,  42), S(   0,   0)}
};


constexpr SCORE_TYPE KING_RING_ATTACKS[2][6] = {
        {S(  48,  -6), S(  38, -12), S(  50,  -5), S(  47,  -7), S(  47,   2), S(   0,   0)},
        {S(  25,  -6), S(  26,   0), S(  27,  -1), S(  19,   0), S(  25,  11), S(   0,   0)}
};


constexpr SCORE_TYPE TOTAL_KING_RING_ATTACKS[40] = {S(  77,   9), S(  50,   1), S(  24,  -1), S(   2,   0), S( -20,   1), S( -34,   2), S( -46,   3), S( -52,   3), S( -62,   5), S( -69,   2), S( -71,   2), S( -67,  -2), S( -69,  -2), S( -73,  -3), S( -70,  -4), S( -76,  -3), S( -48, -12), S( -66,  -5), S( -51, -13), S( -35, -26), S( -65, -11), S( -23, -28), S(  22, -36), S(   6, -40), S(  99, -72), S(  16,  -6), S( 179,-123), S( -30,  71), S( -76,   5), S( 134,-217), S( 498,-200), S(  58, 141), S(-155, 154), S( 155,  33), S( 187,  54), S( 460, 574), S( -48, -46), S( 293, 393), S(  18,  30), S(   1,   1)};

constexpr SCORE_TYPE KING_PAWN_SHIELD[5][8] = {
        {S(  24, -20), S(  37,  -9), S(  38, -11), S(   0,   0), S(   0,   0), S(   3,   7), S(  18, -10), S(   5, -23)},
        {S(  26,  -9), S(  35,  -5), S(   2,   8), S(   0,   0), S(   0,   0), S( -12,   0), S(   3,  -3), S(   8,  -4)},
        {S(  20,  11), S( -18,  17), S(   1,   9), S(   0,   0), S(   0,   0), S( -10,  -9), S(  -6,   1), S(   5,   0)},
        {S(   0,  42), S( -12,  46), S( -23,  43), S(   0,   0), S(   0,   0), S(  17,  -8), S( -35,  21), S(   2,  16)},
        {S( -19, -10), S( -28,  -8), S( -12,  -6), S(   0,   0), S(   0,   0), S( -21,  -1), S( -24,   5), S( -26,   7)}
};


constexpr SCORE_TYPE KING_PAWN_STORM[6][8] = {
        {S( 127, 106), S(  47, 111), S(  98,   0), S(   0,   0), S(   0,   0), S(   7,  82), S(  12,  99), S(  73,  95)},
        {S(  -6,  47), S( -58,  59), S( -98,  48), S(   0,   0), S(   0,   0), S( -64,  24), S( -73,  58), S( -40,  64)},
        {S(   2,  19), S(  26,   7), S(  -5,  16), S(   0,   0), S(   0,   0), S(   4,   3), S(  23,   1), S(  -1,   6)},
        {S(  -1, -12), S(  15,  -3), S(  12,   5), S(   0,   0), S(   0,   0), S(   0,   4), S(   3,   0), S(  -8,  -6)},
        {S(   1, -19), S(  27, -22), S(  20,   3), S(   0,   0), S(   0,   0), S(   3, -13), S(  16, -11), S(   1, -15)},
        {S(  -4,  -7), S(  -7,   2), S(  15,   8), S(   0,   0), S(   0,   0), S(   0,  -3), S(  -7,  -4), S(   0, -15)}
};


constexpr SCORE_TYPE OPP_KING_TROPISM[6] = {S(   0,   0), S(  -2,  -2), S(   1,   1), S(  -4,   2), S(  -8,   3), S(   0,   0)};

constexpr SCORE_TYPE DOUBLED_PAWN_PENALTY = S( -20, -26);

constexpr SCORE_TYPE SQUARE_OF_THE_PAWN = S( -12,  63);

constexpr SCORE_TYPE BACKWARDS_PAWN_PENALTY = S( -13,   3);





#endif //ALTAIRCHESSENGINE_EVALUATION_CONSTANTS_H
