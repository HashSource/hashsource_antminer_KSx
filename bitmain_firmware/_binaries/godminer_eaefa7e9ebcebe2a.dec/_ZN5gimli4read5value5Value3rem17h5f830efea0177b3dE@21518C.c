__int64 __fastcall gimli::read::value::Value::rem(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // r0

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      if ( (*(_QWORD *)(a3 + 8) & a5) == 0 )
        goto LABEL_3;
      goto LABEL_7;
    case 1:
    case 2:
      if ( !*(_BYTE *)(a3 + 1) )
        goto LABEL_3;
      goto LABEL_7;
    case 3:
    case 4:
      if ( !*(_WORD *)(a3 + 2) )
        goto LABEL_3;
      goto LABEL_7;
    case 5:
    case 6:
      if ( *(_DWORD *)(a3 + 4) )
        goto LABEL_7;
      goto LABEL_3;
    case 7:
    case 8:
      if ( *(_QWORD *)(a3 + 8) )
        goto LABEL_7;
LABEL_3:
      *(_BYTE *)(a1 + 8) = 42;
      *(_QWORD *)a1 = 1;
      return 1;
    default:
LABEL_7:
      __asm { ADD             PC, R10, R9 }
      return result;
  }
}
