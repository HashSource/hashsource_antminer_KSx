// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2564B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  int v10; // [sp-10h] [bp-10h] BYREF
  int v11; // [sp-Ch] [bp-Ch] BYREF
  _DWORD *v12; // [sp-8h] [bp-8h]
  char v13; // [sp-4h] [bp-4h]
  char v14; // [sp-3h] [bp-3h]

  v10 = a1;
  v13 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, aOne, 3);
  v14 = 0;
  v11 = 0;
  v12 = v8;
  core::fmt::builders::DebugTuple::field(&v11, (int)&v10, (int)&off_2E4184);
  if ( v11 )
  {
    if ( !v13 )
    {
      v9 = v12;
      if ( v11 != 1
        || !v14
        || (v12[6] & 4) != 0
        || !(*(int (__fastcall **)(_DWORD, const char *, int))(v12[1] + 12))(*v12, asc_2B3F7F, 1) )
      {
        (*(void (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B3A89, 1);
      }
    }
  }
  __asm { POP             {R4,R5,R11,PC} }
}
