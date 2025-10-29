int __fastcall sub_122368(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r9
  int v11; // r6
  int v12; // r8
  int v13; // r2
  int v14; // r7
  __int16 v16; // r3
  int v17; // [sp+4h] [bp-20h]
  int v18[2]; // [sp+Ch] [bp-18h] BYREF
  char v19[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v20[3]; // [sp+16h] [bp-Eh] BYREF
  int v21; // [sp+19h] [bp-Bh]
  char v22; // [sp+1Dh] [bp-7h]

  v6 = (pthread_mutex_t *)(a1 + 900);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 900));
  v17 = a3;
  queue_clear(*(_DWORD *)(a1 + 868));
  v11 = 0;
  sub_2704F8(a5, a6, 1000, 0);
  v12 = 0;
  v18[1] = 1000000 * v13;
  v18[0] = sub_2704F8(a5, a6, 1000, 0);
  while ( a2 > v12 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), v19, 0xAu, v18) == 110 )
      {
        v11 = 3;
        goto LABEL_11;
      }
      if ( (unsigned __int8)v19[0] != 170 || v19[1] != 85 || (v20[0] & 0xEF) != 0 )
      {
        v11 = 1;
        goto LABEL_11;
      }
      v14 = v22 & 0x1F;
      if ( v14 == BM_CRC5(v20, 56) )
        break;
      v11 = 2;
    }
    ++v12;
    v16 = v20[2];
    *(_BYTE *)(v17 + 4) = v20[1];
    *(_WORD *)(v17 + 6) = v16;
    *(_DWORD *)v17 = v21;
    v17 += 12;
  }
LABEL_11:
  *a4 = v12;
  pthread_mutex_unlock(v6);
  return v11;
}
