int __fastcall <std::sys::unix::os::SplitPaths as core::iter::traits::iterator::Iterator>::next(_DWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r8
  int v6; // r11
  int (__fastcall *v7)(int); // r6
  int v8; // r4
  int v9; // r5
  int v10; // r1
  int v11; // r2
  _DWORD v12[3]; // [sp+0h] [bp-Ch] BYREF

  if ( *((_BYTE *)a2 + 12) )
  {
    a1[1] = 0;
    return 0;
  }
  else
  {
    v4 = a2[1];
    v6 = *a2;
    if ( v4 )
    {
      v7 = (int (__fastcall *)(int))a2[2];
      v8 = v4 - 1;
      v9 = 0;
      while ( !v7(v6 + v9) )
      {
        --v8;
        ++v9;
        if ( v8 == -1 )
          goto LABEL_7;
      }
      v4 = v9;
      *a2 = v6 + v9 + 1;
      a2[1] = v8;
    }
    else
    {
LABEL_7:
      *((_BYTE *)a2 + 12) = 1;
    }
    ((void (__fastcall *)(_DWORD *, int, int))a2[4])(v12, v6, v4);
    result = v12[0];
    v10 = v12[1];
    v11 = v12[2];
    *a1 = v12[0];
    a1[1] = v10;
    a1[2] = v11;
  }
  return result;
}
