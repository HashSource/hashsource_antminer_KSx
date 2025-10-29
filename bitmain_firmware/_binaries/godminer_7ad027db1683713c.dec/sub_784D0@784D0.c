int *sub_784D0()
{
  int *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  int *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &dword_2E95CC;
  v1 = dword_2E95CC;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_2E95D0;
    v3 = v2;
    v2[1] = &v4;
    return (int *)sub_7AAD4(&v3);
  }
  return result;
}
