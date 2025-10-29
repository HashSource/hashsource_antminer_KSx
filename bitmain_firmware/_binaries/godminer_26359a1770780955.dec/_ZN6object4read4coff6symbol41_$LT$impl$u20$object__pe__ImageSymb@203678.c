_DWORD *__fastcall object::read::coff::symbol::<impl object::pe::ImageSymbol>::address(
        _DWORD *result,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // lr
  __int64 v5; // r2

  v4 = *(unsigned __int16 *)(a2 + 12) - 1;
  if ( v4 >= a4[1] )
  {
    result[1] = aInvalidCoffPeS;
    result[2] = 29;
    *result = 1;
  }
  else
  {
    v5 = a3 + *(unsigned int *)(*a4 + 40 * v4 + 12) + *(unsigned int *)(a2 + 8);
    *result = 0;
    *((_QWORD *)result + 1) = v5;
  }
  return result;
}
