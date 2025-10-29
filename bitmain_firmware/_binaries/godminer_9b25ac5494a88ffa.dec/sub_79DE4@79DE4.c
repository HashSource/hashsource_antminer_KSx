char *sub_79DE4()
{
  char *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &byte_30ACAC;
  v1 = dword_30ACF0;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_30ACD0;
    v3 = v2;
    v2[1] = &v4;
    return (char *)sub_7C97C(&v3);
  }
  return result;
}
