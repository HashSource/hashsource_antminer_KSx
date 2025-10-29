int __fastcall set_chip_reg_base(int a1, int *a2)
{
  char v2; // r5
  int v4; // r0
  char v5; // r0
  _BYTE v7[2]; // [sp+4h] [bp-1Ch] BYREF
  _QWORD v8[3]; // [sp+6h] [bp-1Ah] BYREF

  if ( !*(_BYTE *)(a1 + 248) )
    return 4;
  v2 = *((_BYTE *)a2 + 8);
  memset(v8, 0, 9);
  v4 = *a2;
  LODWORD(v8[0]) = (16 * (v2 & 1)) & 0x1E | 0x41;
  v7[1] = -86;
  BYTE1(v8[0]) = 9;
  v7[0] = 85;
  HIDWORD(v8[0]) = reverse_byte_order_32(v4);
  v5 = BM_CRC5(v8, 64);
  LOBYTE(v8[1]) = v8[1] & 0xE0 | v5 & 0x1F;
  send_command_packet(a1, v7, 11);
  return 0;
}
