__int64 __fastcall gimli::read::value::Value::convert(int a1, _BYTE *a2, char a3)
{
  int v3; // r3
  __int64 result; // r0

  v3 = (unsigned __int8)*a2;
  if ( v3 == 9 )
    __asm { ADD             PC, R1, R0 }
  if ( v3 == 10 )
    __asm { ADD             PC, R1, R0 }
  switch ( *a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      __asm { ADD             PC, R3, R2 }
      return result;
    default:
      *(_BYTE *)(a1 + 8) = 44;
      *(_QWORD *)a1 = 1;
      return 1;
  }
}
