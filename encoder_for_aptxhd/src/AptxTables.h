/*------------------------------------------------------------------------------
 *
 *  All table definitions used for the quantizer.
 *
 *----------------------------------------------------------------------------*/

#ifndef APTXTABLES_H
#define APTXTABLES_H

#include "AptxParameters.h"

/* Quantisation threshold, logDelta increment and dither tables for 4-bit codes
 */
static const int32_t dq4bit24_sl1[9] = {
    -95044, 95044, 295844, 528780, 821332, 1226438, 1890540, 3344850, 6450664,
};

static const int32_t q4incr24[9] = {
    0, -17, 5, 30, 62, 105, 177, 334, 518,
};

static const int32_t dq4dith24_sf1[9] = {
    95044, 95044, 105754, 127180, 165372, 39736, 424366, 1029946, 2075866,
};

static const int32_t dq4mLamb24[8] = {
    0, -2678, -5357, -9548, 31409, -96158, -151395, -261480,
};

/* Quantisation threshold, logDelta increment and dither tables for 5-bit codes
 */
static const int32_t dq5bit24_sl1[17] = {
    -45754,  45754,   138496,  234896,  337336,  448310,
    570738,  708380,  866534,  1053262, 1281958, 1577438,
    1993050, 2665984, 3900982, 5902844, 8897462,
};

static const int32_t q5incr24[17] = {
    0, -18, -8, 2, 13, 25, 38, 53, 70, 90, 115, 147, 192, 264, 398, 521, 521,
};

static const int32_t dq5dith24_sf1[17] = {
    45754,  45754,  46988,  49412,  53026,  57950,  64478,   73164,   84988,
    101740, 126958, 168522, 247092, 425842, 809154, 1192708, 1801910,
};

static const int32_t dq5mLamb24[16] = {
    0,     -309,  -606,   -904,   -1231,  -1632,  -2172,  -2956,
    -4188, -6305, -10391, -19643, -44688, -95828, -95889, -152301,
};

/* Quantisation threshold, logDelta increment and dither tables for 6-bit codes
 */
static const int32_t dq6bit24_sl1[33] = {
    -21236,  21236,   63830,   106798,  150386,   194832,  240376,
    287258,  335726,  386034,  438460,  493308,   550924,  611696,
    676082,  744626,  817986,  896968,  982580,   1076118, 1179278,
    1294344, 1424504, 1574386, 1751090, 1966260,  2240868, 2617662,
    3196432, 4176450, 5658260, 7671068, 10380372,
};

static const int32_t q6incr24[33] = {
    0,   -21, -16, -12, -7,  -2,  3,   8,   13,  19,  24,
    30,  36,  43,  50,  57,  65,  74,  83,  93,  104, 117,
    131, 147, 166, 189, 219, 259, 322, 427, 521, 521, 521,
};

static const int32_t dq6dith24_sf1[33] = {
    21236,  21236,  21360,  21608,  21978,   22468,   23076, 23806,  24660,
    25648,  26778,  28070,  29544,  31228,   33158,   35386, 37974,  41008,
    44606,  48934,  54226,  60840,  69320,   80564,   96140, 119032, 155576,
    221218, 357552, 622468, 859344, 1153464, 1555840,
};

static const int32_t dq6mLamb24[32] = {
    0,     -31,   -62,    -93,    -123,   -152,   -183,   -214,
    -247,  -283,  -323,   -369,   -421,   -483,   -557,   -647,
    -759,  -900,  -1082,  -1323,  -1654,  -2120,  -2811,  -3894,
    -5723, -9136, -16411, -34084, -66229, -59219, -73530, -100594,
};

/* Quantisation threshold, logDelta increment and dither tables for 9-bit codes
 */
static const int32_t dq9bit24_sl1[257] = {
    -2436,    2436,    7308,    12180,   17054,   21930,   26806,   31686,
    36566,    41450,   46338,   51230,   56124,   61024,   65928,   70836,
    75750,    80670,   85598,   90530,   95470,   100418,  105372,  110336,
    115308,   120288,  125278,  130276,  135286,  140304,  145334,  150374,
    155426,   160490,  165566,  170654,  175756,  180870,  185998,  191138,
    196294,   201466,  206650,  211850,  217068,  222300,  227548,  232814,
    238096,   243396,  248714,  254050,  259406,  264778,  270172,  275584,
    281018,   286470,  291944,  297440,  302956,  308496,  314056,  319640,
    325248,   330878,  336532,  342212,  347916,  353644,  359398,  365178,
    370986,   376820,  382680,  388568,  394486,  400430,  406404,  412408,
    418442,   424506,  430600,  436726,  442884,  449074,  455298,  461554,
    467844,   474168,  480528,  486922,  493354,  499820,  506324,  512866,
    519446,   526064,  532722,  539420,  546160,  552940,  559760,  566624,
    573532,   580482,  587478,  594520,  601606,  608740,  615920,  623148,
    630426,   637754,  645132,  652560,  660042,  667576,  675164,  682808,
    690506,   698262,  706074,  713946,  721876,  729868,  737920,  746036,
    754216,   762460,  770770,  779148,  787594,  796108,  804694,  813354,
    822086,   830892,  839774,  848736,  857776,  866896,  876100,  885386,
    894758,   904218,  913766,  923406,  933138,  942964,  952886,  962908,
    973030,   983254,  993582,  1004020, 1014566, 1025224, 1035996, 1046886,
    1057894,  1069026, 1080284, 1091670, 1103186, 1114838, 1126628, 1138558,
    1150634,  1162858, 1175236, 1187768, 1200462, 1213320, 1226346, 1239548,
    1252928,  1266490, 1280242, 1294188, 1308334, 1322688, 1337252, 1352034,
    1367044,  1382284, 1397766, 1413494, 1429478, 1445728, 1462252, 1479058,
    1496158,  1513562, 1531280, 1549326, 1567710, 1586446, 1605550, 1625034,
    1644914,  1665208, 1685932, 1707108, 1728754, 1750890, 1773542, 1796732,
    1820488,  1844840, 1869816, 1895452, 1921780, 1948842, 1976680, 2005338,
    2034868,  2065322, 2096766, 2129260, 2162880, 2197708, 2233832, 2271352,
    2310384,  2351050, 2393498, 2437886, 2484404, 2533262, 2584710, 2639036,
    2696578,  2757738, 2822998, 2892940, 2968278, 3049896, 3138912, 3236760,
    3345312,  3467068, 3605434, 3765154, 3952904, 4177962, 4452178, 4787134,
    5187290,  5647128, 6159120, 6720518, 7332904, 8000032, 8726664, 9518152,
    10380372,
};

static const int32_t q9incr24[257] = {
    0,   -22, -21, -21, -20, -20, -19, -19, -18, -18, -17, -17, -16, -16, -15,
    -14, -14, -13, -13, -12, -12, -11, -11, -10, -10, -9,  -9,  -8,  -7,  -7,
    -6,  -6,  -5,  -5,  -4,  -4,  -3,  -3,  -2,  -1,  -1,  0,   0,   1,   1,
    2,   2,   3,   4,   4,   5,   5,   6,   6,   7,   8,   8,   9,   9,   10,
    11,  11,  12,  12,  13,  14,  14,  15,  15,  16,  17,  17,  18,  19,  19,
    20,  20,  21,  22,  22,  23,  24,  24,  25,  26,  26,  27,  28,  28,  29,
    30,  30,  31,  32,  33,  33,  34,  35,  35,  36,  37,  38,  38,  39,  40,
    41,  41,  42,  43,  44,  44,  45,  46,  47,  48,  48,  49,  50,  51,  52,
    52,  53,  54,  55,  56,  57,  58,  58,  59,  60,  61,  62,  63,  64,  65,
    66,  67,  68,  69,  69,  70,  71,  72,  73,  74,  75,  77,  78,  79,  80,
    81,  82,  83,  84,  85,  86,  87,  89,  90,  91,  92,  93,  94,  96,  97,
    98,  99,  101, 102, 103, 105, 106, 107, 109, 110, 112, 113, 115, 116, 118,
    119, 121, 122, 124, 125, 127, 129, 130, 132, 134, 136, 137, 139, 141, 143,
    145, 147, 149, 151, 153, 155, 158, 160, 162, 164, 167, 169, 172, 174, 177,
    180, 182, 185, 188, 191, 194, 197, 201, 204, 208, 211, 215, 219, 223, 227,
    232, 236, 241, 246, 251, 257, 263, 269, 275, 283, 290, 298, 307, 317, 327,
    339, 352, 367, 384, 404, 429, 458, 494, 522, 522, 522, 522, 522, 522, 522,
    522, 522,
};

static const int32_t dq9dith24_sf1[257] = {
    2436,   2436,   2436,   2436,   2438,   2438,   2438,   2440,   2442,
    2442,   2444,   2446,   2448,   2450,   2454,   2456,   2458,   2462,
    2464,   2468,   2472,   2476,   2480,   2484,   2488,   2492,   2498,
    2502,   2506,   2512,   2518,   2524,   2528,   2534,   2540,   2548,
    2554,   2560,   2568,   2574,   2582,   2588,   2596,   2604,   2612,
    2620,   2628,   2636,   2646,   2654,   2664,   2672,   2682,   2692,
    2702,   2712,   2722,   2732,   2742,   2752,   2764,   2774,   2786,
    2798,   2810,   2822,   2834,   2846,   2858,   2870,   2884,   2896,
    2910,   2924,   2938,   2952,   2966,   2980,   2994,   3010,   3024,
    3040,   3056,   3070,   3086,   3104,   3120,   3136,   3154,   3170,
    3188,   3206,   3224,   3242,   3262,   3280,   3300,   3320,   3338,
    3360,   3380,   3400,   3422,   3442,   3464,   3486,   3508,   3532,
    3554,   3578,   3602,   3626,   3652,   3676,   3702,   3728,   3754,
    3780,   3808,   3836,   3864,   3892,   3920,   3950,   3980,   4010,
    4042,   4074,   4106,   4138,   4172,   4206,   4240,   4276,   4312,
    4348,   4384,   4422,   4460,   4500,   4540,   4580,   4622,   4664,
    4708,   4752,   4796,   4842,   4890,   4938,   4986,   5036,   5086,
    5138,   5192,   5246,   5300,   5358,   5416,   5474,   5534,   5596,
    5660,   5726,   5792,   5860,   5930,   6002,   6074,   6150,   6226,
    6306,   6388,   6470,   6556,   6644,   6736,   6828,   6924,   7022,
    7124,   7228,   7336,   7448,   7562,   7680,   7802,   7928,   8058,
    8192,   8332,   8476,   8624,   8780,   8940,   9106,   9278,   9458,
    9644,   9840,   10042,  10252,  10472,  10702,  10942,  11194,  11458,
    11734,  12024,  12328,  12648,  12986,  13342,  13720,  14118,  14540,
    14990,  15466,  15976,  16520,  17102,  17726,  18398,  19124,  19908,
    20760,  21688,  22702,  23816,  25044,  26404,  27922,  29622,  31540,
    33720,  36222,  39116,  42502,  46514,  51334,  57218,  64536,  73830,
    85890,  101860, 123198, 151020, 183936, 216220, 243618, 268374, 293022,
    319362, 347768, 378864, 412626, 449596,
};

static const int32_t dq9mLamb24[256] = {
    0,     0,     0,     -1,    0,     0,     -1,    -1,    0,     -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -2,    -1,    -1,    -2,    -2,    -2,    -1,    -2,
    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
    -2,    -2,    -2,    -3,    -2,    -3,    -2,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
    -3,    -3,    -3,    -4,    -3,    -4,    -4,    -4,    -4,    -4,    -4,
    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -5,    -4,    -4,    -5,
    -4,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -6,
    -5,    -5,    -6,    -5,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
    -6,    -7,    -6,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
    -7,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -9,    -9,    -9,
    -9,    -9,    -9,    -9,    -10,   -10,   -10,   -10,   -10,   -11,   -11,
    -11,   -11,   -11,   -12,   -12,   -12,   -12,   -13,   -13,   -13,   -14,
    -14,   -14,   -15,   -15,   -15,   -15,   -16,   -16,   -17,   -17,   -17,
    -18,   -18,   -18,   -19,   -19,   -20,   -21,   -21,   -22,   -22,   -23,
    -23,   -24,   -25,   -26,   -26,   -27,   -28,   -29,   -30,   -31,   -32,
    -33,   -34,   -35,   -36,   -37,   -39,   -40,   -42,   -43,   -45,   -47,
    -49,   -51,   -53,   -55,   -58,   -60,   -63,   -66,   -69,   -73,   -76,
    -80,   -85,   -89,   -95,   -100,  -106,  -113,  -119,  -128,  -136,  -146,
    -156,  -168,  -182,  -196,  -213,  -232,  -254,  -279,  -307,  -340,  -380,
    -425,  -480,  -545,  -626,  -724,  -847,  -1003, -1205, -1471, -1830, -2324,
    -3015, -3993, -5335, -6956, -8229, -8071, -6850, -6189, -6162, -6585, -7102,
    -7774, -8441, -9243,
};

/* Array of structures containing subband parameters. */
static const SubbandParameters subbandParameters[NUMSUBBANDS] = {
    /* LL band */
    {0, dq9bit24_sl1, 0, dq9dith24_sf1, dq9mLamb24, q9incr24, 9, (18 * 256) - 1,
     -20, 24},

    /* LH band */
    {0, dq6bit24_sl1, 0, dq6dith24_sf1, dq6mLamb24, q6incr24, 6, (21 * 256) - 1,
     -23, 12},

    /* HL band */
    {0, dq4bit24_sl1, 0, dq4dith24_sf1, dq4mLamb24, q4incr24, 4, (23 * 256) - 1,
     -25, 6},

    /* HH band */
    {0, dq5bit24_sl1, 0, dq5dith24_sf1, dq5mLamb24, q5incr24, 5, (22 * 256) - 1,
     -24, 12}};

#endif  // APTXTABLES_H
