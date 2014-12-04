#ifndef __RADIO_H__
#define __RADIO_H__

void radio_init();

void radio_process_frame(char *frame, int framelen, int modulo);
void segmentation_reset(void);
void mod_set(int m);

void print_buf(char *frame, int framelen);
char *make_crc(char *input, int framelen);



#endif
