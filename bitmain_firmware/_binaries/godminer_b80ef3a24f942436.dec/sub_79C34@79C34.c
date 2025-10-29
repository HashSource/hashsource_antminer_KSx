char *sub_79C34()
{
  char *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &byte_312434;
  v1 = dword_312478;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_312458;
    v3 = v2;
    v2[1] = &v4;
    return (char *)sub_7C7CC(&v3);
  }
  return result;
}
