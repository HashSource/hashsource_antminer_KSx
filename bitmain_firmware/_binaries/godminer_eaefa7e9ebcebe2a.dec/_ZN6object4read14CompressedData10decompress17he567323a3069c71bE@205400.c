_DWORD *__fastcall object::read::CompressedData::decompress(_DWORD *result, int a2)
{
  __int64 v2; // r4

  if ( *(_BYTE *)(a2 + 16) )
  {
    *result = 2;
    result[1] = aUnsupportedCom;
    result[2] = 28;
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
    *result = 0;
    *(_QWORD *)(result + 1) = v2;
  }
  return result;
}
