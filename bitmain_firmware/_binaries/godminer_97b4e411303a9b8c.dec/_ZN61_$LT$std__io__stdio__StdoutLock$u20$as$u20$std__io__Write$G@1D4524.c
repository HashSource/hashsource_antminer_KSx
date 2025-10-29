int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write_vectored(
        int a1,
        int *a2,
        struct iovec *a3,
        unsigned int a4)
{
  int v4; // r1
  int *v5; // r4
  int result; // r0
  _BYTE v7[4]; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  v5 = (int *)(v4 + 12);
  if ( *(_DWORD *)(v4 + 12) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v7, (int)&off_2DF2E8, (int)&off_2DFB04);
  *(_DWORD *)(v4 + 12) = -1;
  sub_1CFFC4(a1, v4 + 16, a3, a4);
  result = *v5 + 1;
  *v5 = result;
  return result;
}
