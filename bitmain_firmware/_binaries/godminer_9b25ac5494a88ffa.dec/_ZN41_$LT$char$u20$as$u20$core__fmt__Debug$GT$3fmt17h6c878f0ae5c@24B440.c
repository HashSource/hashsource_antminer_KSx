int __fastcall <char as core::fmt::Debug>::fmt(unsigned int *a1, _DWORD *a2)
{
  int v3; // r1
  int result; // r0
  unsigned int v5; // r8
  unsigned int v6; // r6
  int v7; // r1

  if ( !(*(int (__fastcall **)(_DWORD, int))(a2[1] + 16))(*a2, 39) )
  {
    v5 = *a1;
    v6 = 1114114;
    switch ( *a1 )
    {
      case 0u:
        goto LABEL_13;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
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
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
        goto LABEL_7;
      case 9u:
        v6 = 1114114;
        goto LABEL_13;
      case 0xAu:
        v6 = 1114114;
        goto LABEL_13;
      case 0xDu:
        v6 = 1114114;
        goto LABEL_13;
      case 0x27u:
        goto LABEL_6;
      default:
        if ( v5 == 92 )
        {
LABEL_6:
          v6 = 1114114;
        }
        else
        {
LABEL_7:
          if ( core::unicode::unicode_data::grapheme_extend::lookup(*a1, v3)
            || !core::unicode::printable::is_printable(v5) )
          {
            v6 = v5;
          }
          else
          {
            v6 = 1114113;
          }
        }
LABEL_13:
        v7 = 3;
        if ( v6 > 0x10FFFF )
          v7 = v6 - 1114112;
        __asm { ADD             PC, R3, R4 }
        return result;
    }
  }
  return 1;
}
