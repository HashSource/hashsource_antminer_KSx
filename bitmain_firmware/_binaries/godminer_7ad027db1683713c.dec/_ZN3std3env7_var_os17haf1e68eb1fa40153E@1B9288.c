void *__fastcall std::env::_var_os(size_t *a1, _BYTE *a2, size_t n)
{
  const char *v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1
  char *v9; // r5
  int v10; // r0
  size_t v11; // r6
  int v12; // r7
  char *v13; // r5
  void *result; // r0
  int v15; // [sp+0h] [bp-198h] BYREF
  char *s; // [sp+4h] [bp-194h]
  _BYTE dest[388]; // [sp+8h] [bp-190h] BYREF
  _DWORD v18[3]; // [sp+18Ch] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_79808(&v15, a2, n);
    goto LABEL_13;
  }
  memcpy(dest, a2, n);
  dest[n] = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(v18, dest, n + 1);
  if ( v18[0] )
  {
    v15 = dword_2CA158;
    s = (char *)&off_2CA14C;
    goto LABEL_13;
  }
  v5 = (const char *)v18[1];
  if ( (unsigned int)dword_2E966C > 0x3FFFFFFF || (dword_2E966C & 0x3FFFFFFE) == 0x3FFFFFFE )
    goto LABEL_28;
  v6 = __ldrex((unsigned int *)&dword_2E966C);
  if ( v6 != dword_2E966C )
  {
    __clrex();
    goto LABEL_28;
  }
  if ( __strex(dword_2E966C + 1, (unsigned int *)&dword_2E966C) )
  {
LABEL_28:
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2E966C);
    goto LABEL_9;
  }
  __dmb(0xBu);
LABEL_9:
  s = getenv(v5);
  LOBYTE(v15) = 4;
  __dmb(0xBu);
  do
  {
    v7 = __ldrex((unsigned int *)&dword_2E966C);
    v8 = v7 - 1;
  }
  while ( __strex(v8, (unsigned int *)&dword_2E966C) );
  if ( (v8 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v8);
LABEL_13:
  if ( (unsigned __int8)v15 != 4 )
  {
    if ( (unsigned __int8)v15 == 3 )
    {
      v13 = s;
      (**((void (__fastcall ***)(_DWORD))s + 1))(*(_DWORD *)s);
      if ( *(_DWORD *)(*((_DWORD *)v13 + 1) + 4) )
        _rust_dealloc(*(void **)v13);
      _rust_dealloc(v13);
    }
    goto LABEL_23;
  }
  v9 = s;
  if ( !s )
  {
LABEL_23:
    a1[1] = 0;
    return 0;
  }
  v10 = core::ffi::c_str::CStr::from_ptr::strlen_rt(s);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v12 = _rust_alloc(v10);
    if ( !v12 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v12 = 1;
  }
  result = memcpy((void *)v12, v9, v11);
  *a1 = v11;
  a1[1] = v12;
  a1[2] = v11;
  return result;
}
