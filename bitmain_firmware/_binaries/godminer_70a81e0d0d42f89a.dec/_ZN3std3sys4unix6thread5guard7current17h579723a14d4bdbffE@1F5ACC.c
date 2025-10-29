int __fastcall std::sys::unix::thread::guard::current(_DWORD *a1)
{
  pthread_t v2; // r0
  int result; // r0
  char *v4; // r0
  size_t v5; // r1
  char **v6; // r0
  pthread_attr_t s; // [sp+8h] [bp-50h] BYREF
  size_t guardsize; // [sp+30h] [bp-28h] BYREF
  void *stackaddr; // [sp+34h] [bp-24h] BYREF
  size_t stacksize; // [sp+38h] [bp-20h] BYREF
  int v11; // [sp+3Ch] [bp-1Ch] BYREF
  _DWORD v12[2]; // [sp+40h] [bp-18h] BYREF
  char **v13; // [sp+48h] [bp-10h]
  int v14; // [sp+4Ch] [bp-Ch]
  const char *v15; // [sp+50h] [bp-8h]
  int v16; // [sp+54h] [bp-4h]

  *a1 = 0;
  memset(&s, 0, sizeof(s));
  v2 = pthread_self();
  result = pthread_getattr_np(v2, &s);
  if ( !result )
  {
    guardsize = 0;
    v11 = pthread_attr_getguardsize(&s, &guardsize);
    if ( v11 )
    {
      v6 = &off_2E1B88;
    }
    else
    {
      if ( !guardsize )
      {
        v13 = &off_2E1BB8;
        v14 = 1;
        v16 = 0;
        v12[0] = 0;
        v15 = aRustc9eb3afe9e;
        core::panicking::panic_fmt((int)v12, (int)&off_2E1BC0);
      }
      stackaddr = 0;
      stacksize = 0;
      v11 = pthread_attr_getstack(&s, &stackaddr, &stacksize);
      if ( v11 )
      {
        v13 = 0;
        v6 = &off_2E1B98;
        goto LABEL_12;
      }
      v4 = (char *)stackaddr;
      v5 = guardsize;
      *a1 = 1;
      a1[1] = &v4[-v5];
      a1[2] = &v4[v5];
      result = pthread_attr_destroy(&s);
      v11 = result;
      if ( !result )
        return result;
      v6 = &off_2E1BA8;
    }
    v13 = 0;
LABEL_12:
    sub_79A64(0, (int)&v11, (int)"", v12, (int)v6);
  }
  return result;
}
