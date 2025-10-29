int __fastcall update_and_automatic_set_freq(_BYTE *a1)
{
  int v2; // r6
  int all_created_runtime; // r5
  int v4; // r3
  _DWORD *v5; // r5
  int v6; // r8
  int v7; // t1
  float v8; // s16
  int v9; // r0
  int v10; // r3
  int v11; // r4
  int v12; // r0
  int v13; // r10
  int v14; // r3
  bool v15; // cc
  float v16; // s14
  int v18; // [sp+4h] [bp-4h] BYREF

  v2 = 0;
  v18 = 0;
  all_created_runtime = get_all_created_runtime(&v18);
  if ( get_temp(1) == -64 )
  {
    *a1 = 0;
  }
  else
  {
    v4 = v18;
    *a1 = 1;
    if ( v4 > 0 )
    {
      v5 = (_DWORD *)(all_created_runtime - 4);
      v6 = 0;
      do
      {
        v7 = v5[1];
        ++v5;
        v8 = 0.0;
        (*(void (**)(void))(v7 + 196))();
        v9 = *v5;
        v10 = *(_DWORD *)(*v5 + 332);
        if ( v10 > 0 )
        {
          v11 = 0;
          do
          {
            v12 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(v9 + 200))(v9, 0, (unsigned __int8)v11);
            v13 = 44 * v11++;
            if ( v12 )
              v2 = v12;
            pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(*v5 + 528) + v13 + 20));
            v14 = *(_DWORD *)(*v5 + 528) + v13;
            v8 = v8 + *(float *)(v14 + 12);
            pthread_mutex_unlock((pthread_mutex_t *)(v14 + 20));
            v9 = *v5;
            v10 = *(_DWORD *)(*v5 + 332);
          }
          while ( v10 > v11 );
        }
        v15 = v18 <= ++v6;
        v16 = v8 / (float)v10;
        *(float *)(v9 + 964) = v16;
        *(_DWORD *)(v9 + 464) = (int)v16;
      }
      while ( !v15 );
    }
  }
  return v2;
}
