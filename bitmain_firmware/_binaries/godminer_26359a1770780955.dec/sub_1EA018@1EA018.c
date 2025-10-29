bool __fastcall sub_1EA018(int a1, int a2)
{
  int v13; // r4
  int v14; // r3
  _BOOL4 result; // r0
  size_t v16; // r2

  _R2 = *(char *)(a2 + 8);
  _R0 = 5;
  _R1 = *(char *)(a1 + 8);
  __asm
  {
    UQSUB8          R3, R2, R0
    UQSUB8          R0, R1, R0
  }
  v13 = (unsigned __int8)_R3;
  v14 = (unsigned __int8)_R0;
  if ( (unsigned __int8)_R0 != v13 )
    return 0;
  result = 1;
  if ( v14 == 4 )
  {
    v16 = *(_DWORD *)(a1 + 4);
    result = 0;
    if ( v16 == *(_DWORD *)(a2 + 4) )
      return bcmp(*(const void **)a1, *(const void **)a2, v16) == 0;
  }
  else if ( !v14 && (unsigned __int8)_R2 < 6u )
  {
    if ( (unsigned __int8)_R1 == (unsigned __int8)_R2 )
      __asm { ADD             PC, R1, R0 }
    return 0;
  }
  return result;
}
