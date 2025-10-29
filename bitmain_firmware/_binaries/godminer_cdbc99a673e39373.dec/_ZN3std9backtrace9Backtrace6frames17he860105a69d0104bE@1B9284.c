__int64 __fastcall std::backtrace::Backtrace::frames(int a1)
{
  int v2; // r0
  int v4; // [sp+0h] [bp-8h] BYREF
  int *v5; // [sp+4h] [bp-4h] BYREF

  if ( *(_DWORD *)a1 != 2 )
    return (unsigned int)aRustc9eb3afe9e;
  v2 = *(_DWORD *)(a1 + 4);
  __dmb(0xBu);
  if ( v2 != 4 )
  {
    v5 = &v4;
    v4 = a1 + 4;
    sub_7A7D0((unsigned int *)(a1 + 4), &v5);
  }
  return *(_QWORD *)(a1 + 16);
}
