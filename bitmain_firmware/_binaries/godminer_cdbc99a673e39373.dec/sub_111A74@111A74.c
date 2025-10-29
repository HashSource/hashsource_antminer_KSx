int __fastcall sub_111A74(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r9
  int v11; // r6
  int v12; // r8
  int v13; // r2
  int v14; // r7
  __int16 v16; // r2
  int v17; // r3
  int v18; // [sp+4h] [bp-20h]
  _DWORD v19[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v20[2]; // [sp+14h] [bp-10h] BYREF
  char v21; // [sp+16h] [bp-Eh] BYREF
  int v22; // [sp+17h] [bp-Dh]
  char v23; // [sp+1Bh] [bp-9h]
  unsigned __int8 v24; // [sp+1Ch] [bp-8h]
  char v25; // [sp+1Dh] [bp-7h]

  v6 = a1 + 36;
  pthread_mutex_lock(a1 + 36);
  v18 = a3;
  queue_clear(a1[35].__lock);
  v11 = 0;
  sub_25B668(a5, a6, 1000, 0);
  v12 = 0;
  v19[1] = 1000000 * v13;
  v19[0] = sub_25B668(a5, a6, 1000, 0);
  while ( a2 > v12 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[35].__lock, v20, 10, v19) == 110 )
      {
        v11 = 3;
        goto LABEL_11;
      }
      if ( v20[0] != 170 || v20[1] != 85 || v21 != 8 )
      {
        v11 = 1;
        goto LABEL_11;
      }
      v14 = v25 & 0x1F;
      if ( v14 == BM_CRC5(&v21, 59) )
        break;
      v11 = 2;
    }
    ++v12;
    v16 = v24;
    v17 = v22;
    *(_BYTE *)(v18 + 4) = v23;
    *(_WORD *)(v18 + 6) = v16;
    *(_DWORD *)v18 = v17;
    v18 += 12;
  }
LABEL_11:
  *a4 = v12;
  pthread_mutex_unlock(v6);
  return v11;
}
