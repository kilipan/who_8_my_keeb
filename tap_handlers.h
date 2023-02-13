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

void handle_tap_L1(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_L2(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_L3(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_L4(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_R1(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_R2(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_R3(qk_tap_dance_state_t *state, void *user_data) {
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
void handle_tap_R4(qk_tap_dance_state_t *state, void *user_data) {
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

qk_tap_dance_action_t tap_dance_actions[] = {
    [T_L1] = ACTION_TAP_DANCE_FN(handle_tap_L1),
    [T_L2] = ACTION_TAP_DANCE_FN(handle_tap_L2),
    [T_L3] = ACTION_TAP_DANCE_FN(handle_tap_L3),
    [T_L4] = ACTION_TAP_DANCE_FN(handle_tap_L4),
    [T_R1] = ACTION_TAP_DANCE_FN(handle_tap_R1),
    [T_R2] = ACTION_TAP_DANCE_FN(handle_tap_R2),
    [T_R3] = ACTION_TAP_DANCE_FN(handle_tap_R3),
    [T_R4] = ACTION_TAP_DANCE_FN(handle_tap_R4),
    [T_LP] = ACTION_TAP_DANCE_FN(handle_tap_LP),
    [T_RP] = ACTION_TAP_DANCE_FN(handle_tap_RP),
};
#endif//TAP_HANDLERS
