typedef unsigned short u16_t;
struct telnet_state {
    unsigned char flags;
    char *text;
    u16_t textlen;
    u16_t sentlen;
};
