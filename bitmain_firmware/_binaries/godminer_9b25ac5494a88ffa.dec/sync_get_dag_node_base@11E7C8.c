int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  char v10; // r12
  char v11; // r1
  int v14; // r0
  void *v15; // r11
  char v16; // r0
  _BYTE v18[2]; // [sp+Ch] [bp-10h] BYREF
  __int64 v19; // [sp+Eh] [bp-Eh] BYREF

  if ( !*(_BYTE *)(a1 + 248) )
    return 4;
  v10 = *(_BYTE *)(a2 + 8);
  v11 = *(_BYTE *)(a2 + 9);
  v19 = 0;
  BYTE2(v19) = v11;
  v14 = *(_DWORD *)(a2 + 4);
  v18[0] = 85;
  v19 = (16 * (v10 & 1)) & 0x19 | 0x46u;
  v18[1] = -86;
  BYTE1(v19) = 8;
  *(_DWORD *)((char *)&v19 + 3) = reverse_byte_order_32(v14);
  v15 = calloc(8u, 1u);
  memcpy(v15, &v19, 7u);
  v16 = BM_CRC5(v15, 64);
  HIBYTE(v19) = HIBYTE(v19) & 0xE0 | v16 & 0x1F;
  free(v15);
  send_command_packet(a1, v18, 10);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 248) )
    return sub_11E01C(a1, a3, a4, a5, a7, a8);
  else
    return 4;
}
