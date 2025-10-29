void __fastcall sub_7B228(_DWORD *a1)
{
  void *v2; // r3
  char *v3; // r5
  unsigned int v4; // r2
  unsigned int v5; // r1
  unsigned int v6; // r1
  void *v7; // r0
  bool v8; // zf
  char *name; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h]
  void *v11; // [sp+8h] [bp-10h]
  void *ptr; // [sp+10h] [bp-8h]
  int v13; // [sp+14h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&name);
  v2 = v11;
  if ( v11 )
  {
    *a1 = dword_2DF158;
    a1[1] = &off_2DF14C;
LABEL_17:
    if ( v10 )
      _rust_dealloc(v2);
    return;
  }
  v3 = name;
  v13 = v10;
  ptr = name;
  if ( (unsigned int)dword_307C94 > 0x3FFFFFFF || (dword_307C94 & 0x3FFFFFFE) == 0x3FFFFFFE )
    goto LABEL_9;
  v4 = __ldrex((unsigned int *)&dword_307C94);
  if ( v4 != dword_307C94 )
  {
    __clrex();
    goto LABEL_9;
  }
  if ( __strex(dword_307C94 + 1, (unsigned int *)&dword_307C94) )
  {
LABEL_9:
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended(&dword_307C94);
    goto LABEL_10;
  }
  __dmb(0xBu);
LABEL_10:
  a1[1] = getenv(v3);
  *(_BYTE *)a1 = 4;
  __dmb(0xBu);
  do
  {
    v5 = __ldrex((unsigned int *)&dword_307C94);
    v6 = v5 - 1;
  }
  while ( __strex(v6, (unsigned int *)&dword_307C94) );
  if ( (v6 & 0xBFFFFFFF) == 0x80000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers();
  v7 = ptr;
  v8 = v13 == 0;
  *(_BYTE *)ptr = 0;
  if ( !v8 )
    _rust_dealloc(v7);
  v2 = v11;
  if ( v11 )
    goto LABEL_17;
}
