#ifndef TAP_HANDLERS
#define TAP_HANDLERS

// tap dance functionality
enum {
    T_L1,
    T_L2,
    T_L3,
    T_L4,
    T_R1,
    T_R2,
    T_R3,
    T_R4,
    T_LP,
    T_RP,
};


//// LEFT HAND
// left index finger
void handle_tap_L1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_LSFT);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_T);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_D);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_B);
            reset_tap_dance(state);
            break;
        case 4:
            register_code(KC_RALT);
            tap_code(KC_O);
            unregister_code(KC_RALT);
            reset_tap_dance(state);
            break;
    }
}
void reset_L1(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
        unregister_code(KC_LSFT);
    }
}

// left middle finger
void handle_tap_L2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_LGUI);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_N);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_R);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_G);
            reset_tap_dance(state);
            break;
        case 4:
            tap_code(KC_Z);
            reset_tap_dance(state);
            break;
    }
}
void reset_L2(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI)) {
        unregister_code(KC_LGUI);
    }
}

// left ring finger
void handle_tap_L3(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_LALT);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_H);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_M);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_K);
            reset_tap_dance(state);
            break;
        case 4:
            register_code(KC_RALT);
            tap_code(KC_S);
            unregister_code(KC_RALT);
            reset_tap_dance(state);
            break;
    }
}
void reset_L3(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT)) {
        unregister_code(KC_LALT);
    }
}

// left pinky
void handle_tap_L4(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_LCTL);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_S);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_Y);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_X);
            reset_tap_dance(state);
            break;
    }
}
void reset_L4(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL)) {
        unregister_code(KC_LCTL);
    }
}

//// RIGHT HAND
// right index finger
void handle_tap_R1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_RSFT);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_A);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_U);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_P);
            reset_tap_dance(state);
            break;
        case 4:
            register_code(KC_RALT);
            tap_code(KC_A);
            unregister_code(KC_RALT);
            reset_tap_dance(state);
            break;
    }
}
void reset_R1(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
        unregister_code(KC_LSFT);
    }
}

// right middle finger
void handle_tap_R2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_RGUI);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_E);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_L);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_F);
            reset_tap_dance(state);
            break;
        case 4:
            tap_code(KC_Q);
            reset_tap_dance(state);
            break;
    }
}
void reset_R2(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI)) {
        unregister_code(KC_LGUI);
    }
}

// right ring finger
void handle_tap_R3(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_LALT);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_I);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_C);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_V);
            reset_tap_dance(state);
            break;
        case 4:
            register_code(KC_RALT);
            tap_code(KC_U);
            unregister_code(KC_RALT);
            reset_tap_dance(state);
            break;
    }
}
void reset_R3(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT)) {
        unregister_code(KC_LALT);
    }
}

// right pinky
void handle_tap_R4(qk_tap_dance_state_t *state, void *user_data) {
    if (state->pressed) {
        register_code(KC_RCTL);
        return;
    }
    switch (state->count) {
        case 1:
            tap_code(KC_O);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_W);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code(KC_J);
            reset_tap_dance(state);
            break;
    }
}
void reset_R4(qk_tap_dance_state_t *state, void *user_data) {
    if ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL)) {
        unregister_code(KC_LCTL);
    }
}

//// parentheses on symbol layer
void handle_tap_LP(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code16(KC_LPRN);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_LBRC);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code16(KC_LCBR);
            reset_tap_dance(state);
            break;
    }
}
void handle_tap_RP(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            tap_code16(KC_RPRN);
            reset_tap_dance(state);
            break;
        case 2:
            tap_code(KC_RBRC);
            reset_tap_dance(state);
            break;
        case 3:
            tap_code16(KC_RCBR);
            reset_tap_dance(state);
            break;
    }
}


// tap dance actions
qk_tap_dance_action_t tap_dance_actions[] = {
    [T_L1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_L1, reset_L1),
    [T_L2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_L2, reset_L2),
    [T_L3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_L3, reset_L3),
    [T_L4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_L4, reset_L4),
    [T_R1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_R1, reset_R1),
    [T_R2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_R2, reset_R2),
    [T_R3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_R3, reset_R3),
    [T_R4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, handle_tap_R4, reset_R4),
    [T_LP] = ACTION_TAP_DANCE_FN(handle_tap_LP),
    [T_RP] = ACTION_TAP_DANCE_FN(handle_tap_RP),
};
#endif//TAP_HANDLERS

/*
on_end:
    if (pressed) {// register GUI and return}
    switch (count) { // your logic }

on_reset:
    // unregister GUI
// */
