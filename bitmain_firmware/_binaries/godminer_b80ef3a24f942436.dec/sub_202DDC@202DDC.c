bool __fastcall sub_202DDC(unsigned __int8 *a1, unsigned int a2, int a3, unsigned int a4)
{
  int v8; // r5
  bool v9; // zf
  int v11; // [sp+14h] [bp-2AF4h] BYREF
  char v12; // [sp+18h] [bp-2AF0h]
  int v13; // [sp+1Ch] [bp-2AECh]
  _DWORD s[2746]; // [sp+20h] [bp-2AE8h] BYREF

  miniz_oxide::inflate::core::DecompressorOxide::new(s);
  v8 = 0;
  miniz_oxide::inflate::core::decompress((int)&v11, (int)s, a1, a2, a3, a4, 0, 5);
  v9 = v12 == 0;
  if ( !v12 )
    v9 = v11 == a2;
  if ( v9 )
    return v13 == a4;
  return v8;
}
