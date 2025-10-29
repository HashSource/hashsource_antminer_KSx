void __fastcall <std::sys_common::net::LookupHost as core::convert::TryFrom<(&str,u16)>>::try_from(_DWORD *a1, int a2)
{
  _BYTE *v3; // r1
  unsigned int v4; // r6
  __int16 v6; // r5
  _BYTE v7[388]; // [sp+0h] [bp-190h] BYREF
  _DWORD v8[3]; // [sp+184h] [bp-Ch] BYREF

  v3 = *(_BYTE **)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v6 = *(_WORD *)(a2 + 8);
  if ( v4 >> 7 > 2 )
  {
    sub_787EC(a1, v3, *(_DWORD *)(a2 + 4), v6);
  }
  else
  {
    memcpy(v7, v3, *(_DWORD *)(a2 + 4));
    v7[v4] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v8, v7, v4 + 1);
    if ( v8[0] )
    {
      *a1 = 1;
      a1[1] = dword_2CA158;
      a1[2] = &off_2CA14C;
    }
    else
    {
      sub_1E45B4((int)a1, v6, (char *)v8[1]);
    }
  }
}
