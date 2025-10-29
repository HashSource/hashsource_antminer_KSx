int __fastcall pipe_pop_eager(int a1, char *a2, int a3)
{
  int v3; // r11
  unsigned int v4; // r6
  pthread_mutex_t *v5; // r10
  unsigned int v7; // r5
  unsigned int v8; // r7
  int v9; // r9
  unsigned int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  size_t v13; // r8
  unsigned int v14; // r3
  unsigned int v15; // r5
  bool v16; // cc
  int v17; // r1
  pthread_cond_t *v18; // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  int v22; // r2
  char *v23; // r5
  char *v24; // r5
  unsigned int v25; // r3
  unsigned int v26; // r12
  int v27; // r1
  int v28; // lr
  bool v29; // cf
  int v30; // r0
  int v31; // r2
  unsigned int v32; // r2
  unsigned int v33; // [sp+0h] [bp-34h]
  unsigned int v35; // [sp+8h] [bp-2Ch]
  size_t n; // [sp+Ch] [bp-28h]
  int v37[7]; // [sp+10h] [bp-24h] BYREF
  char v38[5]; // [sp+2Fh] [bp-5h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)a1 * a3;
  if ( !v4 )
    return v4;
  v5 = (pthread_mutex_t *)(a1 + 36);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_DWORD *)a1;
  v33 = *(_DWORD *)(a1 + 12);
  v10 = *(_DWORD *)(a1 + 16);
  if ( v7 >= v8 )
  {
    v20 = v10 - v7;
    v21 = v8 - v33;
    if ( v9 != v8 - v33 + v10 - v7 )
      goto LABEL_33;
  }
  else
  {
    v11 = v8 - v7;
    if ( v9 != v8 - v7 )
      goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    do
    {
      pthread_cond_wait((pthread_cond_t *)(a1 + 88), v5);
      v7 = *(_DWORD *)(a1 + 20);
      v8 = *(_DWORD *)(a1 + 24);
      v10 = *(_DWORD *)(a1 + 16);
      v22 = v8 - v7;
      v9 = *(_DWORD *)a1;
      if ( v7 >= v8 )
        v22 = v8 - *(_DWORD *)(a1 + 12) + v10 - v7;
    }
    while ( v9 == v22 && *(_DWORD *)(a1 + 28) );
    v33 = *(_DWORD *)(a1 + 12);
  }
  if ( v8 > v7 )
  {
    v11 = v8 - v7;
    goto LABEL_4;
  }
  v20 = v10 - v7;
  v21 = v8 - v33;
LABEL_33:
  v11 = v21 + v20;
LABEL_4:
  v12 = v11 - v9;
  if ( v12 )
  {
    v13 = v10 - v7 - v9;
    if ( v4 >= v12 )
      v4 = v12;
    if ( v13 >= v4 )
      v13 = v4;
    v35 = v10;
    n = v4 - v13;
    memcpy(a2, (const void *)(v7 + v9), v13);
    v14 = v35;
    v15 = v7 + v13;
    if ( v15 >= v35 )
      v15 = v33 + v15 - v35;
    if ( v4 != v13 )
    {
      v23 = (char *)(v15 + v9);
      if ( (unsigned int)v23 >= v35 )
        v23 = &v23[v33 - v35];
      memcpy(&a2[v13], v23, n);
      v14 = v35;
      v24 = &v23[n];
      if ( (unsigned int)v24 >= v35 )
        v24 = &v24[v33 - v35];
      v15 = (unsigned int)&v24[-v9];
      if ( v33 > v15 )
        v15 = v35 - (v33 - v15);
    }
    v16 = v8 > v15;
    v17 = 1;
    if ( v8 > v15 )
      v8 -= v15;
    v38[0] = 1;
    if ( !v16 )
      v17 = v33;
    *(_DWORD *)(a1 + 20) = v15;
    if ( !v16 )
      v8 = v8 - v17 + v14 - v15;
    if ( v8 - v9 <= (v14 - v33 - v9) >> 2 )
    {
      pthread_mutex_unlock(v5);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
      pthread_mutex_lock(v5);
      v25 = *(_DWORD *)(a1 + 24);
      v26 = *(_DWORD *)(a1 + 20);
      v27 = *(_DWORD *)(a1 + 12);
      v28 = *(_DWORD *)(a1 + 16);
      v29 = v26 >= v25;
      v30 = *(_DWORD *)a1;
      if ( v26 < v25 )
        v25 -= v26;
      v31 = v28 - v27;
      if ( v29 )
      {
        v27 = v25 - v27;
        v25 = v28 - v26;
      }
      v32 = v31 - v30;
      if ( v29 )
        v25 += v27;
      if ( v25 - v30 <= v32 >> 2 )
        sub_1A77D8(v37, (int *)a1, v32 >> 1, v38);
      pthread_mutex_unlock(v5);
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 60));
    }
    else
    {
      pthread_mutex_unlock(v5);
    }
    v18 = (pthread_cond_t *)(a1 + 136);
    if ( v4 == *(_DWORD *)a1 )
      pthread_cond_signal(v18);
    else
      pthread_cond_broadcast(v18);
    return sub_26CE70(v4, v3);
  }
  else
  {
    v4 = 0;
    pthread_mutex_unlock(v5);
  }
  return v4;
}
