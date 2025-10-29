int __fastcall set_core_reg_rvn(int a1, int a2)
{
  char v3; // r12
  char v5; // r1
  __int16 v6; // r0
  __int16 v7; // r0
  char v8; // r3
  char v9; // r0
  _BYTE v11[2]; // [sp+0h] [bp-20h] BYREF
  _QWORD v12[3]; // [sp+2h] [bp-1Eh] BYREF

  if ( !*(_BYTE *)(a1 + 248) )
    return 4;
  v3 = *(_BYTE *)(a2 + 9);
  v5 = *(_BYTE *)(a2 + 8);
  memset(v12, 0, 12);
  BYTE2(v12[0]) = v3;
  v6 = *(_WORD *)(a2 + 10);
  v11[0] = 85;
  v12[0] = (16 * (v5 & 1)) & 0x1B | 0x44u;
  v11[1] = -86;
  BYTE1(v12[0]) = 12;
  v7 = reverse_byte_order_16(v6 & 0xFFF);
  v8 = *(_BYTE *)(a2 + 13);
  BYTE5(v12[0]) = *(_BYTE *)(a2 + 12);
  BYTE6(v12[0]) = v8;
  *(_WORD *)((char *)v12 + 3) = v7;
  *(_DWORD *)((char *)v12 + 7) = reverse_byte_order_32(*(_DWORD *)a2);
  v9 = BM_CRC5(v12, 88);
  BYTE3(v12[1]) = BYTE3(v12[1]) & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, v11, 14);
  return 0;
}
