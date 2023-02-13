# Who 8 My Keeb?
A keymap for a 1x4+2 split keyboard (12 keys total) that relies on tap dancing to get the letters you want (very similar to how T9 used to work on old phones).

```
layout:
  [L4] [L3] [L2] [L1]             [R1] [R2] [R3] [R4]
                 [T1] [T2]   [T3] [T4]
```

## Base Layer
Fingers:
All fingers have up to 4 tap dance functions and a hold function.
```
 #t\key  L4   L3   L2   L1     R1   R2   R3   R4     T1   T2   T3   T4
------------------------------------------------------------------------
1 tap     S    H    N    T      A    E    I    O    ESC  SPC  RET BSPC
2 taps    Y    M    R    D      U    L    C    W
3 taps    X    K    G    B      P    F    V    J
4 taps         ß    Z    Ö      Ä    Q    Ü
------
hold    CTL  ALT  GUI  SFT    SFT  GUI  ALT  CTL    NUM  NAV  SYM  FUN
```

Thumbs:
All thumbs have layer tap behavior.
All non-default layers retain the homerow mods.

- T1: ESC / number layer
```
 #t\key  L4   L3   L2   L1     R1   R2   R3   R4     T1   T2   T3   T4
------------------------------------------------------------------------
1 tap     0    1    2    3      4    5    6    7                8    9
```
- T2: SPACE / navigation layer
```
 #t\key  L4   L3   L2   L1     R1   R2   R3   R4     T1   T2   T3   T4
------------------------------------------------------------------------
1 tap  HOME  DEL  TAB  END      <    v    ^    >              PGD  PGU
```
- T3: ENTER / symbol layer
```
 #t\key  L4   L3   L2   L1     R1   R2   R3   R4     T1   T2   T3   T4
------------------------------------------------------------------------
1 tap     !    @    #    $      &    *    %    ^      (    )
2 taps                                                [    ]
3 taps                                                {    }
```
- T4: BSPC / function layer
```
 #t\key  L4   L3   L2   L1     R1   R2   R3   R4     T1   T2   T3   T4
------------------------------------------------------------------------
1 tap    F1   F2   F3   F4     F5   F6   F7   F8   BOOT
2 taps   F9  F10  F11  F12    F13  F14  F15  F16
```
