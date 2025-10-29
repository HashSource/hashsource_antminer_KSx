int __fastcall sync_get_dag_node_base_2282(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, unsigned int a7)
{
  char v9; // r12
  char v10; // r1
  int v13; // r0
  _BYTE *v14; // r8
  char v15; // r0
  _BYTE v17[2]; // [sp+14h] [bp-10h] BYREF
  __int64 v18; // [sp+16h] [bp-Eh] BYREF

  if ( !*(_BYTE *)(a1 + 252) )
    return 4;
  v9 = *(_BYTE *)(a2 + 8);
  v10 = *(_BYTE *)(a2 + 9);
  v18 = 0;
  BYTE2(v18) = v10;
  v13 = *(_DWORD *)(a2 + 4);
  v17[0] = 85;
  v18 = (16 * (v9 & 1)) & 0x19 | 0x46u;
  v17[1] = -86;
  BYTE1(v18) = 8;
  *(_DWORD *)((char *)&v18 + 3) = reverse_byte_order_32(v13);
  v14 = calloc(8u, 1u);
  memcpy(v14, &v18, 7u);
  v15 = BM_CRC5(v14, 64);
  HIBYTE(v18) = HIBYTE(v18) & 0xE0 | v15 & 0x1F;
  free(v14);
  send_command_packet(a1, v17, 10);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 252) )
    return sub_122138(a1, a3, a4, a5, a7);
  else
    return 4;
}
