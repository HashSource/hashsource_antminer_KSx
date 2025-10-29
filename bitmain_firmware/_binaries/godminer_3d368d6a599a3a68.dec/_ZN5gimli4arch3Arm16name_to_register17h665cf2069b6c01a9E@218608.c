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
      if ( !bcmp(s1, &unk_2AC6D5, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6D2, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6CF, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6CC, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6C9, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6C6, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6C3, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6C0, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6BD, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6BA, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6B7, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6B4, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6B1, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6AE, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6AB, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6A8, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6A5, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC6A2, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC69F, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC69C, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC699, n) )
        return 1;
      if ( !bcmp(s1, aD31, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC820, n) || !bcmp(s1, &unk_2AC823, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC826, n) || !bcmp(s1, &unk_2AC829, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC82C, n) || !bcmp(s1, &unk_2AC82F, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC832, n) || !bcmp(s1, &unk_2AC835, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC838, n) || !bcmp(s1, &unk_2AC83B, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC83E, n) || !bcmp(s1, &unk_2AC841, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC844, n) || !bcmp(s1, &unk_2AC847, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC84A, n) || !bcmp(s1, &unk_2AC84D, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC850, n) || !bcmp(s1, &unk_2AC853, n) )
        return 1;
      if ( !bcmp(s1, &unk_2AC856, n) || !bcmp(s1, &unk_2AC859, n) )
        return 1;
      if ( bcmp(s1, &unk_2AC85C, n) )
        return bcmp(s1, &unk_2AC85F, n) == 0;
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
        if ( !bcmp(s1, &unk_2AAE16, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE1A, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE1E, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE22, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE26, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE2A, n) )
          return 1;
        if ( !bcmp(s1, &unk_2AAE2E, n) )
          return 1;
        v7 = s1;
        v8 = n;
        v9 = (const char *)&unk_2AAE32;
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
