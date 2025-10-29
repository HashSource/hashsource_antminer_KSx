void __fastcall sub_79808(_DWORD *a1, _BYTE *a2, size_t a3)
{
  void *v4; // r3
  char *v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1
  void *v9; // r0
  bool v10; // zf
  char *name; // [sp+0h] [bp-18h] BYREF
  int v12; // [sp+4h] [bp-14h]
  void *v13; // [sp+8h] [bp-10h]
  void *ptr; // [sp+10h] [bp-8h]
  int v15; // [sp+14h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&name, a2, a3);
  v4 = v13;
  if ( v13 )
  {
    *a1 = dword_2CA158;
    a1[1] = &off_2CA14C;
LABEL_17:
    if ( v12 )
      _rust_dealloc(v4);
    return;
  }
  v5 = name;
  v15 = v12;
  ptr = name;
  if ( (unsigned int)dword_2E966C > 0x3FFFFFFF || (dword_2E966C & 0x3FFFFFFE) == 0x3FFFFFFE )
    goto LABEL_9;
  v6 = __ldrex((unsigned int *)&dword_2E966C);
  if ( v6 != dword_2E966C )
  {
    __clrex();
    goto LABEL_9;
  }
  if ( __strex(dword_2E966C + 1, (unsigned int *)&dword_2E966C) )
  {
LABEL_9:
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2E966C);
    goto LABEL_10;
  }
  __dmb(0xBu);
LABEL_10:
  a1[1] = getenv(v5);
  *(_BYTE *)a1 = 4;
  __dmb(0xBu);
  do
  {
    v7 = __ldrex((unsigned int *)&dword_2E966C);
    v8 = v7 - 1;
  }
  while ( __strex(v8, (unsigned int *)&dword_2E966C) );
  if ( (v8 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v8);
  v9 = ptr;
  v10 = v15 == 0;
  *(_BYTE *)ptr = 0;
  if ( !v10 )
    _rust_dealloc(v9);
  v4 = v13;
  if ( v13 )
    goto LABEL_17;
}
