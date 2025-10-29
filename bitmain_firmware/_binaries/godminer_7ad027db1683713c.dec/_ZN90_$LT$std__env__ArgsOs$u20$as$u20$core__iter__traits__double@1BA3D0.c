_DWORD *__fastcall <std::env::ArgsOs as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
        _DWORD *result,
        int a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // t1
  int v5; // r1
  int v6; // r2

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == *(_DWORD *)(a2 + 4) )
  {
    result[1] = 0;
  }
  else
  {
    v4 = *(_DWORD *)(v2 - 12);
    v3 = v2 - 12;
    *(_DWORD *)(a2 + 8) = v3;
    v5 = *(_DWORD *)(v3 + 4);
    v6 = *(_DWORD *)(v3 + 8);
    *result = v4;
    result[1] = v5;
    result[2] = v6;
  }
  return result;
}
