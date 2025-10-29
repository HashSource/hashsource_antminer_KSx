int __fastcall std::sys::unix::futex::futex_wait(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v8; // r3
  __int64 v10; // r0
  int v11; // r2
  unsigned int v12; // r7
  int v13; // r2
  int v14; // r6
  __int64 *v15; // r0
  int v16; // r0
  __int64 *v18; // [sp+10h] [bp-Ch]
  __int64 v19; // [sp+14h] [bp-8h] BYREF

  v8 = 0;
  if ( a5 == 1000000000 )
    goto LABEL_13;
  v10 = sub_1F3DCC(1);
  v8 = 0;
  if ( a4 < 0 )
    goto LABEL_13;
  v12 = (v10 + __PAIR64__(a4, a3)) >> 32;
  LODWORD(v10) = v10 + a3;
  if ( (int)((HIDWORD(v10) ^ v12) & ~(HIDWORD(v10) ^ a4)) <= -1 )
    goto LABEL_13;
  HIDWORD(v10) = v11 + a5;
  if ( (unsigned int)(v11 + a5) <= 0x3B9AC9FF )
  {
    v13 = v12;
LABEL_11:
    if ( v13 - !__CFADD__((_DWORD)v10, 0x80000000) == -1 )
    {
      v8 = 1;
      v19 = v10;
    }
    goto LABEL_13;
  }
  v13 = (__PAIR64__(v12, v10) + 1) >> 32;
  LODWORD(v10) = v10 + 1;
  if ( ((v12 ^ v13) & ~v12 & 0x80000000) == 0 )
  {
    HIDWORD(v10) -= 1000000000;
    if ( HIDWORD(v10) > 0x3B9AC9FF )
      core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2DFBF0);
    goto LABEL_11;
  }
LABEL_13:
  v14 = 1;
  v18 = (__int64 *)v8;
  while ( *a1 == a2 )
  {
    v15 = v18;
    if ( v18 )
      v15 = &v19;
    if ( syscall(240, a1, 137, a2, v15, 0, -1) >= 0 )
      break;
    v16 = *_errno_location();
    if ( v16 != 4 )
    {
      if ( v16 == 110 )
        return 0;
      return v14;
    }
  }
  return v14;
}
