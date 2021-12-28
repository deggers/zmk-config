#include "german.dtsi"

// layouts 

/* dusty refined 
x f l d v  - u o c k
r s n t b  , i a m h
' w j p q  ? . z g y e
*/ 

#define ___dusty_L1___       &kp X     &kp F  &kp L  &kp D  &kp V
#define ___dusty_L2___       &kp R     &kp S  &kp N  &kp T  &kp B
#define ___dusty_L3___       &kp deSQT &kp W  &kp J  &kp P  &kp Q

#define ___dusty_R1___       &none          &kp U    &kp O    &kp C  &kp K
#define ___dusty_R2___       &kp COMMA      &kp I    &kp A    &kp M  &kp H
#define ___dusty_R3___       &kp deQUESTION &kp DOT  &kp deZ  &kp G  &kp deY



#define ___APTex_L1___       &kp deSLASH &kp W  &kp G  &kp D  &kp B
#define ___APTex_L2___       &mtl LGUI R   &mtl LALT S  &mtl LCTRL T  &mtl LSHFT H  &mtl RALT V
#define ___APTex_L3___       &kp X   &kp C  &kp M  &kp K  &kp Q

#define ___APTex_R1___       &kp J      &kp F  &kp O  &kp U  &kp deQUESTION
#define ___APTex_R2___       &mtr RALT deY      &mtr LSHIFT N  &mtr LCTRL A  &mtr LALT I  &mtr LGUI L
#define ___APTex_R3___       &kp deZ &kp P  &kp deSQT  &kp COMMA  &kp DOT

#define ___APTexD_L1___    &kp X      &kp W       &kp C        &kp K        &kp deZ
#define ___APTexD_L2___    &kp R      &kp S       &kp T        &kp H        &kp M
#define ___APTexD_L3___    &kp J      &kp V       &kp G        &kp D        &kp deY

#define ___APTexD_R1___    &kp deSQT  &kp F       &kp O        &kp U        &kp Q
#define ___APTexD_R2___    &kp B      &kp N       &kp A        &kp I        &kp L
#define ___APTexD_R3___    &kp deSEMI &kp P       &kp deSLASH  &kp COMMA    &kp DOT



#define ___louvre_L1___    &kp deZ    &kp F       &kp M        &kp D        &kp deY
#define ___louvre_L2___    &kp R      &kp S       &kp T        &kp H        &kp P
#define ___louvre_L3___    &kp X      &kp W       &kp V        &kp K        &kp B

#define ___louvre_R1___    &kp deSEMI  &kp L       &kp U        &kp O        &kp G
#define ___louvre_R2___    &kp deSQT   &kp N       &kp I        &kp A        &kp C
#define ___louvre_R3___    &kp deSLASH &kp J       &kp DOT      &kp COMMA    &kp Q

// other stuff than layouts 

#define ___BLE_L1___    &reset       &none        &none        &out OUT_BLE &bt BT_CLR
#define ___BLE_L2___    &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_SEL 4
#define ___BLE_L3___    &bootloader  &none        &none        &out OUT_USB &none

#define ___NONE___      &none        &none        &none        &none        &none

// Old Stuff
#define ___dusty_L1_HRM___       &none      &kp K       &kp L        &kp D        &kp COMMA
#define ___dusty_L2_HRM___       &kp R      &kp S       &kp N        &kp T        &kp P
#define ___dusty_L3_HRM___       &kp X      &kp G       &kp M        &kp F        &kp DOT
#define ___dusty_L4_HRM___                              &lt BLE_LAYER ESC &kp SPACE

#define ___dusty_R1_HRM___       &kp Q      &kp W        &kp H        &kp C       &kp Y
#define ___dusty_R2_HRM___       &kp Z      &kp A        &kp U        &kp O       &kp I
#define ___dusty_R3_HRM___       &kp QMARK  &kp V        &kp B        &kp J       &kp SQT
#define ___dusty_R4_HRM___       &kp E  &kp BSPC
