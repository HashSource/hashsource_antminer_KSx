int __fastcall set_core_reg_base10(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  __int16 v6; // r0
  _BYTE *v7; // r6
  char v8; // r0
  _BYTE v10[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD src[3]; // [sp+2h] [bp-1Eh] BYREF

  if ( !*(_BYTE *)(a1 + 252) )
    return 4;
  v2 = *(_BYTE *)(a2 + 8);
  memset(src, 0, sizeof(src));
  v5 = *(unsigned __int16 *)(a2 + 10);
  src[0] = (16 * (v2 & 1)) & 0x1B | 0x44;
  v10[0] = 85;
  v10[1] = -86;
  BYTE1(src[0]) = 12;
  v6 = reverse_byte_order_16(v5);
  *(_WORD *)((char *)&src[1] + 1) = *(_WORD *)(a2 + 12);
  *(_WORD *)((char *)src + 3) = v6;
  *(_DWORD *)((char *)&src[1] + 3) = reverse_byte_order_32(*(_DWORD *)a2);
  v7 = calloc(0xBu, 1u);
  memcpy(v7, src, 0xBu);
  v8 = BM_CRC5(v7, 88);
  HIBYTE(src[2]) = HIBYTE(src[2]) & 0xE0 | v8 & 0x1F;
  free(v7);
  send_command_packet(a1, v10, 14);
  return 0;
}
