int __fastcall sync_get_core_reg_base(
        pthread_mutex_t *a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r5
  char v13; // r3
  __int16 v14; // r12
  char v15; // r2
  char v16; // r0
  int v17; // r2
  int v18; // r8
  int v19; // r2
  int v20; // r11
  int v22; // r1
  int v23; // r3
  __int16 v24; // r12
  char v25; // r0
  int v26; // r2
  _BYTE v27[2]; // [sp+4h] [bp-20h] BYREF
  int v28; // [sp+6h] [bp-1Eh] BYREF
  __int16 v29; // [sp+Ah] [bp-1Ah]
  int v30[2]; // [sp+Ch] [bp-18h] BYREF
  char v31[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v32[2]; // [sp+16h] [bp-Eh] BYREF
  int v33; // [sp+18h] [bp-Ch]
  char v34; // [sp+1Ch] [bp-8h]
  unsigned __int8 v35; // [sp+1Dh] [bp-7h]
  char v36; // [sp+1Eh] [bp-6h]

  if ( !a1[9].__size[20] )
    return 4;
  v28 = 0;
  v13 = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  v29 = 0;
  v14 = *(_WORD *)(a2 + 10);
  v15 = *(_BYTE *)(a2 + 12);
  v28 = v13 & 0x1F | 0x40;
  LOBYTE(v29) = v15;
  v27[0] = 85;
  v27[1] = -86;
  HIBYTE(v28) = v14;
  BYTE1(v28) = 6;
  v16 = BM_CRC5(&v28, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v29) = HIBYTE(v29) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v18 = 0;
  pthread_mutex_lock(a1 + 36);
  queue_clear(a1[35].__lock);
  send_command_packet(a1, (int)v27, 8u);
  sub_25A4F8(a7, a8, 0x3E8u);
  v30[1] = 1000000 * v19;
  v30[0] = sub_25A4F8(a7, a8, 0x3E8u);
  while ( a3 > v18 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, v31, 0xBu, v30) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( (unsigned __int8)v31[0] != 170 || v31[1] != 85 || v32[0] != 9 || (v36 & 0x40) == 0 )
      {
        v9 = 1;
        *a5 = v18;
        pthread_mutex_unlock(a1 + 36);
        return v9;
      }
      v20 = v36 & 0x1F;
      if ( v20 == BM_CRC5(v32, 67) )
        break;
      v9 = 2;
    }
    v22 = v33;
    v23 = 12 * v18;
    v24 = v35;
    ++v18;
    v25 = v32[1];
    v26 = a4 + v23;
    *(_BYTE *)(v26 + 4) = v34;
    *(_WORD *)(v26 + 6) = v24;
    *(_BYTE *)(v26 + 8) = v25;
    *(_DWORD *)(a4 + v23) = v22;
  }
LABEL_15:
  *a5 = v18;
  pthread_mutex_unlock(a1 + 36);
  return v9;
}
