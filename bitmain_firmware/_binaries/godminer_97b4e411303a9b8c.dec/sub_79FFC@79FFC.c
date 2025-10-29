int __fastcall sub_79FFC(int result)
{
  int v1; // r2
  _DWORD v2[3]; // [sp+4h] [bp-14h] BYREF
  _DWORD *v3; // [sp+10h] [bp-8h] BYREF
  char v4; // [sp+14h] [bp-4h] BYREF

  v1 = dword_30CD10;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = result;
    v2[1] = &unk_30CCF0;
    v3 = v2;
    v2[2] = &v4;
    return sub_7C858(&v3);
  }
  return result;
}
