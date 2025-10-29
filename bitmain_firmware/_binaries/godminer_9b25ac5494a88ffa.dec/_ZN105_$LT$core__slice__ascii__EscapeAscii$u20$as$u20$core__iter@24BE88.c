int __fastcall <core::slice::ascii::EscapeAscii as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
        int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // lr
  int v3; // r12
  unsigned int v4; // r2
  unsigned int v5; // r0
  unsigned __int8 v7; // r1

  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( !*(_BYTE *)(a1 + 15) )
      goto LABEL_11;
    v1 = *(unsigned __int8 *)(a1 + 21);
    if ( *(unsigned __int8 *)(a1 + 20) >= v1 )
    {
      *(_BYTE *)(a1 + 15) = 0;
      goto LABEL_11;
    }
    goto LABEL_26;
  }
  if ( !*(_BYTE *)(a1 + 15) )
    goto LABEL_5;
  v1 = *(unsigned __int8 *)(a1 + 21);
  if ( *(unsigned __int8 *)(a1 + 20) < v1 )
  {
LABEL_26:
    v7 = v1 - 1;
    *(_BYTE *)(a1 + 21) = v7;
    if ( v7 >= 4u )
      core::panicking::panic_bounds_check(v7, 4, (int)&off_2E2F5C);
    return 1;
  }
  *(_BYTE *)(a1 + 15) = 0;
LABEL_5:
  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)a1 )
  {
    v2 = *(unsigned __int8 *)(v1 - 1);
    *(_DWORD *)a1 = v1 - 1;
    LOBYTE(v1) = 2;
    v3 = 29788;
    switch ( v2 )
    {
      case 9u:
        break;
      case 0xAu:
        v3 = 28252;
        break;
      case 0xBu:
      case 0xCu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
        goto LABEL_19;
      case 0xDu:
        v3 = 29276;
        break;
      case 0x22u:
        v3 = 8796;
        break;
      case 0x27u:
        v3 = 10076;
        break;
      default:
        if ( v2 == 92 )
        {
          v3 = 23644;
        }
        else
        {
LABEL_19:
          if ( v2 - 32 >= 0x5F )
          {
            v3 = (byte_2B34AF[v2 >> 4] << 16) | (byte_2B34AF[v2 & 0xF] << 24) | 0x785C;
            LOBYTE(v1) = 4;
          }
          else
          {
            LOBYTE(v1) = 1;
            v3 = v2;
          }
        }
        break;
    }
    *(_DWORD *)(a1 + 16) = v3;
    *(_BYTE *)(a1 + 20) = 0;
    *(_BYTE *)(a1 + 15) = 1;
    goto LABEL_26;
  }
LABEL_11:
  if ( !*(_BYTE *)(a1 + 8) )
    return 0;
  v4 = *(unsigned __int8 *)(a1 + 14);
  if ( *(unsigned __int8 *)(a1 + 13) >= v4 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 14) = v4 - 1;
    v5 = (unsigned __int8)(v4 - 1);
    if ( v5 >= 4 )
      core::panicking::panic_bounds_check(v5, 4, (int)&off_2E2F5C);
    return 1;
  }
}
