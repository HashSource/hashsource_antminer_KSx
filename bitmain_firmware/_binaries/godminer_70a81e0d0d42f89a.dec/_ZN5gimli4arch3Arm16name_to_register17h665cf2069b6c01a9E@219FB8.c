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
      if ( !bcmp(s1, &unk_2AE1F5, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1F2, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1EF, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1EC, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1E9, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1E6, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1E3, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1E0, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1DD, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1DA, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1D7, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1D4, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1D1, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1CE, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1CB, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1C8, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1C5, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1C2, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1BF, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1BC, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE1B9, n) )
        return 1;
      if ( !bcmp(s1, aD31, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE340, n) || !bcmp(s1, &unk_2AE343, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE346, n) || !bcmp(s1, &unk_2AE349, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE34C, n) || !bcmp(s1, &unk_2AE34F, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE352, n) || !bcmp(s1, &unk_2AE355, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE358, n) || !bcmp(s1, &unk_2AE35B, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE35E, n) || !bcmp(s1, &unk_2AE361, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE364, n) || !bcmp(s1, &unk_2AE367, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE36A, n) || !bcmp(s1, &unk_2AE36D, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE370, n) || !bcmp(s1, &unk_2AE373, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AE376, n) || !bcmp(s1, &unk_2AE379, n) )
        return 1;
      if ( bcmp(s1, &unk_2AE37C, n) )
        return bcmp(s1, &unk_2AE37F, n) == 0;
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
        if ( !bcmp(s1, &unk_2AC936, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC93A, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC93E, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC942, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC946, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC94A, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AC94E, n) )
          return 1;
        v7 = s1;
        v8 = n;
        v9 = (const char *)&unk_2AC952;
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
