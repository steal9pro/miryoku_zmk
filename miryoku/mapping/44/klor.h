// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_KLOR)

#define XXX &none
// #define HYP &kp LS(LC(LA(LGUI)))
//
//
// &macro_hyper: macro_hyper {
//     compatible = "zmk,behavior-macro";
//     #binding-cells = <0>;
//     bindings = <
//         &macro_press &kp LGUI,
//         &macro_press &kp LC,
//         &macro_press &kp LA,
//         &macro_press &kp LSFT,
//         &macro_release &kp LSFT,
//         &macro_release &kp LA,
//         &macro_release &kp LC,
//         &macro_release &kp LGUI,
//     >;
// };

#define SQT &kp SQT
// #define MUT &kp C_MUTE
// #define PPM &kp K_PP

#define MIRYOKU_LAYOUTMAPPING_KLOR( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
     K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09 \
XXX  K10  K11  K12  K13  K14        K15  K16  K17  K18  K19  SQT \
XXX  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  XXX \
               K32  K33  K34  XXX       XXX  K35  K36  K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_KLOR
