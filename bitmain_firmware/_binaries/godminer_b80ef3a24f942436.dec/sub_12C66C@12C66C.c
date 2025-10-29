int __fastcall sub_12C66C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r5
  int v5; // [sp+Ch] [bp-250h] BYREF
  void *ptr; // [sp+10h] [bp-24Ch] BYREF
  _DWORD v7[2]; // [sp+14h] [bp-248h] BYREF
  struct termios termios_p; // [sp+1Ch] [bp-240h] BYREF
  char s[516]; // [sp+58h] [bp-204h] BYREF

  v5 = a1;
  if ( find_c_map((int *)dword_311FF0, (int)&v5, &ptr) == 1 )
  {
    v3 = *((_DWORD *)ptr + 1);
    free(ptr);
  }
  else
  {
    v1 = hal_chain_uart_addr(v5);
    snprintf(s, 0x200u, "/dev/ttyS%d", v1);
    v2 = open64(s, 2306);
    v7[0] = v5;
    v3 = v2;
    v7[1] = v2;
    tcgetattr(v2, &termios_p);
    cfsetispeed(&termios_p, 0x1002u);
    cfsetospeed(&termios_p, 0x1002u);
    *(_WORD *)&termios_p.c_cc[5] = 2304;
    termios_p.c_cflag = termios_p.c_cflag & 0xFFFFF64F | 0x8B0;
    termios_p.c_iflag &= 0xFFFFFA14;
    termios_p.c_oflag &= ~1u;
    termios_p.c_lflag &= 0xFFFF7FB4;
    tcsetattr(v3, 0, &termios_p);
    tcflush(v3, 2);
    insert_c_map((int *)dword_311FF0, &v5, 4u, v7, 8u);
  }
  return v3;
}
