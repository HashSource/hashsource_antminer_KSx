int __fastcall update_and_automatic_set_freq(_BYTE *a1)
{
  int v2; // r6
  int all_created_runtime; // r5
  int temp; // r0
  int v5; // r3
  _DWORD *v6; // r5
  int v7; // r10
  int v8; // r8
  int v9; // r0
  int v10; // t1
  int v11; // r3
  float v12; // s16
  int v13; // r4
  int v14; // r0
  int v15; // r11
  int v16; // r3
  bool v17; // cc
  float v18; // s14
  int v20; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  v20 = 0;
  all_created_runtime = get_all_created_runtime(&v20);
  temp = get_temp(1);
  if ( temp == -64 )
  {
    *a1 = 0;
  }
  else
  {
    v5 = v20;
    *a1 = 1;
    if ( v5 > 0 )
    {
      v6 = (_DWORD *)(all_created_runtime - 4);
      v7 = temp;
      v8 = 0;
      do
      {
        v10 = v6[1];
        ++v6;
        v9 = v10;
        if ( byte_2E7DF8 )
        {
          (*(void (__fastcall **)(int, int))(v9 + 196))(v9, v7);
          v9 = *v6;
        }
        v11 = *(_DWORD *)(v9 + 332);
        v12 = 0.0;
        if ( v11 > 0 )
        {
          v13 = 0;
          do
          {
            v14 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(v9 + 200))(v9, 0, (unsigned __int8)v13);
            v15 = 44 * v13++;
            if ( v14 )
              v2 = v14;
            pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(*v6 + 528) + v15 + 20));
            v16 = *(_DWORD *)(*v6 + 528) + v15;
            v12 = v12 + *(float *)(v16 + 12);
            pthread_mutex_unlock((pthread_mutex_t *)(v16 + 20));
            v9 = *v6;
            v11 = *(_DWORD *)(*v6 + 332);
          }
          while ( v11 > v13 );
        }
        v17 = v20 <= ++v8;
        v18 = v12 / (float)v11;
        *(float *)(v9 + 964) = v18;
        *(_DWORD *)(v9 + 464) = (int)v18;
      }
      while ( !v17 );
    }
  }
  return v2;
}
