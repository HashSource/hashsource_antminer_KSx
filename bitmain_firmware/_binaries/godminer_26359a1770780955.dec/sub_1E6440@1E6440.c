void __fastcall sub_1E6440(int *a1)
{
  int *v1; // r4
  int v2; // r0
  int v3; // r6
  _DWORD *v4; // r8
  _DWORD *v5; // r7
  int v6; // r5
  pthread_key_t v7; // r0
  int *v8; // r5
  pthread_key_t v9; // r0

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1[2];
      v3 = *v1;
      v4 = (_DWORD *)v1[1];
      if ( v2 )
      {
        v5 = v4 + 1;
        v6 = 8 * v2;
        do
        {
          if ( !*v5 )
            break;
          ((void (__fastcall *)(_DWORD))*v5)(*(v5 - 1));
          v5 += 2;
          v6 -= 8;
        }
        while ( v6 );
      }
      if ( v3 )
        _rust_dealloc(v4);
      v7 = sub_1F634C();
      v8 = (int *)pthread_getspecific(v7);
      v9 = sub_1F634C();
      pthread_setspecific(v9, 0);
      _rust_dealloc(v1);
      v1 = v8;
    }
    while ( v8 );
  }
}
