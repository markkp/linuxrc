int auto2_mount_cdrom(char *device);
void auto2_scan_hardware(char *log_file);
int auto2_init(void);
int auto2_init_settings(void);
void auto2_chk_expert(void);
int auto2_pcmcia(void);
int auto2_full_libhd(void);
#if 0
void auto2_find_braille(void);
#endif
char *auto2_usb_module(void);
char *auto2_xserver(char **version, char **busid);
char *auto2_disk_list(int *boot_disk);
char *auto2_serial_console(void);
void auto2_print_x11_opts(FILE *);
