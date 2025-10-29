int __fastcall gimli::read::<impl gimli::common::Register>::from_u64(int result, unsigned __int64 a2)
{
  if ( a2 >= 0x10000 )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_BYTE *)result = 59;
  }
  else
  {
    *(_WORD *)(result + 2) = a2;
    *(_BYTE *)result = 75;
  }
  return result;
}
