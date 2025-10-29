size_t __fastcall std::env::home_dir(size_t *a1)
{
  size_t v1; // r6
  int v3; // r7
  size_t result; // r0
  signed int v5; // r5
  int v6; // r8
  __uid_t v7; // r0
  char *pw_dir; // r9
  int v9; // r0
  size_t v10; // [sp+8h] [bp-38h] BYREF
  int v11; // [sp+Ch] [bp-34h]
  size_t v12; // [sp+10h] [bp-30h]
  signed int v13; // [sp+14h] [bp-2Ch]
  int v14; // [sp+18h] [bp-28h]
  int v15; // [sp+1Ch] [bp-24h]
  struct passwd resultbuf; // [sp+20h] [bp-20h] BYREF
  struct passwd *v17; // [sp+3Ch] [bp-4h] BYREF

  std::env::_var_os(&v10, "HOMEargs && ", 4u);
  v3 = v11;
  if ( v11 )
  {
    v1 = v10;
    result = v12;
LABEL_21:
    *a1 = v1;
    a1[1] = v3;
    a1[2] = result;
    return result;
  }
  v5 = sysconf(70);
  if ( v5 < 0 )
    v5 = 512;
  if ( v5 )
  {
    v6 = _rust_alloc(v5);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v6 = 1;
  }
  v3 = 0;
  v14 = v6;
  v15 = 0;
  v13 = v5;
  memset(&resultbuf, 0, sizeof(resultbuf));
  v17 = 0;
  v7 = getuid();
  if ( !getpwuid_r(v7, &resultbuf, (char *)v6, v5, &v17) && v17 )
  {
    pw_dir = resultbuf.pw_dir;
    v9 = core::ffi::c_str::CStr::from_ptr::strlen_rt(resultbuf.pw_dir);
    v1 = v9;
    if ( v9 )
    {
      if ( v9 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v3 = _rust_alloc(v9);
      if ( !v3 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v3 = 1;
    }
    memcpy((void *)v3, pw_dir, v1);
  }
  if ( v5 )
    _rust_dealloc((void *)v6);
  result = v1;
  if ( v3 )
    goto LABEL_21;
  a1[1] = 0;
  return 0;
}
