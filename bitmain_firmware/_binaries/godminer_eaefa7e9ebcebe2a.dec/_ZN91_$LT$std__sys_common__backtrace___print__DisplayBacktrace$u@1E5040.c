int __fastcall <std::sys_common::backtrace::_print::DisplayBacktrace as core::fmt::Display>::fmt(char *a1, int a2)
{
  int v2; // r7
  int *v4; // r1
  int v5; // r0
  void *v6; // r5
  char **v7; // r6
  bool v8; // zf
  bool v10; // zf
  char v11; // [sp+3h] [bp-4Dh] BYREF
  int *v12; // [sp+4h] [bp-4Ch] BYREF
  void *ptr; // [sp+8h] [bp-48h]
  int v14; // [sp+Ch] [bp-44h]
  char v15; // [sp+10h] [bp-40h]
  _DWORD v16[4]; // [sp+14h] [bp-3Ch] BYREF
  char v17; // [sp+24h] [bp-2Ch]
  int v18; // [sp+28h] [bp-28h] BYREF
  char v19; // [sp+2Eh] [bp-22h] BYREF
  bool v20; // [sp+2Fh] [bp-21h] BYREF
  char *v21; // [sp+30h] [bp-20h] BYREF
  int *v22; // [sp+34h] [bp-1Ch]
  char **v23; // [sp+38h] [bp-18h]
  int v24; // [sp+3Ch] [bp-14h]
  const char *v25; // [sp+40h] [bp-10h]
  int v26; // [sp+44h] [bp-Ch]
  _DWORD v27[2]; // [sp+48h] [bp-8h] BYREF

  v2 = (unsigned __int8)*a1;
  v11 = *a1;
  std::env::current_dir(&v21);
  if ( v21 )
  {
    v5 = (unsigned __int8)v22;
    v6 = 0;
    if ( (unsigned __int8)v22 == 3 )
    {
      v7 = v23;
      (*(void (__fastcall **)(char *))v23[1])(*v23);
      if ( *((_DWORD *)v7[1] + 1) )
        _rust_dealloc(*v7);
      _rust_dealloc(v7);
    }
  }
  else
  {
    v4 = v22;
    v6 = v23;
    v5 = v24;
  }
  v14 = v5;
  v24 = 1;
  v12 = v4;
  ptr = v6;
  v15 = v2;
  v23 = &off_2DF160;
  v26 = 0;
  v25 = aRustc9eb3afe9e;
  v21 = 0;
  if ( !core::fmt::Formatter::write_fmt(a2, &v21) )
  {
    v16[1] = &off_2DF168;
    v25 = (const char *)v16;
    v24 = (int)&v19;
    v23 = (char **)&v20;
    v22 = &v18;
    v21 = &v11;
    v17 = v2;
    v16[2] = 0;
    v16[3] = a2;
    v16[0] = &v12;
    v18 = 0;
    v19 = 0;
    v20 = v2 != 0;
    v27[1] = &off_2DF464;
    v27[0] = &v21;
    Unwind_Backtrace(sub_1F8078, v27);
    if ( !v19 )
    {
      if ( v11
        || (v24 = 1,
            v26 = 0,
            v21 = 0,
            v23 = &off_2DF17C,
            v25 = aRustc9eb3afe9e,
            !core::fmt::Formatter::write_fmt(a2, &v21)) )
      {
        v10 = ptr == 0;
        if ( ptr )
          v10 = v12 == 0;
        if ( !v10 )
          _rust_dealloc(ptr);
        return 0;
      }
    }
    v6 = ptr;
  }
  v8 = v6 == 0;
  if ( v6 )
    v8 = v12 == 0;
  if ( !v8 )
    _rust_dealloc(v6);
  return 1;
}
