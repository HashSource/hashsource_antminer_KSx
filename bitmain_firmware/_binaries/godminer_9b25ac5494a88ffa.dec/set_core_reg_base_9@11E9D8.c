int __fastcall set_core_reg_base_9(int a1, int *a2)
{
  char v3; // r5
  int v4; // r2
  __int16 v5; // lr
  char v6; // r12
  char v7; // r0
  _BYTE v9[2]; // [sp+4h] [bp-1Ch] BYREF
  _QWORD v10[3]; // [sp+6h] [bp-1Ah] BYREF

  if ( !*(_BYTE *)(a1 + 248) )
    return 4;
  v3 = *((_BYTE *)a2 + 8);
  v4 = *a2;
  memset(v10, 0, 9);
  v5 = *((_WORD *)a2 + 5);
  v6 = *((_BYTE *)a2 + 12);
  v10[0] = (16 * (v3 & 1)) & 0x1B | 0x44u;
  BYTE3(v10[0]) = v5;
  BYTE5(v10[0]) = BYTE2(v4);
  BYTE6(v10[0]) = BYTE1(v4);
  BYTE4(v10[0]) = v6;
  v9[0] = 85;
  v9[1] = -86;
  BYTE1(v10[0]) = 9;
  v7 = BM_CRC5(v10, 64);
  LOBYTE(v10[1]) = v10[1] & 0xE0 | v7 & 0x1F;
  send_command_packet(a1, v9, 11);
  return 0;
}
