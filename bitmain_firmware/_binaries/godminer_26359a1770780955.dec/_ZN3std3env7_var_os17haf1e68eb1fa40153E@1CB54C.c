void *__fastcall std::env::_var_os(size_t *a1, const void *a2, size_t n)
{
  const char *v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1
  char *v9; // r5
  int v10; // r0
  int v11; // r1
  size_t v12; // r6
  int v13; // r7
  char *v14; // r5
  void *result; // r0
  int v16; // [sp+0h] [bp-198h] BYREF
  char *s; // [sp+4h] [bp-194h]
  _BYTE dest[388]; // [sp+8h] [bp-190h] BYREF
  _DWORD v19[3]; // [sp+18Ch] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7B228(&v16);
    goto LABEL_13;
  }
  memcpy(dest, a2, n);
  dest[n] = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(v19, dest, n + 1);
  if ( v19[0] )
  {
    v16 = dword_2DF158;
    s = (char *)&off_2DF14C;
    goto LABEL_13;
  }
  v5 = (const char *)v19[1];
  if ( (unsigned int)dword_307C94 > 0x3FFFFFFF || (dword_307C94 & 0x3FFFFFFE) == 0x3FFFFFFE )
    goto LABEL_28;
  v6 = __ldrex((unsigned int *)&dword_307C94);
  if ( v6 != dword_307C94 )
  {
    __clrex();
    goto LABEL_28;
  }
  if ( __strex(dword_307C94 + 1, (unsigned int *)&dword_307C94) )
  {
LABEL_28:
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_307C94);
    goto LABEL_9;
  }
  __dmb(0xBu);
LABEL_9:
  s = getenv(v5);
  LOBYTE(v16) = 4;
  __dmb(0xBu);
  do
  {
    v7 = __ldrex((unsigned int *)&dword_307C94);
    v8 = v7 - 1;
  }
  while ( __strex(v8, (unsigned int *)&dword_307C94) );
  if ( (v8 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_307C94, v8);
LABEL_13:
  if ( (unsigned __int8)v16 != 4 )
  {
    if ( (unsigned __int8)v16 == 3 )
    {
      v14 = s;
      (**((void (__fastcall ***)(_DWORD))s + 1))(*(_DWORD *)s);
      if ( *(_DWORD *)(*((_DWORD *)v14 + 1) + 4) )
        _rust_dealloc(*(void **)v14);
      _rust_dealloc(v14);
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
  v12 = v10;
  if ( v10 )
  {
    if ( v10 <= -1 )
      alloc::raw_vec::capacity_overflow(v10, v11);
    v13 = _rust_alloc(v10);
    if ( !v13 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v13 = 1;
  }
  result = memcpy((void *)v13, v9, v12);
  *a1 = v12;
  a1[1] = v13;
  a1[2] = v12;
  return result;
}
