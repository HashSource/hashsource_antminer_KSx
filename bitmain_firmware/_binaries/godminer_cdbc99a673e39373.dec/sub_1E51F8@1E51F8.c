int sub_1E51F8()
{
  pthread_key_t v1; // r4
  unsigned int v2; // r5
  _DWORD v3[2]; // [sp+4h] [bp-44h] BYREF
  _DWORD v4[6]; // [sp+Ch] [bp-3Ch] BYREF
  pthread_key_t key[2]; // [sp+24h] [bp-24h] BYREF
  _DWORD v6[2]; // [sp+2Ch] [bp-1Ch] BYREF
  char **v7; // [sp+34h] [bp-14h]
  int v8; // [sp+38h] [bp-10h]
  const char *v9; // [sp+3Ch] [bp-Ch]
  int v10; // [sp+40h] [bp-8h]
  _BYTE v11[4]; // [sp+44h] [bp-4h] BYREF

  if ( dword_2D3854 )
    return dword_2D3854;
  key[0] = 0;
  v4[0] = pthread_key_create(key, (void (*)(void *))off_2D3858);
  if ( v4[0] )
    goto LABEL_13;
  v1 = key[0];
  if ( key[0] )
    goto LABEL_7;
  key[0] = 0;
  v4[0] = pthread_key_create(key, (void (*)(void *))off_2D3858);
  if ( v4[0] )
  {
LABEL_13:
    v7 = 0;
    sub_77E94(0, (int)v4, (int)"", v6, (int)&off_2CBBD0);
  }
  v1 = key[0];
  pthread_key_delete(0);
  if ( !v1 )
  {
    v4[3] = 2;
    v4[2] = &off_2CA6F8;
    v4[4] = key;
    v4[5] = 1;
    v4[0] = 0;
    v8 = 1;
    v9 = aRustc9eb3afe9e;
    v7 = &off_2CBDF8;
    key[1] = (pthread_key_t)<core::fmt::Arguments as core::fmt::Display>::fmt;
    key[0] = (pthread_key_t)v6;
    v10 = 0;
    v6[0] = 0;
    sub_1C56B0(v3, (int)v11, v4);
    sub_19E08C((int)v3);
    std::sys::unix::abort_internal();
  }
LABEL_7:
  v2 = __ldrex((unsigned int *)&dword_2D3854);
  if ( v2 )
  {
LABEL_11:
    __clrex();
    __dmb(0xBu);
    pthread_key_delete(v1);
    return v2;
  }
  else
  {
    __dmb(0xBu);
    while ( __strex(v1, (unsigned int *)&dword_2D3854) )
    {
      v2 = __ldrex((unsigned int *)&dword_2D3854);
      if ( v2 )
        goto LABEL_11;
    }
    __dmb(0xBu);
    return v1;
  }
}
