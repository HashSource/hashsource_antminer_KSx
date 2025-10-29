int __fastcall <core::time::Duration as core::ops::arith::Add>::add(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // kr00_8
  unsigned int v6; // r2
  bool v7; // cf
  unsigned int v8; // r3
  int result; // r0
  _DWORD v10[6]; // [sp+0h] [bp-18h] BYREF

  v5 = a1 + a4;
  if ( __CFADD__(__CFADD__((_DWORD)a1, (_DWORD)a4), HIDWORD(a1))
     | __CFADD__(HIDWORD(a4), (unsigned __int64)(a1 + a4) >> 32) )
  {
    goto LABEL_7;
  }
  v6 = a5 + a2;
  if ( v6 <= 0x3B9AC9FF )
    goto LABEL_5;
  v7 = __CFADD__(__CFADD__((_DWORD)v5, 1), HIDWORD(v5));
  ++v5;
  if ( v7 )
LABEL_7:
    core::option::expect_failed((int)aOverflowWhenAd_0, 30, (int)&off_2CF518);
  v6 -= 1000000000;
LABEL_5:
  v8 = ((v6 >> 9)
      * (unsigned __int64)(unsigned int)"FromBytesWithNulErrorKind$u20$as$u20$core..fmt..Debug$GT$3fmt17h177e3efef8767ab6E") >> 32;
  result = v5 + (v8 >> 7);
  if ( (__CFADD__((_DWORD)v5, v8 >> 7) + (unsigned __int64)HIDWORD(v5)) >> 32 == 1 )
  {
    v10[2] = &off_2CF500;
    v10[3] = 1;
    v10[5] = 0;
    v10[0] = 0;
    v10[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v10, (int)&off_2CF508);
  }
  return result;
}
