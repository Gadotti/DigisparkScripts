//Mapeado por Eduardo Gadotti https://github.com/Gadotti em 27/07/2020

#include "DigiKeyboard.h"
#ifndef DIGIKEYBOARDDE_H
#define DIGIKEYBOARDDE_H


#define DE_MOD_CONTROL_LEFT    (1<<8)
#define DE_MOD_SHIFT_LEFT      (1<<9)
#define DE_MOD_ALT_LEFT        (1<<10)
#define DE_MOD_GUI_LEFT        (1<<11)
#define DE_MOD_CONTROL_RIGHT   (1<<12)
#define DE_MOD_SHIFT_RIGHT     (1<<13)
#define DE_MOD_ALT_RIGHT       (1<<14)
#define DE_MOD_GUI_RIGHT       (1<<15)
const uint16_t _ascii_de_map[128] PROGMEM =
        {
                0x00,             // NUL
                0x00,             // SOH
                0x00,             // STX
                0x00,             // ETX
                0x00,             // EOT
                0x00,             // ENQ
                0x00,             // ACK
                0x00,             // BEL
                0x2a,     // BS Backspace
                0x2b,     // TAB  Tab
                0x28,     // LF Enter
                0x00,             // VT
                0x00,             // FF
                0x00,             // CR
                0x00,             // SO
                0x00,             // SI
                0x00,             // DEL
                0x00,             // DC1
                0x00,             // DC2
                0x00,             // DC3
                0x00,             // DC4
                0x00,             // NAK
                0x00,             // SYN
                0x00,             // ETB
                0x00,             // CAN
                0x00,             // EM
                0x00,             // SUB
                0x00,             // ESC
                0x00,             // FS
                0x00,             // GS
                0x00,             // RS
                0x00,             // US
                0x2c,      //  ' '
                0x1e|DE_MOD_SHIFT_LEFT,    // !
                0x35|DE_MOD_SHIFT_LEFT, //0x1F|DE_MOD_SHIFT_LEFT,    // "
                0x20|DE_MOD_SHIFT_LEFT, //0x38,    // #
                0x21|DE_MOD_SHIFT_LEFT,    // $
                0x22|DE_MOD_SHIFT_LEFT,    // %
                0x24|DE_MOD_SHIFT_LEFT, //0x23|DE_MOD_SHIFT_LEFT,    // &
                0x35, //0x32|DE_MOD_SHIFT_LEFT,          // '
                0x26|DE_MOD_SHIFT_LEFT, //0x25|DE_MOD_SHIFT_LEFT,    // (
                0x27|DE_MOD_SHIFT_LEFT, //0x26|DE_MOD_SHIFT_LEFT,    // )
                0x25|DE_MOD_SHIFT_LEFT, //0x30|DE_MOD_SHIFT_LEFT,    // *
                0x2E|DE_MOD_SHIFT_LEFT, //0x30,    // +
                0x36,          // ,
                0x2D, //0x38,          // -
                0x37,          // .
                0x14|DE_MOD_ALT_RIGHT, //0x24|DE_MOD_SHIFT_LEFT,          // /
                0x27,          // 0
                0x1e,          // 1
                0x1f,          // 2
                0x20,          // 3
                0x21,          // 4
                0x22,          // 5
                0x23,          // 6
                0x24,          // 7
                0x25,          // 8
                0x26,          // 9
                0x38|DE_MOD_SHIFT_LEFT, //0x37|DE_MOD_SHIFT_LEFT,      // :
                0x38, //0x36|DE_MOD_SHIFT_LEFT,          // ;
                0x36|DE_MOD_SHIFT_LEFT, //0x64,      // <
                0x2E, //0x27|DE_MOD_SHIFT_LEFT,          // =
                0x37|DE_MOD_SHIFT_LEFT, //0x64|DE_MOD_SHIFT_LEFT,      // >
                KEY_W|DE_MOD_ALT_RIGHT, //0x2D|DE_MOD_SHIFT_LEFT,      // ?
                0x1f|DE_MOD_SHIFT_LEFT, //0x14|DE_MOD_ALT_RIGHT,      // @ 
                0x04|DE_MOD_SHIFT_LEFT,      // A
                0x05|DE_MOD_SHIFT_LEFT,      // B
                0x06|DE_MOD_SHIFT_LEFT,      // C
                0x07|DE_MOD_SHIFT_LEFT,      // D
                0x08|DE_MOD_SHIFT_LEFT,      // E
                0x09|DE_MOD_SHIFT_LEFT,      // F
                0x0a|DE_MOD_SHIFT_LEFT,      // G
                0x0b|DE_MOD_SHIFT_LEFT,      // H
                0x0c|DE_MOD_SHIFT_LEFT,      // I
                0x0d|DE_MOD_SHIFT_LEFT,      // J
                0x0e|DE_MOD_SHIFT_LEFT,      // K
                0x0f|DE_MOD_SHIFT_LEFT,      // L
                0x10|DE_MOD_SHIFT_LEFT,      // M
                0x11|DE_MOD_SHIFT_LEFT,      // N
                0x12|DE_MOD_SHIFT_LEFT,      // O
                0x13|DE_MOD_SHIFT_LEFT,      // P
                0x14|DE_MOD_SHIFT_LEFT,      // Q
                0x15|DE_MOD_SHIFT_LEFT,      // R
                0x16|DE_MOD_SHIFT_LEFT,      // S
                0x17|DE_MOD_SHIFT_LEFT,      // T
                0x18|DE_MOD_SHIFT_LEFT,      // U
                0x19|DE_MOD_SHIFT_LEFT,      // V
                0x1a|DE_MOD_SHIFT_LEFT,      // W
                0x1b|DE_MOD_SHIFT_LEFT,      // X
                0x1c|DE_MOD_SHIFT_LEFT, //0x1d|DE_MOD_SHIFT_LEFT,      // Y
                0x1d|DE_MOD_SHIFT_LEFT, //0x1c|DE_MOD_SHIFT_LEFT,      // Z
                0x30, //0x25|DE_MOD_ALT_RIGHT,          // [
                0x64, //0x2d|DE_MOD_ALT_RIGHT,          // bslash
                0x32, //0x26|DE_MOD_ALT_RIGHT,          // ]
                0x35,    // ^
                0x2D|DE_MOD_SHIFT_LEFT, //0x38|DE_MOD_SHIFT_LEFT,    // _
                0x2E|DE_MOD_SHIFT_LEFT,          // `
                0x04,          // a
                0x05,          // b
                0x06,          // c
                0x07,          // d
                0x08,          // e
                0x09,          // f
                0x0a,          // g
                0x0b,          // h
                0x0c,          // i
                0x0d,          // j
                0x0e,          // k
                0x0f,          // l
                0x10,          // m
                0x11,          // n
                0x12,          // o
                0x13,          // p
                0x14,          // q
                0x15,          // r
                0x16,          // s
                0x17,          // t
                0x18,          // u
                0x19,          // v
                0x1a,          // w
                0x1b,          // x
                0x1c, //0x1d,          // y
                0x1d, //0x1c,          // z
                0x30|DE_MOD_SHIFT_LEFT, //0x24|DE_MOD_ALT_RIGHT,    // {
                0x64|DE_MOD_SHIFT_LEFT,    // |
                0x32|DE_MOD_SHIFT_LEFT, //0x27|DE_MOD_ALT_RIGHT,    // }
                0x64, //0x30|DE_MOD_ALT_RIGHT,    // ~
                0       // DEL
        };
//0x7C|0x0040,    // |

class DigiKeyboardDevicePtBr : public DigiKeyboardDevice{
    public:
    size_t write(uint8_t chr) {

        //çÇ
        if (chr == 195) {
          sendKeyStroke(0x33); 
          //sendKeyStroke(0x33, MOD_SHIFT_LEFT);
        }
        else {          
          unsigned int temp = pgm_read_word_near(_ascii_de_map + chr);          
          unsigned char low = temp & 0xFF;
          unsigned char high = (temp >> 8) & 0xFF;
          sendKeyStroke(low,high);
        }
        
        return 1;
    }
    void sendKeyReport(uchar *array,const unsigned int size){
        while (!usbInterruptIsReady()) {
            // Note: We wait until we can send keyPress
            //       so we know the previous keyPress was
            //       sent.
            usbPoll();
            _delay_ms(5);
        }

        usbSetInterrupt(array, size);
    }
};
DigiKeyboardDevicePtBr DigiKeyboardPtBr = DigiKeyboardDevicePtBr();
#endif //DIGIKEYBOARDDE_H
