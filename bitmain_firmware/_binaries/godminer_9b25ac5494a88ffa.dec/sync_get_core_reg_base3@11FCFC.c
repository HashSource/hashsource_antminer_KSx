int __fastcall sync_get_core_reg_base3(int a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
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
  int v22; // r2
  __int16 v23; // r0
  int v24; // r3
  char v25; // lr
  int v26; // r1
  _BYTE v27[2]; // [sp+4h] [bp-20h] BYREF
  int v28; // [sp+6h] [bp-1Eh] BYREF
  __int16 v29; // [sp+Ah] [bp-1Ah]
  _DWORD v30[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v31[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v32[7]; // [sp+16h] [bp-Eh] BYREF
  char v33; // [sp+1Dh] [bp-7h]

  if ( !*(_BYTE *)(a1 + 248) )
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
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 880));
  queue_clear(*(_DWORD *)(a1 + 856));
  send_command_packet(a1, v27, 8);
  sub_26C3E0(a7, a8, 1000, 0);
  v30[1] = 1000000 * v19;
  v30[0] = sub_26C3E0(a7, a8, 1000, 0);
  while ( v18 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 856), v31, 10, v30) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( v31[0] != 170 || v31[1] != 85 || v32[0] != 8 || (v33 & 0xC0) != 0x40 )
      {
        v9 = 1;
        *a5 = v18;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 880));
        return v9;
      }
      v20 = v33 & 0x1F;
      if ( v20 == BM_CRC5(v32, 59) )
        break;
      v9 = 2;
    }
    v22 = 12 * v18;
    v23 = v32[6];
    ++v18;
    v24 = (v32[3] << 8) | (v32[2] << 16);
    v25 = v32[1];
    v26 = a4 + v22;
    *(_BYTE *)(v26 + 4) = v32[5];
    *(_WORD *)(v26 + 6) = v23;
    *(_BYTE *)(v26 + 8) = v25;
    *(_DWORD *)(a4 + v22) = v24 | v32[4];
  }
LABEL_15:
  *a5 = v18;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 880));
  return v9;
}
