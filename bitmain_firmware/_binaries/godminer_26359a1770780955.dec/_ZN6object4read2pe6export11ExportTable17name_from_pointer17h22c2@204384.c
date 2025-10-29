int __fastcall object::read::pe::export::ExportTable::name_from_pointer(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r6
  int v8; // r0
  unsigned int v9; // r1
  bool v10; // cc

  v4 = a2[1];
  v5 = a3 - a2[8];
  v6 = v4 - v5;
  if ( v4 < v5 )
    v6 = 0;
  if ( v4 <= v5 )
    goto LABEL_7;
  v7 = *a2 + v5;
  v8 = memchr::memchr::fallback::memchr(0, v7, v6);
  v10 = v8 != 0;
  if ( v8 )
    v10 = v6 > v9;
  if ( v10 )
  {
    a1[1] = v7;
    a1[2] = v9;
    *a1 = 0;
    return 0;
  }
  else
  {
LABEL_7:
    a1[1] = aInvalidPeExpor_3;
    a1[2] = 30;
    *a1 = 1;
    return 1;
  }
}
