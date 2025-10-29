_DWORD *__fastcall _pipe_push(_DWORD *result, char *a2, size_t a3, _BYTE *a4)
{
  size_t v4; // r11
  int *v5; // r9
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r8
  unsigned int v11; // r7
  int v12; // r6
  int v13; // r3
  int v14; // r1
  _BOOL4 v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r10
  unsigned int v18; // r6
  void *v19; // r0
  size_t v20; // r5
  size_t v21; // r7
  char *v22; // r1
  pthread_cond_t *v23; // r0
  unsigned int v24; // r1
  unsigned int v25; // r2
  _BOOL4 v26; // r2
  int v27; // r0
  int v28; // r2
  unsigned int v29; // r0
  int v30; // r3
  unsigned int v31; // r2
  int v32; // r2
  int v33; // r3
  size_t v34; // r6
  void *v35; // r0
  pthread_mutex_t *mutex; // [sp+4h] [bp-40h]
  int v37; // [sp+8h] [bp-3Ch]
  int v40; // [sp+14h] [bp-30h]
  pthread_mutex_t *v41; // [sp+18h] [bp-2Ch]
  pthread_cond_t *cond; // [sp+1Ch] [bp-28h]
  unsigned int v43; // [sp+20h] [bp-24h]
  int v44; // [sp+20h] [bp-24h]
  int v45; // [sp+24h] [bp-20h]
  int v46[6]; // [sp+2Ch] [bp-18h] BYREF

  v4 = a3;
  v40 = *result;
  if ( a3 )
  {
    v5 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    cond = (pthread_cond_t *)(result + 34);
    v41 = (pthread_mutex_t *)(result + 9);
    while ( 1 )
    {
      pthread_mutex_lock(mutex);
      v8 = v5[5];
      v9 = v5[6];
      v10 = v5[4];
      v11 = *v5;
      if ( v8 < v9 )
        v7 = v9 - v8;
      v37 = v5[3];
      if ( v8 >= v9 )
      {
        v6 = v10 - v8;
        v7 = v5[3];
      }
      v12 = v5[2];
      v13 = *v5;
      if ( v8 >= v9 )
        v7 = v9 - v7 + v6;
      v14 = v5[8];
      v15 = v7 - v11 == v12;
      if ( !v14 )
        v15 = 0;
      if ( v15 )
      {
        do
        {
          pthread_cond_wait(cond, mutex);
          v8 = v5[5];
          v9 = v5[6];
          v10 = v5[4];
          v25 = v9 - v8;
          v11 = *v5;
          if ( v8 >= v9 )
          {
            v25 = v9 - v5[3];
            v24 = v10 - v8;
          }
          v12 = v5[2];
          v13 = *v5;
          if ( v8 >= v9 )
            v25 += v24;
          v14 = v5[8];
          v26 = v25 - v11 == v12;
          if ( !v14 )
            v26 = 0;
        }
        while ( v26 );
        v37 = v5[3];
      }
      if ( !v14 )
        break;
      if ( v8 < v9 )
        v16 = v9 - v8;
      else
        v16 = v10 - v8;
      if ( v8 >= v9 )
        v16 += v9 - v37;
      v17 = v10 - v37 - v11;
      if ( v17 < v4 - v11 + v16 )
      {
        v27 = pthread_mutex_lock(v41);
        v8 = v5[5];
        v9 = v5[6];
        v10 = v5[4];
        if ( v8 < v9 )
          v27 = v9 - v8;
        v37 = v5[3];
        if ( v8 >= v9 )
        {
          v27 = v10 - v8;
          v28 = v5[3];
        }
        v45 = *v5;
        if ( v8 >= v9 )
          v27 += v9 - v28;
        v43 = v4 - *v5 + v27;
        v29 = sub_25ABA8(v43, v11);
        v30 = v45;
        if ( v17 < v43 )
        {
          v31 = v29 + 1;
          if ( (int)(v29 + 1) >= 0 )
          {
            v32 = 5;
            v33 = 1;
            do
            {
              --v32;
              v29 |= v29 >> v33;
              v33 *= 2;
            }
            while ( v32 );
            v31 = v29 + 1;
          }
          sub_195514(v46, v5, v31 * v11, a4);
          v10 = v46[1];
          v8 = v46[2];
          v37 = v46[0];
          v9 = v46[3];
          v30 = v46[4];
        }
        v44 = v30;
        pthread_mutex_unlock(v41);
        v13 = v44;
      }
      if ( !*a4 )
        break;
      if ( v8 >= v9 )
      {
        v22 = a2;
        v34 = v12 - (v9 - v37 + v10 - v8 - v13);
        if ( v34 >= v4 )
          v21 = v4;
        else
          v21 = v34;
        v18 = v21;
      }
      else
      {
        v18 = v12 - (v9 - v8 - v13);
        v19 = (void *)v9;
        if ( v18 >= v4 )
          v18 = v4;
        if ( v10 - v9 >= v18 )
          v20 = v18;
        else
          v20 = v10 - v9;
        v9 += v20;
        memcpy(v19, a2, v20);
        v21 = v18 - v20;
        v22 = &a2[v20];
      }
      if ( v21 )
      {
        if ( v10 <= v9 )
          v9 = v37 + v9 - v10;
        v35 = (void *)v9;
        v9 += v21;
        memcpy(v35, v22, v21);
      }
      if ( v10 <= v9 )
        v9 = v37 + v9 - v10;
      v5[6] = v9;
      pthread_mutex_unlock(mutex);
      v23 = (pthread_cond_t *)(v5 + 22);
      if ( v18 == v40 )
        result = (_DWORD *)pthread_cond_signal(v23);
      else
        result = (_DWORD *)pthread_cond_broadcast(v23);
      v4 -= v18;
      if ( !v4 )
        return result;
      a2 += v18;
      v40 = *v5;
    }
    return (_DWORD *)pthread_mutex_unlock(mutex);
  }
  return result;
}
