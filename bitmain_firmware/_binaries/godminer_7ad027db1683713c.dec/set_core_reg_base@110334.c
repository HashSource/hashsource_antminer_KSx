int __fastcall set_core_reg_base(pthread_mutex_t *a1, int a2)
{
  char v2; // lr
  char v4; // r0
  char v5; // r2
  __int16 v6; // r12
  char v7; // r3
  unsigned int v8; // r0
  char v9; // r0
  _BYTE v11[2]; // [sp+4h] [bp-14h] BYREF
  __int16 v12; // [sp+6h] [bp-12h] BYREF
  __int64 v13; // [sp+8h] [bp-10h]

  if ( !a1[9].__size[20] )
    return 4;
  v2 = *(_BYTE *)(a2 + 9);
  v4 = *(_BYTE *)(a2 + 8);
  v12 = 0;
  v13 = 0;
  v5 = *(_BYTE *)(a2 + 12);
  v6 = *(_WORD *)(a2 + 10);
  v7 = (16 * (v4 & 1)) | 4;
  v8 = *(_DWORD *)a2;
  LOBYTE(v13) = v2;
  BYTE1(v13) = v6;
  LOBYTE(v12) = v7 & 0x1F | 0x40;
  BYTE2(v13) = v5;
  v11[0] = 85;
  v11[1] = -86;
  HIBYTE(v12) = 10;
  *(_DWORD *)((char *)&v13 + 3) = reverse_byte_order_32(v8);
  v9 = BM_CRC5(&v12, 72);
  HIBYTE(v13) = HIBYTE(v13) & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, (int)v11, 0xCu);
  return 0;
}
