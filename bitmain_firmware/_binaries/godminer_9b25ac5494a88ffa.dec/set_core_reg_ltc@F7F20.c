int __fastcall set_core_reg_ltc(int a1, int a2)
{
  __int16 v4; // r1
  char v5; // r3
  int v6; // r0
  char v7; // r0
  int v9; // [sp+0h] [bp-20h]
  __int16 v10; // [sp+2h] [bp-1Eh]
  _BYTE v11[2]; // [sp+4h] [bp-1Ch] BYREF
  _QWORD v12[3]; // [sp+6h] [bp-1Ah] BYREF

  if ( !*(_BYTE *)(a1 + 248) )
    return 4;
  LOBYTE(v10) = v10 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v4 = v10 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  BYTE2(v9) = v4;
  HIBYTE(v9) = HIBYTE(v4) & 0xF | 0x40 | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  memset(v12, 0, 9);
  LOWORD(v9) = *(_DWORD *)a2;
  v5 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 1;
  v11[0] = 85;
  v12[0] = v5 & 0x1F | 0x40u;
  v11[1] = -86;
  BYTE1(v12[0]) = 9;
  BYTE3(v12[0]) = 60;
  v6 = reverse_byte_order_32(v9);
  LOBYTE(v12[1]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  HIDWORD(v12[0]) = v6;
  v7 = BM_CRC5(v12, 64);
  LOBYTE(v12[1]) = v12[1] & 0xE0 | v7 & 0x1F;
  send_command_packet(a1, v11, 11);
  return 0;
}
