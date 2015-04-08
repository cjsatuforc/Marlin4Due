#ifndef SPEED_LOOKUPTABLE_H
#define SPEED_LOOKUPTABLE_H

#include "Marlin.h"

const uint16_t speed_lookuptable_fast[512][2] PROGMEM = {
   {1312500, 1166667}, {145833, 68628}, {77205, 24705}, {52500, 12728}, {39772, 7760}, {32012, 5227}, {26785, 3759}, {23026, 2834},
   {20192, 2213}, {17979, 1776}, {16203, 1456}, {14747, 1217}, {13530, 1030}, {12500, 885}, {11615, 768}, {10847, 673},
   {10174, 594}, {9580, 529}, {9051, 473}, {8578, 426}, {8152, 386}, {7766, 351}, {7415, 321}, {7094, 294},
   {6800, 271}, {6529, 250}, {6279, 231}, {6048, 215}, {5833, 200}, {5633, 187}, {5446, 175}, {5271, 164},
   {5107, 155}, {4952, 145}, {4807, 137}, {4670, 129}, {4541, 122}, {4419, 116}, {4303, 110}, {4193, 105},
   {4088, 99}, {3989, 95}, {3894, 90}, {3804, 86}, {3718, 83}, {3635, 79}, {3556, 75}, {3481, 72},
   {3409, 70}, {3339, 66}, {3273, 64}, {3209, 62}, {3147, 59}, {3088, 57}, {3031, 55}, {2976, 53},
   {2923, 52}, {2871, 49}, {2822, 48}, {2774, 46}, {2728, 44}, {2684, 44}, {2640, 41}, {2599, 41},
   {2558, 39}, {2519, 38}, {2481, 37}, {2444, 36}, {2408, 35}, {2373, 34}, {2339, 33}, {2306, 32},
   {2274, 31}, {2243, 30}, {2213, 30}, {2183, 28}, {2155, 28}, {2127, 27}, {2100, 27}, {2073, 26},
   {2047, 25}, {2022, 25}, {1997, 24}, {1973, 23}, {1950, 23}, {1927, 23}, {1904, 21}, {1883, 22},
   {1861, 21}, {1840, 20}, {1820, 20}, {1800, 20}, {1780, 19}, {1761, 18}, {1743, 19}, {1724, 18},
   {1706, 17}, {1689, 18}, {1671, 16}, {1655, 17}, {1638, 16}, {1622, 16}, {1606, 16}, {1590, 15},
   {1575, 15}, {1560, 15}, {1545, 14}, {1531, 14}, {1517, 14}, {1503, 14}, {1489, 13}, {1476, 13},
   {1463, 13}, {1450, 13}, {1437, 12}, {1425, 13}, {1412, 12}, {1400, 12}, {1388, 11}, {1377, 12},
   {1365, 11}, {1354, 11}, {1343, 11}, {1332, 11}, {1321, 10}, {1311, 11}, {1300, 10}, {1290, 10},
   {1280, 10}, {1270, 10}, {1260, 9}, {1251, 10}, {1241, 9}, {1232, 9}, {1223, 9}, {1214, 9},
   {1205, 9}, {1196, 9}, {1187, 8}, {1179, 9}, {1170, 8}, {1162, 8}, {1154, 8}, {1146, 8},
   {1138, 8}, {1130, 8}, {1122, 7}, {1115, 8}, {1107, 7}, {1100, 8}, {1092, 7}, {1085, 7},
   {1078, 7}, {1071, 7}, {1064, 7}, {1057, 7}, {1050, 6}, {1044, 7}, {1037, 6}, {1031, 7},
   {1024, 6}, {1018, 7}, {1011, 6}, {1005, 6}, {999, 6}, {993, 6}, {987, 6}, {981, 6},
   {975, 5}, {970, 6}, {964, 6}, {958, 5}, {953, 6}, {947, 5}, {942, 6}, {936, 5},
   {931, 5}, {926, 5}, {921, 6}, {915, 5}, {910, 5}, {905, 5}, {900, 5}, {895, 4},
   {891, 5}, {886, 5}, {881, 5}, {876, 4}, {872, 5}, {867, 5}, {862, 4}, {858, 5},
   {853, 4}, {849, 4}, {845, 5}, {840, 4}, {836, 4}, {832, 4}, {828, 5}, {823, 4},
   {819, 4}, {815, 4}, {811, 4}, {807, 4}, {803, 4}, {799, 4}, {795, 3}, {792, 4},
   {788, 4}, {784, 4}, {780, 3}, {777, 4}, {773, 4}, {769, 3}, {766, 4}, {762, 3},
   {759, 4}, {755, 3}, {752, 4}, {748, 3}, {745, 4}, {741, 3}, {738, 3}, {735, 3},
   {732, 4}, {728, 3}, {725, 3}, {722, 3}, {719, 3}, {716, 4}, {712, 3}, {709, 3},
   {706, 3}, {703, 3}, {700, 3}, {697, 3}, {694, 3}, {691, 3}, {688, 2}, {686, 3},
   {683, 3}, {680, 3}, {677, 3}, {674, 2}, {672, 3}, {669, 3}, {666, 3}, {663, 2},
   {661, 3}, {658, 3}, {655, 2}, {653, 3}, {650, 2}, {648, 3}, {645, 2}, {643, 3},
   {640, 2}, {638, 3}, {635, 2}, {633, 3}, {630, 2}, {628, 3}, {625, 2}, {623, 2},
   {621, 3}, {618, 2}, {616, 2}, {614, 3}, {611, 2}, {609, 2}, {607, 2}, {605, 3},
   {602, 2}, {600, 2}, {598, 2}, {596, 2}, {594, 2}, {592, 3}, {589, 2}, {587, 2},
   {585, 2}, {583, 2}, {581, 2}, {579, 2}, {577, 2}, {575, 2}, {573, 2}, {571, 2},
   {569, 2}, {567, 2}, {565, 2}, {563, 2}, {561, 2}, {559, 2}, {557, 2}, {555, 1},
   {554, 2}, {552, 2}, {550, 2}, {548, 2}, {546, 2}, {544, 1}, {543, 2}, {541, 2},
   {539, 2}, {537, 2}, {535, 1}, {534, 2}, {532, 2}, {530, 1}, {529, 2}, {527, 2},
   {525, 2}, {523, 1}, {522, 2}, {520, 2}, {518, 1}, {517, 2}, {515, 1}, {514, 2},
   {512, 2}, {510, 1}, {509, 2}, {507, 1}, {506, 2}, {504, 1}, {503, 2}, {501, 1},
   {500, 2}, {498, 2}, {496, 1}, {495, 2}, {493, 1}, {492, 1}, {491, 2}, {489, 1},
   {488, 2}, {486, 1}, {485, 2}, {483, 1}, {482, 2}, {480, 1}, {479, 1}, {478, 2},
   {476, 1}, {475, 2}, {473, 1}, {472, 1}, {471, 2}, {469, 1}, {468, 1}, {467, 2},
   {465, 1}, {464, 1}, {463, 2}, {461, 1}, {460, 1}, {459, 1}, {458, 2}, {456, 1},
   {455, 1}, {454, 1}, {453, 2}, {451, 1}, {450, 1}, {449, 1}, {448, 2}, {446, 1},
   {445, 1}, {444, 1}, {443, 1}, {442, 2}, {440, 1}, {439, 1}, {438, 1}, {437, 1},
   {436, 1}, {435, 2}, {433, 1}, {432, 1}, {431, 1}, {430, 1}, {429, 1}, {428, 1},
   {427, 2}, {425, 1}, {424, 1}, {423, 1}, {422, 1}, {421, 1}, {420, 1}, {419, 1},
   {418, 1}, {417, 1}, {416, 1}, {415, 1}, {414, 1}, {413, 1}, {412, 1}, {411, 1},
   {410, 1}, {409, 2}, {407, 1}, {406, 1}, {405, 1}, {404, 1}, {403, 1}, {402, 1},
   {401, 0}, {401, 1}, {400, 1}, {399, 1}, {398, 1}, {397, 1}, {396, 1}, {395, 1},
   {394, 1}, {393, 1}, {392, 1}, {391, 1}, {390, 1}, {389, 1}, {388, 1}, {387, 1},
   {386, 1}, {385, 0}, {385, 1}, {384, 1}, {383, 1}, {382, 1}, {381, 1}, {380, 1},
   {379, 1}, {378, 1}, {377, 0}, {377, 1}, {376, 1}, {375, 1}, {374, 1}, {373, 1},
   {372, 1}, {371, 0}, {371, 1}, {370, 1}, {369, 1}, {368, 1}, {367, 1}, {366, 0},
   {366, 1}, {365, 1}, {364, 1}, {363, 1}, {362, 0}, {362, 1}, {361, 1}, {360, 1},
   {359, 1}, {358, 0}, {358, 1}, {357, 1}, {356, 1}, {355, 0}, {355, 1}, {354, 1},
   {353, 1}, {352, 1}, {351, 0}, {351, 1}, {350, 1}, {349, 1}, {348, 0}, {348, 1},
   {347, 1}, {346, 0}, {346, 1}, {345, 1}, {344, 1}, {343, 0}, {343, 1}, {342, 1},
   {341, 1}, {340, 0}, {340, 1}, {339, 1}, {338, 0}, {338, 1}, {337, 1}, {336, 0},
   {336, 1}, {335, 1}, {334, 0}, {334, 1}, {333, 1}, {332, 0}, {332, 1}, {331, 1},
   {330, 0}, {330, 1}, {329, 1}, {328, 0}, {328, 1}, {327, 1}, {326, 0}, {326, 1},
   {325, 1}, {324, 0}, {324, 1}, {323, 1}, {322, 0}, {322, 1}, {321, 1}, {320, 1},
};

const uint16_t speed_lookuptable_slow[256][2] PROGMEM = {
   {1312500, 262500}, {1050000, 175000}, {875000, 125000}, {750000, 93750}, {656250, 72917}, {583333, 58333}, {525000, 47728}, {477272, 39772},
   {437500, 33654}, {403846, 28846}, {375000, 25000}, {350000, 21875}, {328125, 19302}, {308823, 17157}, {291666, 15351}, {276315, 13815},
   {262500, 12500}, {250000, 11364}, {238636, 10376}, {228260, 9510}, {218750, 8750}, {210000, 8077}, {201923, 7479}, {194444, 6944},
   {187500, 6466}, {181034, 6034}, {175000, 5646}, {169354, 5292}, {164062, 4972}, {159090, 4679}, {154411, 4411}, {150000, 4167},
   {145833, 3942}, {141891, 3734}, {138157, 3542}, {134615, 3365}, {131250, 3202}, {128048, 3048}, {125000, 2907}, {122093, 2775},
   {119318, 2652}, {116666, 2536}, {114130, 2428}, {111702, 2327}, {109375, 2233}, {107142, 2142}, {105000, 2059}, {102941, 1980},
   {100961, 1905}, {99056, 1834}, {97222, 1768}, {95454, 1704}, {93750, 1645}, {92105, 1588}, {90517, 1534}, {88983, 1483},
   {87500, 1435}, {86065, 1388}, {84677, 1344}, {83333, 1302}, {82031, 1262}, {80769, 1224}, {79545, 1187}, {78358, 1153},
   {77205, 1119}, {76086, 1086}, {75000, 1057}, {73943, 1027}, {72916, 999}, {71917, 972}, {70945, 945}, {70000, 922},
   {69078, 897}, {68181, 874}, {67307, 852}, {66455, 830}, {65625, 811}, {64814, 790}, {64024, 771}, {63253, 753},
   {62500, 736}, {61764, 718}, {61046, 702}, {60344, 685}, {59659, 671}, {58988, 655}, {58333, 641}, {57692, 627},
   {57065, 614}, {56451, 600}, {55851, 588}, {55263, 576}, {54687, 564}, {54123, 552}, {53571, 541}, {53030, 530},
   {52500, 520}, {51980, 510}, {51470, 500}, {50970, 490}, {50480, 480}, {50000, 472}, {49528, 463}, {49065, 454},
   {48611, 446}, {48165, 438}, {47727, 430}, {47297, 422}, {46875, 415}, {46460, 408}, {46052, 400}, {45652, 394},
   {45258, 387}, {44871, 380}, {44491, 374}, {44117, 367}, {43750, 362}, {43388, 356}, {43032, 350}, {42682, 344},
   {42338, 338}, {42000, 334}, {41666, 328}, {41338, 323}, {41015, 318}, {40697, 313}, {40384, 308}, {40076, 304},
   {39772, 299}, {39473, 294}, {39179, 291}, {38888, 286}, {38602, 281}, {38321, 278}, {38043, 274}, {37769, 269},
   {37500, 266}, {37234, 263}, {36971, 258}, {36713, 255}, {36458, 252}, {36206, 248}, {35958, 244}, {35714, 242},
   {35472, 238}, {35234, 234}, {35000, 232}, {34768, 229}, {34539, 226}, {34313, 223}, {34090, 220}, {33870, 217},
   {33653, 214}, {33439, 212}, {33227, 209}, {33018, 206}, {32812, 204}, {32608, 201}, {32407, 199}, {32208, 196},
   {32012, 194}, {31818, 192}, {31626, 189}, {31437, 187}, {31250, 185}, {31065, 183}, {30882, 181}, {30701, 178},
   {30523, 177}, {30346, 174}, {30172, 172}, {30000, 171}, {29829, 168}, {29661, 167}, {29494, 165}, {29329, 163},
   {29166, 161}, {29005, 159}, {28846, 158}, {28688, 156}, {28532, 154}, {28378, 153}, {28225, 151}, {28074, 149},
   {27925, 148}, {27777, 146}, {27631, 145}, {27486, 143}, {27343, 141}, {27202, 141}, {27061, 138}, {26923, 138},
   {26785, 136}, {26649, 134}, {26515, 134}, {26381, 131}, {26250, 131}, {26119, 129}, {25990, 128}, {25862, 127},
   {25735, 126}, {25609, 124}, {25485, 123}, {25362, 122}, {25240, 121}, {25119, 119}, {25000, 119}, {24881, 117},
   {24764, 117}, {24647, 115}, {24532, 114}, {24418, 113}, {24305, 112}, {24193, 111}, {24082, 110}, {23972, 109},
   {23863, 108}, {23755, 107}, {23648, 106}, {23542, 105}, {23437, 104}, {23333, 103}, {23230, 103}, {23127, 101},
   {23026, 101}, {22925, 99}, {22826, 99}, {22727, 98}, {22629, 97}, {22532, 97}, {22435, 95}, {22340, 95},
   {22245, 94}, {22151, 93}, {22058, 92}, {21966, 91}, {21875, 91}, {21784, 90}, {21694, 90}, {21604, 88},
   {21516, 88}, {21428, 87}, {21341, 86}, {21255, 86}, {21169, 85}, {21084, 84}, {21000, 84}, {20916, 83},
   {20833, 83}, {20750, 81}, {20669, 81}, {20588, 81}, {20507, 79}, {20428, 80}, {20348, 78}, {20270, 78},
};

#endif