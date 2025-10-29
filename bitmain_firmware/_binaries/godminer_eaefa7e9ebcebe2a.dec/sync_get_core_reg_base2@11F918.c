int __fastcall sync_get_core_reg_base2(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r5
  char v13; // r2
  int v14; // r0
  void *v15; // r10
  char v16; // r0
  int v17; // r9
  int v18; // r2
  char v19; // r11
  char v21; // r2
  unsigned int v22; // r3
  _DWORD v23[2]; // [sp+0h] [bp-24h] BYREF
  _BYTE v24[2]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE src[6]; // [sp+Ah] [bp-1Ah] BYREF
  char v26; // [sp+10h] [bp-14h]
  _BYTE v27[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v28[2]; // [sp+16h] [bp-Eh] BYREF
  _BYTE v29[7]; // [sp+18h] [bp-Ch]
  char v30; // [sp+1Fh] [bp-5h]

  if ( !a1[10].__size[12] )
    return 4;
  *(_DWORD *)src = 0;
  v13 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  v14 = *(unsigned __int16 *)(a2 + 10);
  v26 = 0;
  *(_DWORD *)src = v13 & 0x1F | 0x40;
  v24[1] = -86;
  v24[0] = 85;
  src[1] = 7;
  *(_WORD *)&src[4] = reverse_byte_order_16(v14);
  v15 = calloc(8u, 1u);
  memcpy(v15, src, 6u);
  v16 = BM_CRC5(v15, 64);
  v26 = v26 & 0xE0 | v16 & 0x1F;
  free(v15);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v17 = 0;
  pthread_mutex_lock(a1 + 37);
  queue_clear(a1[36].__lock);
  send_command_packet(a1, v24, 9);
  sub_26C8C0(a7, a8, 1000, 0);
  v23[1] = 1000000 * v18;
  v23[0] = sub_26C8C0(a7, a8, 1000, 0);
  while ( v17 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[36].__lock, v27, 12, v23) == 110 )
      {
        v9 = 3;
        goto LABEL_14;
      }
      if ( v27[0] != 170 || v27[1] != 85 || (v28[0] & 0xEF) != 1 )
      {
        v9 = 1;
        *a5 = v17;
        pthread_mutex_unlock(a1 + 37);
        return v9;
      }
      v19 = v30;
      if ( (v19 & 0x1F) == BM_CRC5(v28, 72) )
        break;
      v9 = 2;
    }
    ++v17;
    v21 = v29[0];
    *(_BYTE *)(a4 + 4) = v28[1];
    v22 = *(_DWORD *)v29;
    *(_BYTE *)(a4 + 8) = v21;
    *(_WORD *)(a4 + 6) = v22 >> 8;
    *(_DWORD *)a4 = *(_DWORD *)&v29[3];
    a4 += 12;
  }
LABEL_14:
  *a5 = v17;
  pthread_mutex_unlock(a1 + 37);
  return v9;
}
