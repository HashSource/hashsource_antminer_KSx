_DWORD *__fastcall sub_1B2DD0(_DWORD *result)
{
  if ( *result >= 2u )
    return (_DWORD *)close(result[1]);
  return result;
}
