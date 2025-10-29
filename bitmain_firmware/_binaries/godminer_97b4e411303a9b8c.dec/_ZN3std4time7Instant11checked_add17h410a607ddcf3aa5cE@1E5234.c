// Alternative name is '_ZN3std4time10SystemTime11checked_add17h52dc3e7d69744f1bE'
int __fastcall std::time::Instant::checked_add(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r6
  int v4; // r12
  int v5; // r5
  unsigned int v6; // r3

  v4 = a1;
  HIDWORD(a1) = 0;
  if ( a2 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v3 = (unsigned __int64)(*(_QWORD *)a1 + a2) >> 32;
    LODWORD(a1) = *(_DWORD *)a1 + a2;
    HIDWORD(a1) = (int)((v5 ^ v3) & ~(v5 ^ HIDWORD(a2))) > -1;
  }
  if ( HIDWORD(a1) )
  {
    v6 = *(_DWORD *)(v4 + 8) + a3;
    if ( v6 > 0x3B9AC9FF )
    {
      a1 = __PAIR64__(v3, a1) + 1;
      if ( (int)((v3 ^ HIDWORD(a1)) & ~v3) > -1 && v6 - 1000000000 > 0x3B9AC9FF )
        core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2E0BF0);
    }
  }
  return a1;
}
