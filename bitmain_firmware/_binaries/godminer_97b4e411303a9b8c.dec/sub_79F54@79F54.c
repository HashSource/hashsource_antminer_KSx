char *sub_79F54()
{
  char *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &byte_30CCCC;
  v1 = dword_30CD10;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_30CCF0;
    v3 = v2;
    v2[1] = &v4;
    return (char *)sub_7CAEC(&v3);
  }
  return result;
}
