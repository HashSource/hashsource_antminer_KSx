// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1F4FBC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4
  unsigned __int8 v9; // r5
  size_t v10; // r0
  int v11; // r0
  __int16 v12; // r1
  char v13; // r2
  int v14; // r3
  _DWORD v15[2]; // [sp-20h] [bp-20h] BYREF
  unsigned __int8 v16; // [sp-18h] [bp-18h]
  __int16 v17; // [sp-17h] [bp-17h]
  char v18; // [sp-15h] [bp-15h]
  __int16 v19; // [sp-14h] [bp-14h]
  __int16 v20; // [sp-Ch] [bp-Ch]
  char v21; // [sp-Ah] [bp-Ah]
  char v22; // [sp-8h] [bp-8h] BYREF
  __int16 v23; // [sp-7h] [bp-7h]
  char v24; // [sp-5h] [bp-5h]
  int v25; // [sp-4h] [bp-4h]

  v18 = 0;
  v15[0] = 0;
  v19 = 0;
  v15[1] = 438;
  v17 = v9 ^ 1;
  v16 = v9;
  v10 = core::ffi::c_str::CStr::from_ptr::strlen_rt(aD_3);
  sub_1EF278((int)&v22, (int)aD_3, v10 + 1, (int)v15);
  if ( v22 == 4 )
  {
    v11 = v25;
    *(_DWORD *)v8 = 2;
    *(_DWORD *)(v8 + 4) = v11;
    *(_DWORD *)(v8 + 8) = -1;
    __asm { POP             {R4-R6,PC} }
  }
  v12 = v23;
  v13 = v24;
  v14 = v25;
  *(_BYTE *)(v8 + 4) = v22;
  v20 = v12;
  v21 = v13;
  *(_BYTE *)(v8 + 7) = v13;
  *(_WORD *)(v8 + 5) = v12;
  *(_DWORD *)(v8 + 8) = v14;
  *(_DWORD *)v8 = 3;
  __asm { POP             {R4-R6,PC} }
}
