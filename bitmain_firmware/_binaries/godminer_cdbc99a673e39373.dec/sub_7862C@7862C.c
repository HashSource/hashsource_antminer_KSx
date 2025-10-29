int __fastcall sub_7862C(int result)
{
  int v1; // r2
  _DWORD v2[3]; // [sp+4h] [bp-14h] BYREF
  _DWORD *v3; // [sp+10h] [bp-8h] BYREF
  char v4; // [sp+14h] [bp-4h] BYREF

  v1 = dword_2EAB90;
  __dmb(0xBu);
  if ( v1 != 4 )
  {
    v2[0] = result;
    v2[1] = &unk_2EAB70;
    v3 = v2;
    v2[2] = &v4;
    return sub_7AE88(&v3);
  }
  return result;
}
