void __fastcall std::thread::park_timeout(unsigned int a1, int a2, int a3)
{
  unsigned int *v6; // r0
  unsigned int *v7; // r7
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int *v10; // [sp+4h] [bp-4h]

  v6 = sub_1D3D70();
  if ( !v6 )
    core::option::expect_failed((int)aUseOfStdThread, 94, (int)&off_2C9788);
  v7 = v6 + 6;
  v10 = v6;
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 - 1, v7) );
  __dmb(0xBu);
  if ( v8 != 1 )
  {
    std::sys::unix::futex::futex_wait(v7, -1, a1, a2, a3);
    do
      __ldrex(v7);
    while ( __strex(0, v7) );
    __dmb(0xBu);
  }
  __dmb(0xBu);
  do
    v9 = __ldrex(v10);
  while ( __strex(v9 - 1, v10) );
  if ( v9 == 1 )
  {
    __dmb(0xBu);
    sub_1A3BE4((int)v10);
  }
}
