// Alternative name is '_ZN3std2io5stdio6Stderr4lock17h595e832a356506d9E'
unsigned int *__fastcall std::io::stdio::Stdout::lock(unsigned int **a1)
{
  unsigned int *v1; // r4
  unsigned int v2; // r5
  unsigned int v3; // r0
  bool v4; // cf
  unsigned int v5; // r0

  v1 = *a1;
  v2 = (*a1)[1];
  if ( v2 == _tls_get_addr(&dword_2F0428) )
  {
    v3 = v1[2];
    v4 = __CFADD__(v3, 1);
    v5 = v3 + 1;
    if ( v4 )
      core::option::expect_failed();
    v1[2] = v5;
    return v1;
  }
  else
  {
    while ( !__ldrex(v1) )
    {
      if ( !__strex(1u, v1) )
      {
        __dmb(0xBu);
        goto LABEL_7;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v1);
LABEL_7:
    v1[1] = _tls_get_addr(&dword_2F0428);
    v1[2] = 1;
    return v1;
  }
}
