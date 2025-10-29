char *sub_79E9C()
{
  char *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &byte_307C7C;
  v1 = dword_307CC0;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_307CA0;
    v3 = v2;
    v2[1] = &v4;
    return (char *)sub_7CA34(&v3);
  }
  return result;
}
