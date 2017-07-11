
#include "Marlin.h"

extern struct PlayStatus play_st;


void inline report_ln(int buflen) {
    SERIAL_PROTOCOL("LN ");
    SERIAL_PROTOCOL(play_st.last_no);
    SERIAL_PROTOCOL(" ");
    SERIAL_PROTOCOL(buflen);
    SERIAL_PROTOCOL("\n");
}
