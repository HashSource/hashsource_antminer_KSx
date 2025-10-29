int __fastcall set_chip_reg_ltc(pthread_mutex_t *a1, int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r0
  char v6; // r0
  _BYTE v8[2]; // [sp+4h] [bp-1Ch] BYREF
  _QWORD v9[3]; // [sp+6h] [bp-1Ah] BYREF

  if ( !a1[9].__size[20] )
    return 4;
  memset(v9, 0, 9);
  v4 = *(_DWORD *)a2;
  v9[0] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41u;
  v8[0] = 85;
  v8[1] = -86;
  BYTE1(v9[0]) = 9;
  v5 = reverse_byte_order_32(v4);
  LOBYTE(v9[1]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  HIDWORD(v9[0]) = v5;
  v6 = BM_CRC5(v9, 64);
  LOBYTE(v9[1]) = v9[1] & 0xE0 | v6 & 0x1F;
  send_command_packet(a1, (int)v8, 0xBu);
  return 0;
}
