int __fastcall sub_F8490(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r9
  int v10; // r6
  int v11; // r8
  int v12; // r2
  int v13; // r11
  __int16 v15; // r1
  unsigned int v16; // r3
  int v17; // r2
  _DWORD v19[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v20[2]; // [sp+14h] [bp-10h] BYREF
  int v21; // [sp+16h] [bp-Eh] BYREF
  char v22; // [sp+1Ah] [bp-Ah]
  unsigned __int8 v23; // [sp+1Bh] [bp-9h]
  unsigned __int8 v24; // [sp+1Ch] [bp-8h]

  v6 = a1 + 37;
  pthread_mutex_lock(a1 + 37);
  queue_clear(a1[36].__lock);
  sub_26D2D0(a5, a6, 1000, 0);
  v10 = 0;
  v11 = 0;
  v19[1] = 1000000 * v12;
  v19[0] = sub_26D2D0(a5, a6, 1000, 0);
  while ( a2 > v11 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[36].__lock, v20, 9, v19) == 110 )
      {
        v10 = 3;
        goto LABEL_11;
      }
      if ( v20[0] != 170 || v20[1] != 85 || (v24 & 0x80u) != 0 )
      {
        v10 = 1;
        goto LABEL_11;
      }
      v13 = v24 & 0x1F;
      if ( v13 == BM_CRC5(&v21, 51) )
        break;
      v10 = 2;
    }
    ++v11;
    v15 = v23;
    a3 += 12;
    v16 = v24;
    *(_BYTE *)(a3 - 8) = v22;
    v17 = v21;
    *(_WORD *)(a3 - 6) = v15;
    *(_BYTE *)(a3 - 3) = (v16 >> 5) & 3;
    *(_DWORD *)(a3 - 12) = v17;
  }
LABEL_11:
  *a4 = v11;
  pthread_mutex_unlock(v6);
  return v10;
}
