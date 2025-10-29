int __fastcall std::sys::unix::thread::Thread::new(_DWORD *a1, size_t a2, int a3, int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  size_t v10; // r7
  int (__fastcall *v11)(pthread_attr_t *); // r1
  int v12; // r0
  int v13; // r0
  int v14; // r6
  char **v16; // r0
  pthread_t newthread; // [sp+Ch] [bp-4Ch] BYREF
  pthread_attr_t s; // [sp+10h] [bp-48h] BYREF
  int v19; // [sp+38h] [bp-20h] BYREF
  int v20; // [sp+3Ch] [bp-1Ch] BYREF
  _DWORD v21[2]; // [sp+40h] [bp-18h] BYREF
  int v22; // [sp+48h] [bp-10h]

  v8 = (_DWORD *)_rust_alloc(8u);
  if ( !v8 )
    alloc::alloc::handle_alloc_error();
  *v8 = a3;
  v8[1] = a4;
  v9 = v8;
  newthread = 0;
  memset(&s, 0, sizeof(s));
  v20 = pthread_attr_init(&s);
  if ( v20 )
  {
    v22 = 0;
    v16 = &off_2DFAC8;
    goto LABEL_26;
  }
  v10 = 0x4000;
  v11 = (int (__fastcall *)(pthread_attr_t *))off_2E7F60;
  if ( off_2E7F60 )
  {
    if ( off_2E7F60 != (_UNKNOWN *)1 )
    {
      __dmb(0xBu);
      if ( !v11 )
        goto LABEL_7;
      goto LABEL_6;
    }
    v11 = (int (__fastcall *)(pthread_attr_t *))sub_7BB18();
    if ( v11 )
LABEL_6:
      v10 = v11(&s);
  }
LABEL_7:
  if ( a2 > v10 )
    v10 = a2;
  v12 = pthread_attr_setstacksize(&s, v10);
  if ( v12 )
  {
    v19 = v12;
    if ( v12 != 22 )
    {
      v22 = 0;
      sub_79864(0, (int)&v19, (int)&unk_2A5474, v21, (int)&off_2DFAD8);
    }
    v13 = sysconf(30);
    v20 = pthread_attr_setstacksize(&s, (v10 + v13 - 1) & -v13);
    if ( v20 )
    {
      v16 = &off_2DFAE8;
      goto LABEL_25;
    }
  }
  v14 = pthread_create(&newthread, &s, (void *(*)(void *))sub_1F32EC, v9);
  v20 = pthread_attr_destroy(&s);
  if ( v20 )
  {
    v16 = &off_2DFAF8;
LABEL_25:
    v22 = 0;
LABEL_26:
    sub_79864(0, (int)&v20, (int)"", v21, (int)v16);
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(_DWORD))v9[1])(*v9);
    if ( *(_DWORD *)(v9[1] + 4) )
      _rust_dealloc((void *)*v9);
    _rust_dealloc(v9);
    *a1 = 0;
    a1[1] = v14;
    return 0;
  }
  else
  {
    a1[1] = newthread;
    *(_BYTE *)a1 = 4;
    return 4;
  }
}
