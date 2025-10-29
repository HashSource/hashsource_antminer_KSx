int __fastcall set_core_reg_base2(pthread_mutex_t *a1, int a2)
{
  char v4; // r3
  unsigned int v5; // r0
  _BYTE *v6; // r7
  char v7; // r0
  _BYTE v9[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD src[9]; // [sp+2h] [bp-26h] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  memset(src, 0, 11);
  v4 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  v5 = *(unsigned __int16 *)(a2 + 10);
  v9[0] = 85;
  src[0] = v4 & 0x1F | 0x40;
  v9[1] = -86;
  BYTE1(src[0]) = 11;
  src[1] = (unsigned __int16)reverse_byte_order_16(v5);
  *(_DWORD *)((char *)&src[1] + 2) = reverse_byte_order_32(*(_DWORD *)a2);
  v6 = calloc(0xCu, 1u);
  memcpy(v6, src, 0xAu);
  v7 = BM_CRC5(v6, 96);
  BYTE2(src[2]) = BYTE2(src[2]) & 0xE0 | v7 & 0x1F;
  free(v6);
  send_command_packet(a1, (int)v9, 0xDu);
  return 0;
}
