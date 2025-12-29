// Default keymap.c for Sofle v2 with VIA support
// Right OLED: Kamen Rider Den-O Animation (Capsem from Kamen Rider Zets)
// Left OLED: Layer indicator, Caps Lock, Shift, WPM

#include QMK_KEYBOARD_H
#include "animation.h"

// ========================================
// Keymap Definition
// ========================================

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default/Base layer 
     * ┌───┬───┬───┬───┬───┬───┐                    ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │                    │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│
     * ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E │ R │ T │                    │ Y │ U │ I │ O │ P │ \ │
     * ├───┼───┼───┼───┼───┼───┤                    ├───┼───┼───┼───┼───┼───┤
     * │Esc│ A │ S │ D │ F │ G │                    │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┐            ┌───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │Mut│            │Ply│ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┴───┼───┼───┼───┤            ├───┼───┼───┼───┴───┴───┴───┘
     *                 │Ctl│Alt│Spc│            │Ent│L1 │Gui│
     *                 └───┴───┴───┘            └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,  KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  MO(1),    MO(2),   KC_ENT,  KC_RGUI, KC_RALT, KC_RCTL
    ),

    /* Layer 1: Function/Symbol layer */
    [1] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN, KC_DQT,
        _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, _______,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_QUES, _______,
                          _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
    ),

    /* Layer 2: Number pad & Media */
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                     _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______,
        _______, _______, _______, _______, _______, _______,                     _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,
        _______, _______, _______, _______, _______, _______,                     _______, KC_P1,   KC_P2,   KC_P3,   KC_PAST, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_P0,   KC_PDOT, KC_PENT, KC_PSLS, _______,
                          _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
    ),

    /* Layer 3: Extra/Adjustment layer */
    [3] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
    )
};

// ========================================
// Encoder Mapping (for VIA)
// ========================================
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

// ========================================
// OLED Display Configuration
// ========================================
#ifdef OLED_ENABLE

// Inisialisasi OLED
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;  // OLED kiri (master) vertical
    }
    // COBA ROTASI INI SATU PER SATU:
    return OLED_ROTATION_0;        // Option 1: I use this for my animation and my animation is 128x32, drawmode vertical, using image2cpp tool
    // return OLED_ROTATION_90;    // Option 2: 90° clockwise
    // return OLED_ROTATION_180;   // Option 3: Upside down
    // return OLED_ROTATION_270;   // Option 4: 90° counter-clockwise
}

// Render layer state on left OLED
void render_layer_state(void) {
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("Func"), false);
            break;
        case 2:
            oled_write_ln_P(PSTR("Num"), false);
            break;
        case 3:
            oled_write_ln_P(PSTR("Adj"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

// Render modifier status di OLED kiri
void render_mod_status(void) {
    oled_write_ln_P(PSTR("-----"), false);
    
    // Caps Lock status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("CAPS:"), false);
    oled_write_ln_P(led_state.caps_lock ? PSTR("ON ") : PSTR("off"), false);
    
    // Shift status
    uint8_t modifiers = get_mods();
    oled_write_P(PSTR("SHFT:"), false);
    oled_write_ln_P((modifiers & MOD_MASK_SHIFT) ? PSTR("ON ") : PSTR("off"), false);
}

// Render WPM di OLED kiri
void render_wpm(void) {
    oled_write_ln_P(PSTR("-----"), false);
    oled_write_P(PSTR("WPM:"), false);
    
    char wpm_str[4];
    uint8_t wpm = get_current_wpm();
    snprintf(wpm_str, sizeof(wpm_str), "%3d", wpm);
    oled_write_ln(wpm_str, false);
}

// Main OLED task
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // OLED kiri: Layer, Caps Lock, Shift, WPM
        render_layer_state();
        render_mod_status();
        render_wpm();
    } else {
        // OLED kanan: Animasi
        anim_timer_task();
        render_anim();  // Fungsi ini sudah ada di animation.h dengan type casting
    }
    return false;
}

// Initialize animation saat startup
void keyboard_post_init_user(void) {
    anim_init();
}

#endif // OLED_ENABLE

// ========================================
// VIA Custom Handler - Block Backlight Commands (I have no backlight on my Sofle V2)
// ========================================
#ifdef VIA_ENABLE

// Override VIA backlight commands karena keyboard tidak punya backlight
void via_qmk_backlight_get_value(uint8_t *data) {
    // Tidak ada backlight, return 0
    uint8_t *value_id = &(data[0]);
    uint8_t *value_data = &(data[1]);
    
    switch (*value_id) {
        case id_qmk_backlight_brightness:
        case id_qmk_backlight_effect:
            *value_data = 0;
            break;
    }
}

void via_qmk_backlight_set_value(uint8_t *data) {
    // Tidak ada backlight, ignore semua set commands
    // Do nothing
}

#endif // VIA_ENABLE
