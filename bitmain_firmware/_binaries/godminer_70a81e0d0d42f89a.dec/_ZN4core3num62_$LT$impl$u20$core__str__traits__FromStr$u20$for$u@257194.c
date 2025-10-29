// Alternative name is '_ZN4core3num60_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$8from_str17h84a0c2e3fb030388E'
int __fastcall core::num::<impl core::str::traits::FromStr for usize>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // lr
  unsigned int v5; // r3
  int v6; // kr00_4
  int v7; // t1
  unsigned int v8; // r4

  if ( !a3 )
  {
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  v3 = *a2;
  if ( v3 == 45 )
  {
    if ( a3 != 1 )
    {
LABEL_9:
      v4 = 0;
      if ( a3 >= 9 )
      {
        while ( 1 )
        {
          v6 = 10 * v4;
          v7 = *a2++;
          v8 = v7 - 48;
          if ( (unsigned int)(v7 - 48) < 0xA )
            v3 = v8;
          if ( v8 > 9 )
            break;
          if ( !is_mul_ok(0xAu, v4) || (v4 = v6 + v3, __CFADD__(v6, v3)) )
          {
            *(_BYTE *)(result + 1) = 2;
            *(_BYTE *)result = 1;
            return result;
          }
          --a3;
          v3 = v8;
          if ( !a3 )
          {
LABEL_19:
            *(_DWORD *)(result + 4) = v4;
            *(_BYTE *)result = 0;
            return result;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = *a2 - 48;
          if ( v5 > 9 )
            break;
          --a3;
          ++a2;
          v4 = v5 + 10 * v4;
          if ( !a3 )
            goto LABEL_19;
        }
      }
    }
  }
  else
  {
    if ( v3 != 43 )
      goto LABEL_9;
    if ( --a3 )
    {
      ++a2;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)result = 1;
  return result;
}
