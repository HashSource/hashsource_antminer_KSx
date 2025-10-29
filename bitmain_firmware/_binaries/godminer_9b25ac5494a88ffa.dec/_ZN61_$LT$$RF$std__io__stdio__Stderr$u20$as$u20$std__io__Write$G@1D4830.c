int __fastcall <&std::io::stdio::Stderr as std::io::Write>::write_fmt(_DWORD *a1, unsigned int ***a2, _DWORD *a3)
{
  unsigned int *v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r0
  bool v8; // cf
  int v9; // r0
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r7
  int v15; // r12
  int v16; // r0
  void **v17; // r5
  void *v18; // r1
  unsigned int *v19; // r1
  int result; // r0
  unsigned int v21; // r2
  unsigned int *v22; // [sp+4h] [bp-2Ch] BYREF
  int v23; // [sp+8h] [bp-28h] BYREF
  void *ptr; // [sp+Ch] [bp-24h]
  unsigned int **v25; // [sp+10h] [bp-20h]
  _DWORD v26[6]; // [sp+18h] [bp-18h] BYREF

  v5 = **a2;
  v6 = v5[1];
  if ( v6 == _tls_get_addr(&dword_2E443C) )
  {
    v7 = v5[2];
    v8 = __CFADD__(v7, 1);
    v9 = v7 + 1;
    if ( v8 )
      core::option::expect_failed();
  }
  else
  {
    while ( !__ldrex(v5) )
    {
      if ( !__strex(1u, v5) )
      {
        __dmb(0xBu);
        goto LABEL_8;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v5);
LABEL_8:
    v5[1] = _tls_get_addr(&dword_2E443C);
    v9 = 1;
  }
  v5[2] = v9;
  LOBYTE(v23) = 4;
  v25 = &v22;
  v22 = v5;
  v11 = a3[1];
  v12 = a3[2];
  v13 = a3[3];
  v14 = a3[4];
  v15 = a3[5];
  v26[0] = *a3;
  v26[1] = v11;
  v26[2] = v12;
  v26[3] = v13;
  v26[4] = v14;
  v26[5] = v15;
  if ( core::fmt::write(&v23, &off_2DDC70, v26) )
  {
    if ( (unsigned __int8)v23 == 4 )
    {
      *a1 = 2;
      a1[1] = &off_2DDC4C;
    }
    else
    {
      v18 = ptr;
      *a1 = v23;
      a1[1] = v18;
    }
  }
  else
  {
    v16 = (unsigned __int8)v23;
    *(_BYTE *)a1 = 4;
    if ( v16 == 3 )
    {
      v17 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v17[1] + 1) )
        _rust_dealloc(*v17);
      _rust_dealloc(ptr);
    }
  }
  v19 = v22;
  result = v22[2] - 1;
  v22[2] = result;
  if ( !result )
  {
    result = 0;
    v19[1] = 0;
    __dmb(0xBu);
    do
      v21 = __ldrex(v19);
    while ( __strex(0, v19) );
    if ( v21 == 2 )
      return syscall(240, v19, 129, 1);
  }
  return result;
}
