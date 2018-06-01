#include "arch.h"
#include "ecp_BLS383.h"

/* Curve BLS383 - Pairing friendly BLS curve */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

const int CURVE_Cof_I_BLS383= 0;
const int CURVE_A_BLS383= 0;
const int CURVE_B_I_BLS383= 9;
const BIG_384_29 CURVE_B_BLS383= {0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Order_BLS383= {0xFFF001,0x7FFC000,0x1C3F9E00,0x197FBC00,0x9C5EDF1,0x1D180002,0x1FE44001,0x9988000,0x1464100,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Gx_BLS383= {0xD10786B,0x6ACD9A4,0x18FD52B4,0x1668EF81,0x134578B9,0x12DF92DB,0x1EEDBD,0x1389ED58,0x30FF57E,0x177EAC,0x1E23EDBB,0x19315B73,0x108CEE4B,0x5};
const BIG_384_29 CURVE_Gy_BLS383= {0x1D145DDB,0x2ED011,0x117FBDF3,0x1E27EA31,0x62B2A66,0xFAB761A,0x671EA49,0x7D2DE60,0x4798122,0x12CC8308,0x2B63D6F,0xCE20902,0x13909337,0xF};

const BIG_384_29 CURVE_Bnx_BLS383= {0x40,0x80,0x44,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Cof_BLS383= {0x52B,0x1500,0xAAACB28,0xAAAC155,0x605,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Cru_BLS383= {0xDA155A9,0xD1D5627,0x1D87978F,0xBBE5FD0,0xDE63262,0x135E6FD5,0xA34C0D6,0x106A2462,0x2BBEAD6,0xC86DF9D,0xAC81090,0x13EEB8BF,0xC52080A,0x3D};
const BIG_384_29 CURVE_Pxa_BLS383= {0x1BAC9472,0xB02CC42,0x178B70DB,0xEF89A63,0x308C88A,0x1E5EE486,0x5C71A23,0xCE53E03,0x139C43F1,0x5F9B49A,0x169587AE,0xD7FB03C,0x150722B5,0x26};
const BIG_384_29 CURVE_Pxb_BLS383= {0x272AB23,0x4DA5EBD,0x13D1373A,0x8F5E33A,0x193206A3,0x1D9FB7BD,0xF8AA067,0x1DCAE3BA,0x3B635D7,0x931D15D,0x11E03068,0x1CB75851,0xE3617C3,0x7};
const BIG_384_29 CURVE_Pya_BLS383= {0x177BD4FD,0x140E9184,0x837F7F1,0x1816CC0E,0x190C89A0,0x1D20FE4A,0x13E1E0A1,0xCA5C3F7,0x3014EEE,0x12F008E1,0x205AECC,0xB8510F,0xF40859A,0x4};
const BIG_384_29 CURVE_Pyb_BLS383= {0x52C4CE6,0x52F1051,0x12BFD032,0x6B20F4E,0x42448EF,0xCA0BB05,0xAC3F686,0x93FFDF0,0x1A18D4EA,0xBDD0794,0x1EE1B926,0x182558FE,0x1CABBA88,0xE};
const BIG_384_29 CURVE_W_BLS383[2]= {{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG_384_29 CURVE_SB_BLS383[2][2]= {{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}}};
const BIG_384_29 CURVE_WB_BLS383[4]= {{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG_384_29 CURVE_BB_BLS383[4][4]= {{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}}};
#endif

#if CHUNK==64

const int CURVE_Cof_I_BLS383= 0;
const int CURVE_A_BLS383= 0;
const int CURVE_B_I_BLS383= 9;
const BIG_384_56 CURVE_B_BLS383= {0x9L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_56 CURVE_Order_BLS383= {0xFFF80000FFF001L,0xBFDE0070FE7800L,0x3000049C5EDF1CL,0xC40007F910007AL,0x14641004CL,0x0L,0x0L};
const BIG_384_56 CURVE_Gx_BLS383= {0xD59B348D10786BL,0x3477C0E3F54AD0L,0xBF25B734578B9BL,0x4F6AC007BB6F65L,0xEFD5830FF57E9CL,0xADB9F88FB6EC02L,0xB08CEE4BC98L};
const BIG_384_56 CURVE_Gy_BLS383= {0x5DA023D145DDBL,0x13F518C5FEF7CCL,0x56EC3462B2A66FL,0x96F3019C7A925FL,0x9061047981223EL,0x4810AD8F5BE59L,0x1F3909337671L};

const BIG_384_56 CURVE_Bnx_BLS383= {0x1000000040L,0x110L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_56 CURVE_Cof_BLS383= {0x2A00000052BL,0x5560AAAAAB2CA0L,0x6055L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_56 CURVE_Cru_BLS383= {0xA3AAC4EDA155A9L,0xDF2FE8761E5E3DL,0xBCDFAADE632625L,0x5123128D3035A6L,0xDBF3A2BBEAD683L,0x5C5FAB20424190L,0x7AC52080A9F7L};
const BIG_384_56 CURVE_Pxa_BLS383= {0x6059885BAC9472L,0x7C4D31DE2DC36DL,0xBDC90C308C88A7L,0x29F01971C688FCL,0x3693539C43F167L,0xD81E5A561EB8BFL,0x4D50722B56BFL};
const BIG_384_56 CURVE_Pxb_BLS383= {0x9B4BD7A272AB23L,0x7AF19D4F44DCE8L,0x3F6F7B93206A34L,0x571DD3E2A819FBL,0x3A2BA3B635D7EEL,0xAC28C780C1A126L,0xEE3617C3E5BL};
const BIG_384_56 CURVE_Pya_BLS383= {0x81D230977BD4FDL,0xB660720DFDFC6L,0x41FC9590C89A0CL,0x2E1FBCF878287AL,0x11C23014EEE65L,0x28878816BB325EL,0x8F40859A05CL};
const BIG_384_56 CURVE_Pyb_BLS383= {0xA5E20A252C4CE6L,0x5907A74AFF40C8L,0x41760A42448EF3L,0xFFEF82B0FDA199L,0xA0F29A18D4EA49L,0xAC7F7B86E4997BL,0x1DCABBA88C12L};
const BIG_384_56 CURVE_W_BLS383[2]= {{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}};
const BIG_384_56 CURVE_SB_BLS383[2][2]= {{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}}};
const BIG_384_56 CURVE_WB_BLS383[4]= {{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}};
const BIG_384_56 CURVE_BB_BLS383[4][4]= {{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}}};

#endif