void std::thread::park()
{
  int v0; // r0
  unsigned int *v1; // r4
  unsigned int *v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r0
  unsigned int v5; // r0

  v0 = sub_1E6B44();
  v1 = (unsigned int *)v0;
  if ( !v0 )
    core::option::expect_failed();
  v2 = (unsigned int *)(v0 + 24);
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 - 1, v2) );
  __dmb(0xBu);
  if ( v3 != 1 )
  {
LABEL_5:
    while ( *v2 == -1 && syscall(240, v1 + 6, 137, -1, 0, 0, -1) <= -1 && *_errno_location() == 4 )
      ;
    do
    {
      v4 = __ldrex(v2);
      if ( v4 != 1 )
      {
        __clrex();
        __dmb(0xBu);
        goto LABEL_5;
      }
    }
    while ( __strex(0, v2) );
    __dmb(0xBu);
  }
  __dmb(0xBu);
  do
    v5 = __ldrex(v1);
  while ( __strex(v5 - 1, v1) );
  if ( v5 == 1 )
  {
    __dmb(0xBu);
    sub_1B69B8((int)v1);
  }
}
