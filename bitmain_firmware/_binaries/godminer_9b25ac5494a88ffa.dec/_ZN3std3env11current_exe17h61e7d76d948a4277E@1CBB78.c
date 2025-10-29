int __fastcall std::env::current_exe(int *a1)
{
  char v2; // r0
  int result; // r0
  int v4; // r1
  _UNKNOWN **v5; // r2
  int v6; // r3
  int v7; // [sp+0h] [bp-1A0h] BYREF
  int v8; // [sp+4h] [bp-19Ch]
  _UNKNOWN **v9; // [sp+8h] [bp-198h]
  int v10; // [sp+Ch] [bp-194h]
  char v11[388]; // [sp+10h] [bp-190h] BYREF
  _DWORD varC[5]; // [sp+194h] [bp-Ch] BYREF

  strcpy(v11, "/proc/self/exe");
  core::ffi::c_str::CStr::from_bytes_with_nul(varC, v11, 15);
  if ( varC[0] )
  {
    v2 = dword_2DE158;
    v8 = dword_2DE158;
    v7 = 1;
    v9 = &off_2DE14C;
    goto LABEL_5;
  }
  sub_1EBE78(&v7, varC[1]);
  if ( v7 == 1 )
  {
    v2 = v8;
LABEL_5:
    __asm { ADD             PC, R1, R0 }
  }
  result = v7;
  v4 = v8;
  v5 = v9;
  v6 = v10;
  *a1 = v7;
  a1[1] = v4;
  a1[2] = (int)v5;
  a1[3] = v6;
  return result;
}
