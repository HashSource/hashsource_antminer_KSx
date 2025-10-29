int *sub_79C88()
{
  int *result; // r0
  int v1; // r1
  _DWORD v2[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-8h] BYREF
  char v4; // [sp+Ch] [bp-4h] BYREF

  result = &dword_3123AC;
  v1 = dword_3123AC;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = &unk_3123B0;
    v3 = v2;
    v2[1] = &v4;
    return (int *)sub_7C28C(&v3);
  }
  return result;
}
