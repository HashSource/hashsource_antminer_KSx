_DWORD *__fastcall <core::time::Duration as core::ops::arith::AddAssign>::add_assign(
        _DWORD *result,
        int a2,
        unsigned int a3,
        int a4,
        int a5)
{
  int v5; // off
  bool v6; // cf
  __int64 v7; // r2
  unsigned int v8; // r1
  unsigned __int64 v9; // kr08_8
  __int64 v10; // r2
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v6 = __CFADD__(__CFADD__(*result, a3), result[1]);
  v5 = (*(_QWORD *)result + (unsigned __int64)a3) >> 32;
  LODWORD(v7) = *result + a3;
  v6 |= __CFADD__(a4, v5);
  HIDWORD(v7) = a4 + v5;
  if ( v6 )
    goto LABEL_8;
  v8 = result[2] + a5;
  if ( v8 <= 0x3B9AC9FF )
    goto LABEL_5;
  v6 = __CFADD__(__CFADD__((_DWORD)v7, 1), HIDWORD(v7));
  ++v7;
  if ( v6 )
LABEL_8:
    core::option::expect_failed();
  v8 -= 1000000000;
LABEL_5:
  v9 = (v8 >> 9) * (unsigned __int64)(unsigned int)"terator$GT$9size_hint17h4a4548e06983d6d7E";
  v6 = __CFADD__(__CFADD__((_DWORD)v7, HIDWORD(v9) >> 7), HIDWORD(v7));
  v10 = v7 + (HIDWORD(v9) >> 7);
  if ( v6 )
  {
    v11[2] = &off_2E5500;
    v11[3] = 1;
    v11[5] = 0;
    v11[0] = 0;
    v11[4] = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v11, (int)&off_2E5508);
  }
  *(_QWORD *)result = v10;
  result[2] = v8 - 1000000000 * (HIDWORD(v9) >> 7);
  return result;
}
