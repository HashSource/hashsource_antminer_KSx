int __fastcall gimli::read::value::ValueType::from_encoding(unsigned __int8 a1, __int64 a2)
{
  int v3; // r1
  int result; // r0
  int v5; // kr00_4
  int v6; // r1

  v3 = a1;
  result = 11;
  switch ( v3 )
  {
    case 4:
      if ( a2 == 4 )
      {
        return 9;
      }
      else if ( a2 == 8 )
      {
        return 10;
      }
      break;
    case 7:
      v6 = a2 - 1;
      if ( (unsigned __int64)(a2 - 1) < 8 && ((0x8Bu >> v6) & 1) != 0 )
        return byte_2AB810[v6];
      break;
    case 5:
      v5 = a2 - 1;
      if ( (unsigned __int64)(a2 - 1) < 8 && ((0x8Bu >> v5) & 1) != 0 )
        return byte_2AB808[v5];
      break;
  }
  return result;
}
