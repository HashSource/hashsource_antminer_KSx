int __fastcall core::fmt::builders::DebugStruct::finish_non_exhaustive(int a1)
{
  int result; // r0
  int *v3; // r6
  int v4; // r0
  int v5; // r2
  int v6[3]; // [sp+0h] [bp-10h] BYREF
  char v7; // [sp+Fh] [bp-1h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
    goto LABEL_2;
  v3 = *(int **)a1;
  if ( *(_BYTE *)(a1 + 5) )
  {
    if ( (v3[6] & 4) != 0 )
    {
      v6[2] = (int)&v7;
      v4 = *v3;
      v5 = v3[1];
      v7 = 1;
      v6[0] = v4;
      v6[1] = v5;
      if ( <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(v6, (int)asc_2B6399, 3u) )
      {
LABEL_2:
        *(_BYTE *)(a1 + 4) = 1;
        return 1;
      }
      result = (*(int (__fastcall **)(int, const char *, int))(v3[1] + 12))(*v3, asc_2B639C, 1);
    }
    else
    {
      result = (*(int (__fastcall **)(int, const char *, int))(v3[1] + 12))(*v3, asc_2B639D, 6);
    }
  }
  else
  {
    result = (*(int (__fastcall **)(int, const char *, int))(v3[1] + 12))(*v3, asc_2B63A3, 7);
  }
  *(_BYTE *)(a1 + 4) = result;
  return result;
}
