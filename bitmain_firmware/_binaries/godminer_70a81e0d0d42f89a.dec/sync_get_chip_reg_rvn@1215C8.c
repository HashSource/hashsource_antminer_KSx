int __fastcall sync_get_chip_reg_rvn(pthread_mutex_t *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  char v12; // r2
  __int16 v13; // r12
  char v14; // r0
  _BYTE v16[2]; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ah] [bp-Ah] BYREF
  char v18; // [sp+Eh] [bp-6h]

  if ( !a1[10].__size[12] )
    return 4;
  v17 = 0;
  v12 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  v13 = *(_WORD *)(a2 + 10);
  v18 = 0;
  v17 = v12 & 0x1F | 0x40;
  HIBYTE(v17) = v13;
  v16[0] = 85;
  v16[1] = -86;
  BYTE1(v17) = 5;
  v14 = BM_CRC5(&v17, 32);
  v18 = v18 & 0xE0 | v14 & 0x1F;
  send_command_packet(a1, v16, 7);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( a1[10].__size[12] )
    return sub_120974(a1, a3, a4, a5, a7, a8);
  else
    return 4;
}
