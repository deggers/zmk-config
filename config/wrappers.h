#include "german.dtsi"

// layouts 

#define ___dusty_L1___       &kp deMINUS &kp K  &kp L  &kp D  &kp COMMA
#define ___dusty_L2___       &mtl LGUI R   &mtl LALT S  &mtl LCTRL N  &mtl LSHFT T  &mtl RALT P
#define ___dusty_L3___       &kp deY   &kp G  &kp M  &kp F  &kp DOT

#define ___dusty_R1___       &kp Q      &kp W  &kp H  &kp C  &kp X
#define ___dusty_R2___       &mtr RALT deZ      &mtr LSHIFT A  &mtr LCTRL U  &mtr LALT O  &mtr LGUI I
#define ___dusty_R3___       &kp deQUESTION &kp V  &kp B  &kp J  &kp deSQT

#define ___APTex_L1___       &kp deSLASH &kp W  &kp G  &kp D  &kp B
#define ___APTex_L2___       &mtl LGUI R   &mtl LALT S  &mtl LCTRL T  &mtl LSHFT H  &mtl RALT V
#define ___APTex_L3___       &kp X   &kp C  &kp M  &kp K  &kp Q

#define ___APTex_R1___       &kp J      &kp F  &kp O  &kp U  &kp deQUESTION
#define ___APTex_R2___       &mtr RALT deY      &mtr LSHIFT N  &mtr LCTRL A  &mtr LALT I  &mtr LGUI L
#define ___APTex_R3___       &kp deZ &kp P  &kp deSQT  &kp COMMA  &kp DOT

#define ___HDD_L1___    &kp J      &kp G       &kp M        &kp P        &kp V
#define ___HDD_L2___    &hm LGUI R &hm LALT S  &hm LCTRL N  &hm LSHFT T  &hm RALT W
#define ___HDD_L3___    &kp X      &kp C       &kp L        &kp D        &kp B

#define ___HDD_R1___    &kp MINUS        &kp DOT      &kp deSQT      &kp deDQT     &kp deSLASH
#define ___HDD_R2___    &hm RALT COMMA   &hm LSHFT H  &hm LCTRL A  &hm LALT O  &hm LGUI I
#define ___HDD_R3___    &kp deZ          &kp F        &kp U        &kp K       &kp deY

#define ___APTexD_L1___    &kp X      &kp W       &kp C        &kp K        &kp deZ
#define ___APTexD_L2___    &kp R      &kp S       &kp T        &hm H        &kp M
#define ___APTexD_L3___    &kp J      &kp V       &kp G        &kp deY      &kp D

#define ___APTexD_R1___    &kp deSQT  &kp F       &kp O        &kp U        &kp Q
#define ___APTexD_R2___    &kp B      &kp N       &kp A        &kp I        &kp L
#define ___APTexD_R3___    &kp deSEMI &kp P       &kp deSLASH  &kp COMMA    &kp DOT

// other stuff than layouts 

#define ___BLE_L1___    &reset       &none        &none        &out OUT_BLE &bt BT_CLR
#define ___BLE_L2___    &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3 &bt BT_SEL 4
#define ___BLE_L3___    &bootloader  &none        &none        &out OUT_USB &none

#define ___NONE___      &none        &none        &none        &none        &none

// Old Stuff
#define ___dusty_L1_HRM___       &none      &kp K       &kp L        &kp D        &kp COMMA
#define ___dusty_L2_HRM___       &kp R &hm LALT S  &hm LCTRL N  &hm LSHFT T  &hm RALT P
#define ___dusty_L3_HRM___       &kp X      &kp G       &kp M        &kp F        &kp DOT
#define ___dusty_L4_HRM___                              &lt BLE_LAYER ESC &kp SPACE

#define ___dusty_R1_HRM___       &kp Q      &kp W        &kp H        &kp C       &kp Y
#define ___dusty_R2_HRM___       &hm RALT Z &hm LSHFT A  &hm LCTRL U  &hm LALT O  &hm LGUI I
#define ___dusty_R3_HRM___       &kp QMARK  &kp V        &kp B        &kp J       &kp SQT
#define ___dusty_R4_HRM___       &kp E  &kp BSPC
