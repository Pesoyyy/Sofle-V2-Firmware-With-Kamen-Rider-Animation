# rules.mk untuk Sofle v2 dengan VIA support

# Enable VIA support
VIA_ENABLE = yes

# Bootmagic Lite - untuk masuk bootloader mode dengan mudah
BOOTMAGIC_ENABLE = yes

# OLED Display support
OLED_ENABLE = yes
OLED_DRIVER = ssd1306

# Encoder (Rotary Knob) support
ENCODER_ENABLE = yes

# Matikan semua fitur lighting untuk menghindari error VIA
RGBLIGHT_ENABLE = no        # RGB underglow
RGB_MATRIX_ENABLE = no      # RGB matrix
BACKLIGHT_ENABLE = no       # Key backlight

# Fitur tambahan yang direkomendasikan
LTO_ENABLE = yes            # Link Time Optimization (menghemat space)
MOUSEKEY_ENABLE = yes       # Mouse key support
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug (matikan untuk hemat space)
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes          # N-Key Rollover
WPM_ENABLE = yes           # WPM calculation untuk ditampilkan di OLED