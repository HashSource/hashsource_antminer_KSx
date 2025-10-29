_DWORD *__fastcall object::read::pe::import::ImportDescriptorIterator::next(_DWORD *result, int a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // lr
  unsigned int v4; // r3
  const char *v5; // r2
  bool v6; // zf
  int v7; // r1
  bool v8; // zf

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = v3 - 20;
  if ( v3 < 0x14 )
    v4 = 0;
  v5 = aRustc9eb3afe9e_0;
  if ( v3 < 0x14 )
    v2 = 0;
  else
    v5 = (const char *)(v2 + 5);
  *(_DWORD *)a2 = v5;
  *(_DWORD *)(a2 + 4) = v4;
  if ( v3 >= 0x14 )
  {
    v6 = *v2 == 0;
    if ( !*v2 )
      v6 = v2[1] == 0;
    if ( !v6 )
      goto LABEL_11;
    v7 = v2[2];
    v8 = v7 == 0;
    if ( !v7 )
      v8 = v2[3] == 0;
    if ( v8 && !v2[4] )
    {
      *result = 0;
      result[1] = 0;
    }
    else
    {
LABEL_11:
      *result = 0;
      result[1] = v2;
    }
  }
  else
  {
    *result = aMissingPeNullI;
    result[1] = 33;
  }
  return result;
}
