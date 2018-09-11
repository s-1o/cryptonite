//
// Created by paradaimu on 9/6/18.
//

#include "gost3410_params_internal.h"
#include "macros_internal.h"

//TODO: все массивы либо в uint64 либо в uint8
static const Gost3410DefaultParamsCtx GOST3410EC_DEFAULT_PARAMS_1 =
        {
                {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x31},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07},
                {0x5f, 0xbf, 0xf4, 0x98, 0xaa, 0x93, 0x8c, 0xe7, 0x39, 0xb8, 0xe0, 0x22, 0xfb, 0xaf, 0xef, 0x40, 0x56, 0x3f, 0x6e, 0x6a, 0x34, 0x72, 0xfc, 0x2a, 0x51, 0x4c, 0x0c, 0xe9, 0xda, 0xe2, 0x3b, 0x7e},
                {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x50, 0xfe, 0x8a, 0x18, 0x92, 0x97, 0x61, 0x54, 0xc5, 0x9c, 0xfc, 0x19, 0x3a, 0xcc, 0xf5, 0xb3},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
                {0x08, 0xe2, 0xa8, 0xa0, 0xe6, 0x51, 0x47, 0xd4, 0xbd, 0x63, 0x16, 0x03, 0x0e, 0x16, 0xd1, 0x9c, 0x85, 0xc9, 0x7f, 0x0a, 0x9c, 0xa2, 0x67, 0x12, 0x2b, 0x96, 0xab, 0xbc, 0xea, 0x7e, 0x8f, 0xc8},
        };

static const Gost3410DefaultParamsCtx GOST3410EC_DEFAULT_PARAMS_2 =
        {
                {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x97},
                {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x94},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6},
                {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6c, 0x61, 0x10, 0x70, 0x99, 0x5a, 0xd1, 0x00, 0x45, 0x84, 0x1b, 0x09, 0xb7, 0x61, 0xb8, 0x93},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
                {0x8d, 0x91, 0xe4, 0x71, 0xe0, 0x98, 0x9c, 0xda, 0x27, 0xdf, 0x50, 0x5a, 0x45, 0x3f, 0x2b, 0x76, 0x35, 0x29, 0x4f, 0x2d, 0xdf, 0x23, 0xe3, 0xb1, 0x22, 0xac, 0xc9, 0x9c, 0x9e, 0x9f, 0x1e, 0x14},
        };

static const Gost3410DefaultParamsCtx GOST3410EC_DEFAULT_PARAMS_3 =
        {
                {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x99},
                {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x96},
                {0x3e, 0x1a, 0xf4, 0x19, 0xa2, 0x69, 0xa5, 0xf8, 0x66, 0xa7, 0xd3, 0xc2, 0x5c, 0x3d, 0xf8, 0x0a, 0xe9, 0x79, 0x25, 0x93, 0x73, 0xff, 0x2b, 0x18, 0x2f, 0x49, 0xd4, 0xce, 0x7e, 0x1b, 0xbc, 0x8b},
                {0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x5f, 0x70, 0x0c, 0xff, 0xf1, 0xa6, 0x24, 0xe5, 0xe4, 0x97, 0x16, 0x1b, 0xcc, 0x8a, 0x19, 0x8f},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
                {0x3f, 0xa8, 0x12, 0x43, 0x59, 0xf9, 0x66, 0x80, 0xb8, 0x3d, 0x1c, 0x3e, 0xb2, 0xc0, 0x70, 0xe5, 0xc5, 0x45, 0xc9, 0x85, 0x8d, 0x03, 0xec, 0xfb, 0x74, 0x4b, 0xf8, 0xd7, 0x17, 0x71, 0x7e, 0xfc},
        };

static const Gost3410DefaultParamsCtx GOST3410EC_DEFAULT_PARAMS_4 =
        {
                {0x9b, 0x9f, 0x60, 0x5f, 0x5a, 0x85, 0x81, 0x07, 0xab, 0x1e, 0xc8, 0x5e, 0x6b, 0x41, 0xc8, 0xaa, 0xcf, 0x84, 0x6e, 0x86, 0x78, 0x90, 0x51, 0xd3, 0x79, 0x98, 0xf7, 0xb9, 0x02, 0x2d, 0x75, 0x9b},
                {0x9b, 0x9f, 0x60, 0x5f, 0x5a, 0x85, 0x81, 0x07, 0xab, 0x1e, 0xc8, 0x5e, 0x6b, 0x41, 0xc8, 0xaa, 0xcf, 0x84, 0x6e, 0x86, 0x78, 0x90, 0x51, 0xd3, 0x79, 0x98, 0xf7, 0xb9, 0x02, 0x2d, 0x75, 0x98},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x5a},
                {0x9b, 0x9f, 0x60, 0x5f, 0x5a, 0x85, 0x81, 0x07, 0xab, 0x1e, 0xc8, 0x5e, 0x6b, 0x41, 0xc8, 0xaa, 0x58, 0x2c, 0xa3, 0x51, 0x1e, 0xdd, 0xfb, 0x74, 0xf0, 0x2f, 0x3a, 0x65, 0x98, 0x98, 0x0b, 0xb9},
                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
                {0x41, 0xec, 0xe5, 0x57, 0x43, 0x71, 0x1a, 0x8c, 0x3c, 0xbf, 0x37, 0x83, 0xcd, 0x08, 0xc0, 0xee, 0x4d, 0x4d, 0xc4, 0x40, 0xd4, 0x64, 0x1a, 0x8f, 0x36, 0x6e, 0x55, 0x0d, 0xfd, 0xb3, 0xbb, 0x67},
        };

static const Gost3410DefaultParamsCtx GOST3410EC_DEFAULT_PARAMS_5 =
        {
                {0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
                {0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc},
                {0x5a, 0xc6, 0x35, 0xd8, 0xaa, 0x3a, 0x93, 0xe7, 0xb3, 0xeb, 0xbd, 0x55, 0x76, 0x98, 0x86, 0xbc, 0x65, 0x1d, 0x06, 0xb0, 0xcc, 0x53, 0xb0, 0xf6, 0x3b, 0xce, 0x3c, 0x3e, 0x27, 0xd2, 0x60, 0x4b},
                {0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xe6, 0xfa, 0xad, 0xa7, 0x17, 0x9e, 0x84, 0xf3, 0xb9, 0xca, 0xc2, 0xfc, 0x63, 0x25, 0x51},
                {0x6b, 0x17, 0xd1, 0xf2, 0xe1, 0x2c, 0x42, 0x47, 0xf8, 0xbc, 0xe6, 0xe5, 0x63, 0xa4, 0x40, 0xf2, 0x77, 0x03, 0x7d, 0x81, 0x2d, 0xeb, 0x33, 0xa0, 0xf4, 0xa1, 0x39, 0x45, 0xd8, 0x98, 0xc2, 0x96},
                {0x4f, 0xe3, 0x42, 0xe2, 0xfe, 0x1a, 0x7f, 0x9b, 0x8e, 0xe7, 0xeb, 0x4a, 0x7c, 0x0f, 0x9e, 0x16, 0x2b, 0xce, 0x33, 0x57, 0x6b, 0x31, 0x5e, 0xce, 0xcb, 0xb6, 0x40, 0x68, 0x37, 0xbf, 0x51, 0xf5},
        };


const Gost3410DefaultParamsCtx *gost3410_get_defaut_params(Gost3410ParamsId params_id)
{
    switch (params_id) {
        case GOST3410_PARAMS_ID_1:
            return &GOST3410EC_DEFAULT_PARAMS_1;
        case GOST3410_PARAMS_ID_2:
            return &GOST3410EC_DEFAULT_PARAMS_2;
        case GOST3410_PARAMS_ID_3:
            return &GOST3410EC_DEFAULT_PARAMS_3;
        case GOST3410_PARAMS_ID_4:
            return &GOST3410EC_DEFAULT_PARAMS_4;
        case GOST3410_PARAMS_ID_5:
            return &GOST3410EC_DEFAULT_PARAMS_5;
        default:
            return NULL;
    }
}