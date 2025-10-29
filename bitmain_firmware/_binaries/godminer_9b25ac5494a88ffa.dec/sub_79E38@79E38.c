int *sub_79E38()
{
  int *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &dword_30AC24;
  v1 = dword_30AC24;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_30AC28;
    v3 = v2;
    v2[1] = &v4;
    return (int *)sub_7C43C(&v3);
  }
  return result;
}
