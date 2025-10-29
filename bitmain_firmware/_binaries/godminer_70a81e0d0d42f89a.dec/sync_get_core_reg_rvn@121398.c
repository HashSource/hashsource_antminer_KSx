int __fastcall sync_get_core_reg_rvn(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r5
  char v11; // r12
  char v14; // r1
  int v15; // r0
  __int16 v16; // r0
  char v17; // r0
  int v18; // r2
  int v19; // r8
  int v20; // r2
  int v21; // r11
  int v23; // r0
  int v24; // r3
  char v25; // r12
  int v26; // r2
  __int16 v27; // r1
  _DWORD v28[2]; // [sp+0h] [bp-24h] BYREF
  _BYTE v29[2]; // [sp+8h] [bp-1Ch] BYREF
  __int64 v30; // [sp+Ah] [bp-1Ah] BYREF
  _BYTE v31[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v32[2]; // [sp+16h] [bp-Eh] BYREF
  int v33; // [sp+18h] [bp-Ch]
  unsigned int v34; // [sp+1Ch] [bp-8h]

  if ( !a1[10].__size[12] )
    return 4;
  v11 = *(_BYTE *)(a2 + 8);
  v30 = 0;
  v14 = *(_BYTE *)(a2 + 9);
  v15 = *(_WORD *)(a2 + 10) & 0xFFF;
  v30 = (16 * (v11 & 1)) & 0x1A | 0x45u;
  BYTE2(v30) = v14;
  v29[0] = 85;
  v29[1] = -86;
  BYTE1(v30) = 8;
  v16 = reverse_byte_order_16(v15);
  BYTE6(v30) = 63;
  BYTE5(v30) = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v30 + 3) = v16;
  v17 = BM_CRC5(&v30, 56);
  v18 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v30) = HIBYTE(v30) & 0xE0 | v17 & 0x1F;
  if ( !v18 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v19 = 0;
  pthread_mutex_lock(a1 + 37);
  queue_clear(a1[36].__lock);
  send_command_packet(a1, v29, 10);
  sub_26EA20(a7, a8, 1000, 0);
  v28[1] = 1000000 * v20;
  v28[0] = sub_26EA20(a7, a8, 1000, 0);
  while ( v19 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[36].__lock, v31, 12, v28) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( v31[0] != 170 || v31[1] != 85 || v32[0] != 10 || (v34 & 0x40000000) != 0 )
      {
        v9 = 1;
        *a5 = v19;
        pthread_mutex_unlock(a1 + 37);
        return v9;
      }
      v21 = HIBYTE(v34) & 0x1F;
      if ( v21 == BM_CRC5(v32, 75) )
        break;
      v9 = 2;
    }
    v23 = v33;
    v24 = 12 * v19;
    v25 = v32[1];
    ++v19;
    v26 = a4 + v24;
    v27 = v34 >> 8;
    *(_BYTE *)(v26 + 4) = v34;
    *(_BYTE *)(v26 + 8) = v25;
    *(_WORD *)(v26 + 6) = v27;
    *(_DWORD *)(a4 + v24) = v23;
  }
LABEL_15:
  *a5 = v19;
  pthread_mutex_unlock(a1 + 37);
  return v9;
}
