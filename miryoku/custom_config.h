// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

#define XXX &none

// FPS friendly tap layer
#define MIRYOKU_LAYER_EXTRA \
&kp Q,              &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,              &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,              &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,               U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,              &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp T,             &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp A,              &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp G,             &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp Z,              &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp B,             &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,               U_NP,              &to U_BASE,        &kp SPC,           &none,             &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX                         K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &u_to_U_EXTRA \
XXX                         K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&mt LC(LS(LA(LGUI)))        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &mt LC(LS(LA(LGUI))) \
XXX                                   K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_EXTRA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp ESC \
                     K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_TAP MIRYOKU_MAPPING


