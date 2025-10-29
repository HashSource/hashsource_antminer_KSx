int __fastcall set_core_reg_rvn(pthread_mutex_t *a1, int a2)
{
  char v3; // r0
  __int16 v4; // r2
  char v5; // r3
  unsigned int v6; // r0
  char v7; // r0
  _BYTE v9[2]; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+2h] [bp-16h] BYREF
  __int64 v11; // [sp+6h] [bp-12h]

  if ( !a1[9].__size[20] )
    return 4;
  v3 = *(_BYTE *)(a2 + 8);
  v10 = 0;
  v11 = 0;
  v4 = *(_WORD *)(a2 + 10);
  v5 = (16 * (v3 & 1)) | 4;
  v6 = *(_DWORD *)a2;
  BYTE1(v11) = *(_BYTE *)(a2 + 12);
  LOBYTE(v11) = v4;
  v10 = v5 & 0x1F | 0x40;
  v9[0] = 85;
  v9[1] = -86;
  BYTE1(v10) = 12;
  BYTE2(v11) = 63;
  *(_DWORD *)((char *)&v11 + 3) = reverse_byte_order_32(v6);
  v7 = BM_CRC5(&v10, 88);
  HIBYTE(v11) = HIBYTE(v11) & 0xE0 | v7 & 0x1F;
  send_command_packet(a1, (int)v9, 0xEu);
  return 0;
}
