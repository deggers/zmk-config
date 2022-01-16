#include "german.dtsi"

// layouts 

/*  NAIL 
  ' f c k ?  - b o u z
  r s t h d  w n a i l
  x y g m v  q p . , j e
*/

#define ___nail_L1___    &kp deSQT   &kp F        &kp C       &kp K         &kp deQUESTION
#define ___nail_L2___    &hm LGUI R  &hm LCTRL S  &hm LALT T  &hm LSHIFT H  &kp W
#define ___nail_L3___    &kp X       &kp deY      &kp G       &kp M         &kp V

#define ___nail_R1___    &kp deGRAVE  &kp B         &kp O       &kp U        &kp deZ
#define ___nail_R2___    &kp D        &hm LSHIFT N  &hm LALT A  &hm LCTRL I  &hm LGUI L
#define ___nail_R3___    &kp Q        &kp P         &kp DOT     &kp COMMA    &kp J

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
