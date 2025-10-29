int __fastcall std::fs::File::set_times(int a1, int *a2, unsigned int *a3)
{
  int v4; // r0
  unsigned int v5; // lr
  unsigned int v6; // r12
  int v7; // r5
  unsigned int v8; // r1
  unsigned int v9; // r6
  int v10; // r4
  unsigned int v11; // r11
  int result; // r0
  char v13; // cc
  char **v14; // r1
  _DWORD v15[4]; // [sp+0h] [bp-10h] BYREF

  v4 = *a2;
  v5 = a3[4];
  v6 = a3[5];
  v7 = 1073741822;
  v8 = 0;
  v9 = 0;
  v10 = 1073741822;
  if ( a3[2] == 1000000000 )
  {
LABEL_5:
    if ( a3[6] != 1000000000 )
    {
      if ( v6 - !__CFADD__(v5, 0x80000000) != -1 )
      {
        result = (int)&off_2DE800;
        v13 = ((((unsigned __int64)-__SPAIR64__(v6, v5) >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(0, v6, v5 == 0);
        v14 = &off_2DE80C;
        goto LABEL_8;
      }
      v8 = a3[4];
      v7 = a3[6];
    }
    v15[2] = v8;
    v15[3] = v7;
    v15[1] = v10;
    v15[0] = v9;
    if ( futimens(v4, v15) == -1 )
    {
      result = *_errno_location();
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 4) = result;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      return 4;
    }
    return result;
  }
  v9 = *a3;
  v11 = a3[1];
  if ( v11 - !__CFADD__(*a3, 0x80000000) == -1 )
  {
    v10 = a3[2];
    goto LABEL_5;
  }
  result = (int)&off_2DE800;
  v13 = ((((unsigned __int64)-__SPAIR64__(v11, v9) >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(0, v11, v9 == 0);
  v14 = &off_2DE80C;
LABEL_8:
  if ( v13 )
    v14 = &off_2DE800;
  *(_DWORD *)a1 = 2;
  *(_DWORD *)(a1 + 4) = v14;
  return result;
}
