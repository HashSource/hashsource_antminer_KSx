_DWORD *__fastcall sub_19DF40(_DWORD *result)
{
  if ( *result >= 2u )
    return (_DWORD *)close(result[1]);
  return result;
}
