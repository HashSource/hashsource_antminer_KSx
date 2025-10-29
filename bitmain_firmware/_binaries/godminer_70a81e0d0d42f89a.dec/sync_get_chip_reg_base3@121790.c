int __fastcall sync_get_chip_reg_base3(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r5
  char v13; // r3
  int v14; // r10
  char v15; // r0
  char v16; // r3
  int lock; // r0
  int v18; // r2
  char v19; // r4
  __int16 v21; // r2
  int v22; // r3
  _BYTE v23[2]; // [sp+4h] [bp-20h] BYREF
  int v24; // [sp+6h] [bp-1Eh] BYREF
  char v25; // [sp+Ah] [bp-1Ah]
  _DWORD v26[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v27[2]; // [sp+14h] [bp-10h] BYREF
  char v28; // [sp+16h] [bp-Eh] BYREF
  int v29; // [sp+17h] [bp-Dh]
  char v30; // [sp+1Bh] [bp-9h]
  unsigned __int8 v31; // [sp+1Ch] [bp-8h]
  char v32; // [sp+1Dh] [bp-7h]

  if ( !a1[10].__size[12] )
    return 4;
  v9 = 0;
  v24 = 0;
  v13 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  v23[1] = -86;
  v23[0] = 85;
  v24 = v13 & 0x1F | 0x40;
  v25 = 0;
  v14 = 0;
  BYTE1(v24) = 5;
  v15 = BM_CRC5(&v24, 32);
  v16 = v25 & 0xE0 | v15 & 0x1F;
  lock = a1[36].__lock;
  v25 = v16;
  queue_clear(lock);
  send_command_packet(a1, v23, 7);
  pthread_mutex_lock(a1 + 37);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  sub_26EA20(a7, a8, 1000, 0);
  v26[1] = 1000000 * v18;
  v26[0] = sub_26EA20(a7, a8, 1000, 0);
  while ( v14 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[36].__lock, v27, 10, v26) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( v27[0] != 170 || v27[1] != 85 || v28 != 8 )
      {
        v9 = 1;
        *a5 = v14;
        pthread_mutex_unlock(a1 + 37);
        return v9;
      }
      v19 = v32;
      if ( (v19 & 0x1F) == BM_CRC5(&v28, 59) )
        break;
      v9 = 2;
    }
    ++v14;
    v21 = v31;
    v22 = v29;
    *(_BYTE *)(a4 + 4) = v30;
    *(_WORD *)(a4 + 6) = v21;
    *(_DWORD *)a4 = v22;
    a4 += 12;
  }
LABEL_15:
  *a5 = v14;
  pthread_mutex_unlock(a1 + 37);
  return v9;
}
