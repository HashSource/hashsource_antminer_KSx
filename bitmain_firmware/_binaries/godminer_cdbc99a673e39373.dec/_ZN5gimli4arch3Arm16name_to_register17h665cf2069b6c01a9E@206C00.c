bool __fastcall gimli::arch::Arm::name_to_register(_WORD *s1, size_t n)
{
  int v4; // r0
  bool v5; // zf
  const void *v7; // r0
  size_t v8; // r2
  const char *v9; // r1
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf

  switch ( n )
  {
    case 2u:
      switch ( *s1 )
      {
        case 0x3052:
          return 1;
        case 0x3152:
          return 1;
        case 0x3252:
          return 1;
        case 0x3352:
          return 1;
        case 0x3452:
          return 1;
        case 0x3552:
          return 1;
        case 0x3652:
          return 1;
        case 0x3752:
          return 1;
        case 0x3852:
          return 1;
        case 0x3952:
          return 1;
        case 0x3044:
          return 1;
        case 0x3144:
          return 1;
        case 0x3244:
          return 1;
        case 0x3344:
          return 1;
        case 0x3444:
          return 1;
        case 0x3544:
          return 1;
        case 0x3644:
          return 1;
        case 0x3744:
          return 1;
        case 0x3844:
          return 1;
        case 0x3944:
          return 1;
        case 0x5053:
          return 1;
        case 0x524C:
          return 1;
        case 0x4350:
          return 1;
      }
      v4 = (unsigned __int16)*s1;
      v5 = v4 == 12371;
      if ( v4 != 12371 )
        v5 = *s1 == 12627;
      if ( v5 )
        return 1;
      v10 = (unsigned __int16)*s1;
      v11 = v10 == 12883;
      if ( v10 != 12883 )
        v11 = *s1 == 13139;
      if ( v11 )
        return 1;
      v12 = (unsigned __int16)*s1;
      v13 = v12 == 13395;
      if ( v12 != 13395 )
        v13 = *s1 == 13651;
      if ( v13 )
        return 1;
      v14 = (unsigned __int16)*s1;
      v15 = v14 == 13907;
      if ( v14 != 13907 )
        v15 = *s1 == 14163;
      if ( v15 )
        return 1;
      if ( *s1 == 14419 )
        return 1;
      return *s1 == 14675;
    case 3u:
      if ( !bcmp(s1, aR10, 3u) )
        return 1;
      if ( !bcmp(s1, aR11, 3u) )
        return 1;
      if ( !bcmp(s1, aR12, 3u) )
        return 1;
      if ( !bcmp(s1, aR13, 3u) )
        return 1;
      if ( !bcmp(s1, aR14, 3u) )
        return 1;
      if ( !bcmp(s1, aR15, 3u) )
        return 1;
      if ( !bcmp(s1, aWr0, 3u) )
        return 1;
      if ( !bcmp(s1, aWr1, 3u) )
        return 1;
      if ( !bcmp(s1, aWr2, 3u) )
        return 1;
      if ( !bcmp(s1, aWr3, 3u) )
        return 1;
      if ( !bcmp(s1, aWr4, 3u) )
        return 1;
      if ( !bcmp(s1, aWr5, 3u) )
        return 1;
      if ( !bcmp(s1, aWr6, 3u) )
        return 1;
      if ( !bcmp(s1, aWr7, 3u) )
        return 1;
      if ( !bcmp(s1, aWr8, 3u) )
        return 1;
      if ( !bcmp(s1, aWr9, 3u) )
        return 1;
      if ( !bcmp(s1, aWc0, 3u) )
        return 1;
      if ( !bcmp(s1, aWc1, 3u) )
        return 1;
      if ( !bcmp(s1, aWc2, 3u) )
        return 1;
      if ( !bcmp(s1, aWc3, 3u) )
        return 1;
      if ( !bcmp(s1, aWc4, 3u) )
        return 1;
      if ( !bcmp(s1, aWc5, 3u) )
        return 1;
      if ( !bcmp(s1, aWc6, 3u) )
        return 1;
      if ( !bcmp(s1, aWc7, 3u) )
        return 1;
      if ( !bcmp(s1, &unk_298535, n) )
        return 1;
      if ( !bcmp(s1, &unk_298532, n) )
        return 1;
      if ( !bcmp(s1, &unk_29852F, n) )
        return 1;
      if ( !bcmp(s1, &unk_29852C, n) )
        return 1;
      if ( !bcmp(s1, &unk_298529, n) )
        return 1;
      if ( !bcmp(s1, &unk_298526, n) )
        return 1;
      if ( !bcmp(s1, &unk_298523, n) )
        return 1;
      if ( !bcmp(s1, &unk_298520, n) )
        return 1;
      if ( !bcmp(s1, &unk_29851D, n) )
        return 1;
      if ( !bcmp(s1, &unk_29851A, n) )
        return 1;
      if ( !bcmp(s1, &unk_298517, n) )
        return 1;
      if ( !bcmp(s1, &unk_298514, n) )
        return 1;
      if ( !bcmp(s1, &unk_298511, n) )
        return 1;
      if ( !bcmp(s1, &unk_29850E, n) )
        return 1;
      if ( !bcmp(s1, &unk_29850B, n) )
        return 1;
      if ( !bcmp(s1, &unk_298508, n) )
        return 1;
      if ( !bcmp(s1, &unk_298505, n) )
        return 1;
      if ( !bcmp(s1, &unk_298502, n) )
        return 1;
      if ( !bcmp(s1, &unk_2984FF, n) )
        return 1;
      if ( !bcmp(s1, &unk_2984FC, n) )
        return 1;
      if ( !bcmp(s1, &unk_2984F9, n) )
        return 1;
      if ( !bcmp(s1, aD31, n) )
        return 1;
      if ( !bcmp(s1, &unk_298680, n) || !bcmp(s1, &unk_298683, n) )
        return 1;
      if ( !bcmp(s1, &unk_298686, n) || !bcmp(s1, &unk_298689, n) )
        return 1;
      if ( !bcmp(s1, &unk_29868C, n) || !bcmp(s1, &unk_29868F, n) )
        return 1;
      if ( !bcmp(s1, &unk_298692, n) || !bcmp(s1, &unk_298695, n) )
        return 1;
      if ( !bcmp(s1, &unk_298698, n) || !bcmp(s1, &unk_29869B, n) )
        return 1;
      if ( !bcmp(s1, &unk_29869E, n) || !bcmp(s1, &unk_2986A1, n) )
        return 1;
      if ( !bcmp(s1, &unk_2986A4, n) || !bcmp(s1, &unk_2986A7, n) )
        return 1;
      if ( !bcmp(s1, &unk_2986AA, n) || !bcmp(s1, &unk_2986AD, n) )
        return 1;
      if ( !bcmp(s1, &unk_2986B0, n) || !bcmp(s1, &unk_2986B3, n) )
        return 1;
      if ( !bcmp(s1, &unk_2986B6, n) || !bcmp(s1, &unk_2986B9, n) )
        return 1;
      if ( bcmp(s1, &unk_2986BC, n) )
        return bcmp(s1, &unk_2986BF, n) == 0;
      return 1;
    case 4u:
      switch ( *(_DWORD *)s1 )
      {
        case 0x30315277:
          return 1;
        case 0x31315277:
          return 1;
        case 0x32315277:
          return 1;
        case 0x33315277:
          return 1;
        case 0x34315277:
          return 1;
        case 0x35315277:
          return 1;
      }
      if ( *(_DWORD *)s1 != 1381191763 )
      {
        if ( !bcmp(s1, &unk_296C76, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C7A, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C7E, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C82, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C86, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C8A, n) )
          return 1;
        if ( !bcmp(s1, &unk_296C8E, n) )
          return 1;
        v7 = s1;
        v8 = n;
        v9 = (const char *)&unk_296C92;
        return !bcmp(v7, v9, v8);
      }
      return 1;
    case 5u:
      if ( !bcmp(s1, aWcgr0, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr1, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr2, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr3, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr4, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr5, 5u) )
        return 1;
      if ( !bcmp(s1, aWcgr6, 5u) )
        return 1;
      v7 = s1;
      v8 = 5;
      v9 = aWcgr7;
      return !bcmp(v7, v9, v8);
    case 6u:
      if ( !bcmp(s1, aR8Usr, 6u) )
        return 1;
      if ( !bcmp(s1, aR9Usr, 6u) )
        return 1;
      if ( !bcmp(s1, aR8Fiq, 6u) )
        return 1;
      return !bcmp(s1, aR9Fiq, 6u);
    case 7u:
      if ( !bcmp(s1, aR10Usr, 7u) )
        return 1;
      if ( !bcmp(s1, aR11Usr, 7u) )
        return 1;
      if ( !bcmp(s1, aR12Usr, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Usr, 7u) )
        return 1;
      if ( !bcmp(s1, aR14Usr, 7u) )
        return 1;
      if ( !bcmp(s1, aR10Fiq, 7u) )
        return 1;
      if ( !bcmp(s1, aR11Fiq, 7u) )
        return 1;
      if ( !bcmp(s1, aR12Fiq, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Fiq, 7u) )
        return 1;
      if ( !bcmp(s1, aR14Fiq, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Irq, 7u) )
        return 1;
      if ( !bcmp(s1, aR14Irq, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Abt, 7u) )
        return 1;
      if ( !bcmp(s1, aR14Abt, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Und, 7u) )
        return 1;
      if ( !bcmp(s1, aR14Und, 7u) )
        return 1;
      if ( !bcmp(s1, aR13Svc, 7u) )
        return 1;
      return !bcmp(s1, aR14Svc, 7u);
    case 8u:
      if ( !bcmp(s1, aSpsrFiq, 8u) )
        return 1;
      if ( !bcmp(s1, aSpsrIrq, 8u) )
        return 1;
      if ( !bcmp(s1, aSpsrAbt, 8u) )
        return 1;
      if ( !bcmp(s1, aSpsrUnd, 8u) )
        return 1;
      return !bcmp(s1, aSpsrSvc, 8u);
    default:
      return 0;
  }
}
