// Alternative name is '_ZN3std4time7Instant11checked_sub17hdd7d44c0540833e3E'
int __fastcall std::time::SystemTime::checked_sub(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12
  int v4; // r5
  int v5; // r2
  int v6; // r12

  v3 = a1;
  if ( a2 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    a1 = *(_QWORD *)a1 - a2;
    if ( ((v4 ^ HIDWORD(a2)) & (v4 ^ HIDWORD(a1))) > -1 )
    {
      v5 = *(_DWORD *)(v3 + 8) - a3;
      if ( v5 < 0 )
      {
        v6 = (unsigned __int64)(a1 - 1) >> 32;
        LODWORD(a1) = a1 - 1;
        if ( (HIDWORD(a1) & (HIDWORD(a1) ^ v6)) <= -1 )
          return a1;
        v5 += 1000000000;
      }
      if ( (unsigned int)v5 > 0x3B9AC9FF )
        core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2DFBF0);
    }
  }
  return a1;
}
