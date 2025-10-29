int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v11; // r1
  __int16 v13; // r2
  char v14; // r0
  int v15; // r1
  int v16; // r0
  int (__fastcall *v17)(int, int, int, int, int, int); // r4
  _BYTE v19[2]; // [sp+8h] [bp-20h] BYREF
  int v20; // [sp+Ah] [bp-1Eh] BYREF
  char v21; // [sp+Eh] [bp-1Ah]

  if ( !*(_BYTE *)(a1 + 252) )
    return 4;
  v20 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v21 = 0;
  v13 = *(_WORD *)(a2 + 10);
  v20 = (16 * (v11 & 1)) & 0x1D | 0x42;
  HIBYTE(v20) = v13;
  v19[1] = -86;
  v19[0] = 85;
  BYTE1(v20) = 5;
  v14 = BM_CRC5(&v20, 32);
  v21 = v21 & 0xE0 | v14 & 0x1F;
  send_command_packet(a1, v19, 7);
  v15 = a8;
  v16 = a1;
  if ( *(_BYTE *)(a2 + 8) )
    v15 = a3;
  v17 = *(int (__fastcall **)(int, int, int, int, int, int))(a1 + 280);
  if ( !*(_BYTE *)(a2 + 8) )
    v15 = 1;
  return v17(v16, v15, a4, a5, a7, a8);
}
